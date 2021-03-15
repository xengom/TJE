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
        printf("������ �����ϴ�.\n");
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
    printf("�޴�\n");
    printf("1. �߰�\n");
    printf("2. �˻�\n");
    printf("3. ���\n");
    printf("4. ����\n");
    printf("��ȣ�� �Է��ϼ���: ");
    scanf("%d", &i);
    getchar();
    return i;
}
void add(FILE *fp)
{ 
    book a;
    printf("������ �̸�: ");
    gets(a.name);
    printf("����: ");
    gets(a.author);
    printf("���ǻ��: ");
    gets(a.company);
    fseek(fp, 0, SEEK_END);
    fwrite(&a, sizeof(book), 1, fp);
}
void find(FILE *fp)
{
    char arr[SIZE];
    book find;
    printf("������ �̸��� �Է��ϼ���: ");
    gets(arr);
    fseek(fp, 0, SEEK_SET);
    while (!feof(fp))
    {
        fread(&find, sizeof(book), 1, fp);
        if (strcmp(find.name,arr)==0)
        {
            printf("����: %s\n",find.author);
            printf("���ǻ��: %s\n",find.company);
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
		printf("������: %s\n",output.name);
        printf("����: %s\n",output.author);
        printf("���ǻ��: %s\n",output.company);
        i++;
    }
    printf("\n\n�� �Ǽ� : %d\n\n",i-1); 
} 

