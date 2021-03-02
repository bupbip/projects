#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //ru language

int main()
{
    bool a = true;
    setlocale(LC_ALL, "Rus");                   //localization in russian
    /*for(int i = 1; i<=228;i++)
    {
    printf("%d\n", i);
    }
    printf("Hello, world!");*/
    if (a == 1){
        printf("Приффки");
    }
    return 0;
}
