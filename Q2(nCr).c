
#include <stdio.h>
#include <stdlib.h>
//find value of nCr
long fact(int n)
{
    if(n<0)
        return 0;
    long fact=1;
    while(n>0)
        fact*=n--;
    return fact;
}

int main()
{
    int n,r;
    long C=0;
   printf("Enter the value of N and R\n");
   scanf("%d %d",&n,&r);
    C=fact(n)/(fact(n-r)*fact(r));
    printf("The value of nCr is %ld\n",C);
return 0;
}

