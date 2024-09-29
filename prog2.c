#include<stdio.h>
#include<math.h>

int main()
{
    int binary;
    printf("Enter the binary number: ");
    scanf("%i",&binary);
    int sum=0;
    double i=0;

    while (binary>0)
    {
        int rem=binary%10;
        binary=binary/10;

        double power=pow(2.0,i);
        sum+=rem*(int)power;
        i++;
    }
    printf("%i",sum);

    return 0;
}