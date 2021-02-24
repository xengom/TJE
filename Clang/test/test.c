#include <stdio.h>
#include <windows.h>
#include "Turboc.h"

#define LEFT 75
#define RIGHT 77
#define UP 72
#define BX 5
#define BY 1
#define BW 10
#define BH 20
#define ESC 27
#define DOWN 80
#define PGUP 73
#define PGDN 81
#define R 12
#define G 10
#define B 9
#define Y 14
#define W 15

void DrawScreen();
int start();
BOOL ProcessKey();
void PrintBrick(BOOL Show);
int GetAround(int x, int y, int b, int r);
BOOL MoveDown();
void TestFull();
void DrawBoard();
void DrawNext();
void PrintInfo();
int human(int x, int y, int man_flag);

char* arTile[][3] = {
    {". ","��","��"},
    {"  ","��","��"},
    {"  ","##","II"},
    {"  ","��","��"},
};
int ttype = 0;
int board[BW + 2][BH + 2];
int nx, ny;
int brick, rot;
int nbrick;
int score;
int bricknum;
bool man_flag = false;

struct Point {
    int x, y;
};
enum {
    BLACK,
    D_BLUE,
    D_GREEN,
    D_SKYBLUE,
    D_RED,
    D_VIOLET,
    D_YELLOW,
    GRAY,
    D_GRAY,
    BLUE,
    GREEN,
    SKYBLUE,
    RED,
    VIOLET,
    YELLOW,
    WHITE,
};


void TC(int back, int font)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), back * 16 + font);
}


Point Shape[][4][4] = {
    { {0,0,1,0,2,0,-1,0}, {0,0,0,1,0,-1,0,-2}, {0,0,1,0,2,0,-1,0}, {0,0,0,1,0,-1,0,-2} },
    { {0,0,1,0,0,1,1,1}, {0,0,1,0,0,1,1,1}, {0,0,1,0,0,1,1,1}, {0,0,1,0,0,1,1,1} },
    { {0,0,-1,0,0,-1,1,-1}, {0,0,0,1,-1,0,-1,-1}, {0,0,-1,0,0,-1,1,-1}, {0,0,0,1,-1,0,-1,-1} },
    { {0,0,-1,-1,0,-1,1,0}, {0,0,-1,0,-1,1,0,-1}, {0,0,-1,-1,0,-1,1,0}, {0,0,-1,0,-1,1,0,-1} },
    { {0,0,-1,0,1,0,-1,-1}, {0,0,0,-1,0,1,-1,1}, {0,0,-1,0,1,0,1,1}, {0,0,0,-1,0,1,1,-1} },
    { {0,0,1,0,-1,0,1,-1}, {0,0,0,1,0,-1,-1,-1}, {0,0,1,0,-1,0,-1,1}, {0,0,0,-1,0,1,1,1} },
    { {0,0,-1,0,1,0,0,1}, {0,0,0,-1,0,1,1,0}, {0,0,-1,0,1,0,0,-1}, {0,0,-1,0,0,-1,0,1} },
};
enum { EMPTY, BRICK, WALL };

void main()
{
    int x, y;
    int nFrame, nStay;

    start();
    setcursortype(NOCURSOR);
    randomize();

    for (; 3;) {
        clrscr();
        for (x = 0; x < BW + 2; x++) {
            for (y = 0; y < BH + 2; y++) {
                board[x][y] = (y == 0 || y == BH + 1 || x == 0 || x == BW + 1) ? WALL : EMPTY;
            }
        }
        DrawScreen();
        nFrame = 20;
        score = 0;
        bricknum = 0;
        nbrick = random(sizeof(Shape) / sizeof(Shape[0]));
        for (; 1;) {
            bricknum++;
            brick = nbrick;
            nbrick = random(sizeof(Shape) / sizeof(Shape[0]));
            DrawNext();
            nx = BW / 2;
            ny = 3;
            rot = 0;
            PrintBrick(TRUE);

            human(30, 5, 2);
            human(30, 5, man_flag);

            if (GetAround(nx, ny, brick, rot) != EMPTY) break;
            nStay = nFrame;
            for (; 2;) {
                if (--nStay == 0) {
                    nStay = nFrame;
                    if (MoveDown()) break;
                }
                if (ProcessKey()) break;
                delay(1000 / 20);
            }
            if (bricknum % 5 == 0 && nFrame > 5) {
                nFrame--;
                nFrame--;
            }
        }
        clrscr();
        gotoxy(30, 12); puts("G A M E  O V E R");
        gotoxy(25, 14); puts("�ٽ� �����Ϸ��� Y�� ��������");
        if (tolower(getch()) != 'y') break;
    }
    setcursortype(NORMALCURSOR);

    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xf9);
        printf("Korea\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xb0);
        printf("Korea\n");
        for (;;);
    }


}

void DrawScreen()
{
    int x, y;
    for (x = 0; x < BW + 2; x++) {
        for (y = 0; y < BH + 2; y++) {
            gotoxy(BX + x * 2, BY + y);
            puts(arTile[ttype][board[x][y]]);
        }
    }
    gotoxy(50, 3); puts("Tetris Ver 1.1");
    gotoxy(50, 5); puts("�¿�:�̵�, ��:ȸ��, �Ʒ�:����");
    gotoxy(50, 6); puts("����:���� ����, ESC:����");
    gotoxy(50, 7); puts("P:����, PgUp,PgDn:��� �ٲ�");
    DrawNext();
    PrintInfo();
}


int start()
{
    int select;
    gotoxy(31, 8); puts("H E L L O");
    gotoxy(25, 10); puts("������ �������ּ���.");
    gotoxy(25, 11); puts("1. ��Ʈ����");
    gotoxy(25, 12); printf("���� : ");
    scanf("%d", &select);

    if (select == 1) return 0;
    else {
        gotoxy(25, 14); printf("�߸� �Է��ϼ̽��ϴ�!");
        delay(3000);
        exit(0);
    }
}


BOOL ProcessKey()
{
    int ch, trot;
    if (kbhit()) {
        ch = getch();
        if (ch == 0xE0 || ch == 0) {
            ch = getch();
            switch (ch) {
            case LEFT:
                if (GetAround(nx - 1, ny, brick, rot) == EMPTY) {
                    PrintBrick(FALSE);
                    nx--;
                    PrintBrick(TRUE);
                }
                break;
            case RIGHT:
                if (GetAround(nx + 1, ny, brick, rot) == EMPTY) {
                    PrintBrick(FALSE);
                    nx++;
                    PrintBrick(TRUE);
                }
                break;
            case UP:
                trot = (rot == 3 ? 0 : rot + 1);
                if (GetAround(nx, ny, brick, trot) == EMPTY) {
                    PrintBrick(FALSE);
                    rot = trot;
                    PrintBrick(TRUE);
                }
                break;
            case DOWN:
                if (MoveDown()) {
                    return TRUE;
                }
                break;
            case PGDN:
                ttype++;
                if (ttype == sizeof(arTile) / sizeof(arTile[0])) ttype = 0;
                DrawScreen();
                PrintBrick(TRUE);
                break;
            case PGUP:
                if (ttype == 0) ttype = sizeof(arTile) / sizeof(arTile[0]);
                ttype--;
                DrawScreen();
                PrintBrick(TRUE);
                break;
            }
        }
        else {
            switch (ch) {
            case ESC:
                clrscr();
                setcursortype(NORMALCURSOR);
                gotoxy(30, 12); printf("G A M E  E N D");
                delay(3000);
                exit(0);
            case ' ':
                man_flag = !man_flag;
                while (MoveDown() == FALSE) { ; }
                return TRUE;
            case 'p':
                clrscr();
                gotoxy(15, 10);
                puts("Tetris ��� ����. �ٽ� �����Ϸ��� �ƹ� Ű�� ��������.");
                getch();
                clrscr();
                DrawScreen();
                PrintBrick(TRUE);
                break;
            }
        }
    }
    return FALSE;
}

void PrintBrick(BOOL Show)
{
    int i;
    for (i = 0; i < 4; i++) {
        gotoxy(BX + (Shape[brick][rot][i].x + nx) * 2, BY + Shape[brick][rot][i].y + ny);
        puts(arTile[ttype][Show ? BRICK : EMPTY]);
    }
}

int GetAround(int x, int y, int b, int r)
{
    int i, k = EMPTY;
    for (i = 0; i < 4; i++) {
        k = max(k, board[x + Shape[b][r][i].x][y + Shape[b][r][i].y]);
    }
    return k;
}

BOOL MoveDown()
{
    if (GetAround(nx, ny + 1, brick, rot) != EMPTY) {
        TestFull();
        return TRUE;
    }
    PrintBrick(FALSE);
    ny++;
    PrintBrick(TRUE);
    return FALSE;
}

void TestFull()
{
    int i, x, y, ty;
    int count = 0;
    static int arScoreInc[] = { 0,1,3,8,20 };
    for (i = 0; i < 4; i++) {
        board[nx + Shape[brick][rot][i].x][ny + Shape[brick][rot][i].y] = BRICK;
    }
    for (y = 1; y < BH + 1; y++) {
        for (x = 1; x < BW + 1; x++) {
            if (board[x][y] != BRICK) break;
        }
        if (x == BW + 1) {
            count++;
            for (ty = y; ty > 1; ty--) {
                for (x = 1; x < BW + 1; x++) {
                    board[x][ty] = board[x][ty - 1];
                }
            }
            DrawBoard();
            delay(200);
        }
    }
    score += arScoreInc[count];
    PrintInfo();
}

void DrawBoard()
{
    int x, y;
    for (x = 1; x < BW + 1; x++) {
        for (y = 1; y < BH + 1; y++) {
            gotoxy(BX + x * 2, BY + y);
            puts(arTile[ttype][board[x][y]]);
        }
    }
}

void DrawNext()
{
    int x, y, i;

    for (x = 50; x <= 70; x += 2) {
        for (y = 12; y <= 18; y++) {
            gotoxy(x, y);
            puts(arTile[ttype][(x == 50 || x == 70 || y == 12 || y == 18) ? WALL : EMPTY]);
        }
    }

    for (i = 0; i < 4; i++) {
        gotoxy(60 + (Shape[nbrick][0][i].x) * 2, 15 + Shape[nbrick][0][i].y);
        puts(arTile[ttype][BRICK]);
    }
}

void PrintInfo()
{
    gotoxy(50, 9); printf("���� : %d     ", score);
    gotoxy(50, 10); printf("���� : %d ��  ", bricknum);
}

int human(int x, int y, int man_flag) {  //�����߿� ���� ���϶� ���� ������.
    int i, j, k;

    int man[8][8] = {
     {0,0,0,1,1,0,0,0},
     {0,0,0,1,1,0,0,0},
     {0,1,0,2,0,0,0,0},
     {0,1,1,1,1,1,1,0},
     {0,0,0,1,1,0,1,0},
     {0,0,1,0,0,1,0,0},
     {0,0,1,0,0,1,0,0},
     {0,1,1,0,0,1,1,0}
    };
    int man2[8][8] = {
     {0,0,0,1,1,0,0,0},
     {0,0,0,1,1,0,0,0},
     {0,0,0,2,0,0,1,0},
     {0,1,1,1,1,1,1,0},
     {0,1,0,1,1,0,0,0},
     {0,0,1,0,0,1,0,0},
     {0,0,1,0,0,1,0,0},
     {0,1,1,0,0,1,1,0}
    };
    if (man_flag == 0) {
        for (i = 0; i < 8; i++) {
            k = 0;
            for (j = 0; j < 8; j++) {
                gotoxy(x + k, y + i);
                if (man[i][j] == 1) {
                    printf("��");
                }
                else if (man[i][j] == 2) {
                    printf(" ��");
                }
                k += 2;
            }
        }
    }
    else if (man_flag == 1) {
        for (i = 0; i < 8; i++) {
            k = 0;
            for (j = 0; j < 8; j++) {
                gotoxy(x + k, y + i);
                if (man2[i][j] == 1) {
                    printf("��");
                }
                else if (man2[i][j] == 2) {
                    printf(" ��");
                }
                k += 2;
            }
        }
    }
    else
    {
        for (i = 0; i < 8; i++) {
            k = 0;
            for (j = 0; j < 8; j++) {
                gotoxy(x + k, y + i);
                printf("  ");
                k += 2;
            }
        }
    }
    //if (speed>=200) {
    // speed-=10;
    //}
    return 1;
}