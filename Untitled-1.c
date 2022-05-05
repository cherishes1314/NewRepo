#include <stdio.h>
#include <math.h>
int main (void)
{
    double x,y,a,b,temp,temp_1,temp_2,n;
    START:
    printf("FenZi\n");
    printf("ShiBu\n");
    scanf("%lf",&x);
    printf("XuBu\n");
    scanf("%lf",&y);
    printf("FenMu\n");
    printf("ShiBu\n");
    scanf("%lf",&a);
    printf("XuBu\n");
    scanf("%lf",&b);
    temp=pow(a,2)+pow(b,2);
    temp_1=a*x+b*y;
    temp_2=x*(-b)+a*y;
    printf("JieGuoWei:\n%f+j%f\n",temp_1/temp,temp_2/temp);
    printf("S T O P ?'1'yes'2' no\n");
    scanf("%lf",&n) ;
    if(n==2)
    goto START;
    else
    printf("Thanks.");
    return 0;
}