#include<stdio.h>

int main()
{
    int n,i;

    printf("Enter an integer you need to print the table of: ");
    scanf("%d", &n);
    printf("\n\n");

    for(i = 1; i <= 10; i++)
    {
        printf("\n\t\t\t%d * %d   =   %d \n", n, i, n*i);
    }

    return 0;
}
