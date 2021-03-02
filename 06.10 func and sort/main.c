#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

int change (int *a1, int *b1)

{

    int buf;

    buf = *a1;

    *a1 = *b1;

    *b1 = buf;

    return 0;

}

int main()

{

    setlocale(LC_ALL,"");

    int MAX;

    printf("Введите размерность массива \n");

    scanf("%d", &MAX);

    int array[MAX];

    int array2[MAX];

    int array3[MAX];

    for(int i = 0; i<MAX; i++)

    {

        printf("a[%d] = ", i);

        scanf("%d", &array[i]);

        array2[i] = array3[i] = array[i];

        if(array[i] > 100 || array[i] < 0)

        {

            printf("Размер массива должен находиться в пределах от 0 до 100. Попробуйте ещё раз.\n");

            scanf("%d", &array[i]);

            array2[i] = array3[i] = array[i];

        }

    }

    int per = 0, check = 0, check_cmp = 0;



    do

    {

        check = 0;

        for(int i = 0; i<MAX-1; i++)

        {

            check_cmp++;

            if(array[i]>array[i+1])

            {


                check++;

                per++;

                change(&array[i], &array[i+1]);

            }

        }

    }

    while(check > 0);



    printf("\n\n\n\n\nВывод массива:\n");

    for(int i = 0; i<MAX; i++)

    {

        printf("%d\n", array[i]);

    }

    printf("Сортировка методом перестановки\nПроделано перестановок: %d", per);

    printf("\nКоличество проверок: %d", check_cmp);

    per = 0, check = 0, check_cmp = 0;

    for (int i = 0; i < MAX - 1; i++)

    {

        check_cmp++;

        for (int j = 0; j < MAX - i - 1 ; j++)

        {

            if (array2[j] > array2[j+1])

            {


                per++;

                change(&array2[j], &array2[j+1]);

            }

        }

    }

    printf("\n\n\n\n\nВывод массива:\n");

    for(int i = 0; i<MAX; i++)

    {

        printf("%d\n", array2[i]);

    }

    printf("Сортировка методом пузырька\nПроделано перестановок: %d", per);

    printf("\nКоличество проверок: %d", check_cmp);

    per = 0, check_cmp = 0;

    for (int i = 0; i < MAX -1; i++)

    {

        int min_i = i;

        for (int j = i + 1; j < MAX; j++)

        {

            check_cmp++;

            if (array3[j] < array3[min_i])

            {

                min_i = j;

            }

        }

        per++;

        if (min_i != i) change(&array3[i], &array3[min_i]);

    }

    printf("\n\n\n\n\nВывод массива:\n");

    for(int i = 0; i<MAX; i++)

    {

        printf("%d\n", array3[i]);

    }

    printf("Сортировка методом максимума и минимума\nПроделано перестановок: %d", per);

    printf("\nКоличество проверок: %d", check_cmp);

    return 0;

}

