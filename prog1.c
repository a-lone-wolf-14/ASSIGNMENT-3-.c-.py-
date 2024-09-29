#include <stdio.h>

int main()
{
    int bin[51];
    int num;
    int i;
    printf("Enter the decimal value: ");
    scanf("%i",&num);

    for (i=0; num>0; i++)
    {
        bin[i]=num%2;
        num=num/2;
    }
    for (int j=i-1; j>=0; j--)
    {
        printf("%d",bin[j]);
    }
    
    return 0;
}