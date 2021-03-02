#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int inp(int min, int max, char text[15],int i)
{
    int A;
 do{

    printf("Введите %s",text);
    if (i!=-1) printf(" [%i]= ",i);
    scanf("%i",&A);
    if(A>max||A<min)
    {
        printf("Ошибка:\nВведено значение больше 100 или меньше 0");
    }
 }while(A>max||A<min);
 return A;
}





int main()
{
    setlocale(LC_ALL,"");
    int MAX = inp(0,15,"размерность массива: ", -1);
    int array[MAX];
    for(int i = 0; i<MAX;i++){
        array[i]=inp(0,100,"элемент массива",i);
    }


    int per, check, check_cmp;

    do{
        check =0;
           for(int i = 0; i<MAX-1; i++)
        {
            check_cmp++;
        if(array[i]>array[i+1]){
            int buf;
            check++;
            per++;
            buf = array[i];
            array[i]=array[i+1];
            array[i+1]=buf;
            }
        }
    }while(check>0);

    printf("\n\n\n\n\nВывод массива:\n");
    for(int i = 0; i<MAX;i++){
    printf("%d\n", array[i]);
    }
    printf("Проделано перестановок: %d", per);
    printf("\nКоличество проверок: %d", check_cmp);
}
