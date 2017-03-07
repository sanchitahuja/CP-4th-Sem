//programmes to calculate largest of 3 numbers
#include <stdio.h>
int main() {
        float a,b,c;
        printf("Enter the three Numbers\n");
        scanf("%d %d %d",&a,&b,&c);
        printf("\n");
        if (a>b)
        {
                if (a>c)
                {
                        printf("%lf is the largest\n",a);
                }
                else
                {
                        printf("%lf is the largest\n",c);
                }
        }
        else if(b>a)
        {
                if (b>c)
                {
                        printf("%lf is the largest\n",b);
                }
                else
                {
                        printf("%fl is the largest\n",c);
                }
        }

        return 0;
}
