#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,""); //�.�. � �������
    int num;
    char contin[] = "hello";
    do
    {
        printf("������� �����: ");
        scanf("%d",&num);
        if (num>10)
        {
            printf("%d ������ ������",num);
        }
        else
        {
        printf("%d ������ ������",num);
        }
    printf("\nYes/No?\n");
    scanf("%5s", contin);
    //scanf("%s", &contin); //���������� ��� ����������� ������
    //printf("%s", contin);
    system("cls"); //������� �������
    //}while (contin[0]='h', contin[1]='e',contin[2]='l',contin[3]='l',contin[4]='o');
    }while (contin == 'hello');
    return 0;
}
