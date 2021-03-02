#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x = 0.0001;
    float res = 0;
    for (int i =0;i<10000;++i){
        res +=x;
    }
    printf("%f\n",res);
}
