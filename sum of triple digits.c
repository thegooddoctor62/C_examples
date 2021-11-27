#include<stdio.h>
#include<stdlib.h>


int main ()
//sum of triple digits

{
    int numb;
    int sum;
    int once,tens,hundreds;
    printf("enter the three digit number :");
    scanf("%d",&numb);
    once = numb%10;

    hundreds = numb/100;
    tens = (numb/10)%10;
    printf("%d,%d,%d\n",once,tens,hundreds);
    sum = once+tens+hundreds;
    printf("%d",sum);
    return 0 ;


}
