#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main()
{
    const int MAX_ROW = 100;
    const int MAX_COL = 100;
    int row,col,input, buf;
    setlocale(LC_ALL,"");
    printf("Введите количество строк: ");
    scanf("%i",&row);
    printf("Введите количество столбцов: ");
    scanf("%i",&col);
    int a[MAX_ROW][MAX_COL];
    for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                printf("a[%d][%d]=",j,i );
                scanf("%d",&a[j][i]);
            }
    }
    for (int i =0; i<row;i++){
        for (int j=0; j<col; j++){
            printf("%d\t", a[j][i]);
        }
    printf("\n");
    }
    printf("\n\n\n\n\n\n\n");

    for (int i =0; i<row-1;i++){
        for (int j=i+1; j<col; j++){
        buf = a[j][i];
        a[j][i]=a[i][j];
        a[i][j]=buf;
        }}


        for (int i =0; i<col;i++){
        for (int j=0; j<row; j++){
            printf("%d\t", a[j][i]);
        }
    printf("\n");
    }
}
