

#include <stdio.h>

//dec to binary
int main()
{
    int dec,temp,i,tempbin,index=0;
    int bin[1000];
    printf("Enter Decimalno\n");
    scanf("%d",&dec);
    temp=dec;
    while(temp>0)
    {
        tempbin=temp%2;
        temp/=2;
        bin[index]=tempbin;
        index++;
    }
    printf("Binary no. of Decimal no %d is : ",dec);
    for(i=index-1;i>=0;i--)
        printf("%d",bin[i]);
return 0;

}

