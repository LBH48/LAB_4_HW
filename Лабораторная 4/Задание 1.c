#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "rus");

    int A, B;

    printf("введите номер задания первого робота: ");
    scanf("%d", &A);

    printf("введите номер задания второго робота: ");
    scanf("%d", &B);

    // проверяем что только одно число четное
    if ((A % 2 == 0 && B % 2 != 0) ||
        (A % 2 != 0 && B % 2 == 0))
    {
        printf("роботы начинают работу одновременно\n");
    }
    else
    {
        printf("роботы не начинают работу одновременно\n");
    }

    system("pause");
    return 0;
}