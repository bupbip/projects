#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,min=1,max=1,inp;
    printf("matrix AxB: ");
    scanf("%i %i",&A,&B);
    int array[A][B];
    for (int i=0;i<A;i++){
        for (int j=0;j<B;j++){
            printf("element [%i][%i]=",i,j);
            scanf("%i",&inp);
            array[i][j]=inp;
            if (inp < min){
                min = inp;
            }
            if (inp > max){
                max = inp;
            }
        }
    }

    printf("matrix\n");
    for (int i = 0;i<A;i++){
        for (int j = 0;j<B;j++){
            printf("%i ", array[i][j]);
        }
        printf("\n");
    }
    printf("TmatrixT\n");
    for (int i = 0;i<B;i++){
        for (int j = 0;j<A;j++){
            printf("%i ", array[j][i]);
        }
        printf("\n");
    }


    printf("%i %i",min,max);
}
