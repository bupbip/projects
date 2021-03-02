#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i = 0; i<100;i++){
    char message[20]="Hello world ";
    char buffer[5]="";
    itoa(i,buffer,10);
    strcat(message,buffer);
    printf("%s\n", message);
    }
}
