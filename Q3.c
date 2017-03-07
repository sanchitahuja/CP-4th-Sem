

#include <stdio.h>
#include <math.h>
//find value of mean, variance and deviation of 100 natural no.s
//standard deviation =sqrt(sumofx^2/n-(sumofx/n)^2)
//variance = sd^2
// mean sum of x /N

int main(){
int i,sumX=0,sumX2=0;
double sd=0,v=0,mean=0;
for(i=1;i<=100;i++)
{
    sumX+=i;
     sumX2+=i*i;
}
//printf("Sumof X %d\n",sumX);
mean=sumX/100.0;
sd=sqrt((sumX2/100.0)-((sumX/100.0)*(sumX/100.0)));
v=(sumX2/100.0)-((sumX/100.0)*(sumX/100.0));
printf("Mean = %lf\n",mean);
printf("Standard Dev = %lf\n",sd);
printf("Variance = %lf\n",v);
return 0;
}

