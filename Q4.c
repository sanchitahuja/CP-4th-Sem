
#include<math.h>
#include <stdio.h>
int main(){
int i,sumX=0,sumX2=0,d;
double sd=0,v=0,mean=0;
for(i=0;i<15;i++)
{
    printf("Enter no %d\n",i+1);
    scanf("%d",&d);
    sumX+=d;
     sumX2+=d*i;
}
//printf("Sumof X %d\n",sumX);
mean=sumX/15.0;
sd=sqrt((sumX2/15.0)-((sumX/15.0)*(sumX/15.0)));
v=(sumX2/15.0)-((sumX/15.0)*(sumX/15.0));
printf("Mean = %lf\n",mean);
printf("Standard Dev = %lf\n",sd);
printf("Variance = %lf\n",v);
return 0;
}

