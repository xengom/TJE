#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#define SIZE 100
typedef struct BOOK {
    char name[SIZE];
    char author[SIZE];
    char company[SIZE];
} book;
int menu(void);
void add(FILE *fp);
void find(FILE *fp);
void output(FILE *fp);

int main(void)
{
    int num = 0;
    FILE *fp = NULL;
    if ((fp=fopen("booklist.bin","a+"))==NULL)
    {
        printf("파일이 없습니다.\n");
        exit(1);
    }
    while (1)
    {
        num = menu();
        if (num == 1)
            add(fp);
        else if (num == 2)
            find(fp);
        else if (num == 3)
            output(fp);
        else
            break;
    }
    fclose(fp);
    return 0;
}
int menu(void)
{
	//system( "cls" );
    int i = 0;
    printf("메뉴\n");
    printf("1. 추가\n");
    printf("2. 검색\n");
    printf("3. 출력\n");
    printf("4. 종료\n");
    printf("번호를 입력하세요: ");
    scanf("%d", &i);
    getchar();
    return i;
}
void add(FILE *fp)
{ 
    book a;
    printf("도서의 이름: ");
    gets(a.name);
    printf("저자: ");
    gets(a.author);
    printf("출판사명: ");
    gets(a.company);
    fseek(fp, 0, SEEK_END);
    fwrite(&a, sizeof(book), 1, fp);
}
void find(FILE *fp)
{
    char arr[SIZE];
    book find;
    printf("도서의 이름을 입력하세요: ");
    gets(arr);
    fseek(fp, 0, SEEK_SET);
    while (!feof(fp))
    {
        fread(&find, sizeof(book), 1, fp);
        if (strcmp(find.name,arr)==0)
        {
            printf("저자: %s\n",find.author);
            printf("출판사명: %s\n",find.company);
            break;
        }
    }
}

void output(FILE *fp){
	book output;
	int i=1;
	while (!feof(fp))
    {
        fread(&output, sizeof(book), 1, fp);
        printf("-----------%d---------------\n",i);
		printf("도서명: %s\n",output.name);
        printf("저자: %s\n",output.author);
        printf("출판사명: %s\n",output.company);
        i++;
    }
    printf("\n\n총 권수 : %d\n\n",i-1); 
} 

