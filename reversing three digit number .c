#include<stdio.h>
#include<stdlib.h>


int main ()
//print reversed number

{
    int numb;
    int rev;
    int once,tens,hundreds;
    printf("enter the three digit number :");
    scanf("%d",&numb);
    once = numb%10;

    hundreds = numb/100;
    tens = (numb/10)%10;
    printf("%d,%d,%d\n",once,tens,hundreds);
    rev = (once*100)+(tens*10)+(hundreds);
    printf("%d",rev);
    return 0 ;


}
