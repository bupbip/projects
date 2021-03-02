#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,""); //р.я. в консоли
    int num;
    char contin[] = "hello";
    do
    {
        printf("Введите число: ");
        scanf("%d",&num);
        if (num>10)
        {
            printf("%d больше десяти",num);
        }
        else
        {
        printf("%d меньше десяти",num);
        }
    printf("\nYes/No?\n");
    scanf("%5s", contin);
    //scanf("%s", &contin); //переменная для продолжения работы
    //printf("%s", contin);
    system("cls"); //очистка консоли
    //}while (contin[0]='h', contin[1]='e',contin[2]='l',contin[3]='l',contin[4]='o');
    }while (contin == 'hello');
    return 0;
}
