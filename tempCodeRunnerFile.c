#include <stdio.h>
#include <math.h>
#define pi 3.1415926535
#define DEC (pi/180)
int main()
{
    double ShiBu,XuBu,JiaoDu,HuDu,Mo;
    int n,m;
    START:
    printf("ZhiJiaoZuoBiaoXi 1,JiZuoBiaoXi 2");
    scanf("%d",&n);
    if(n==1)
    {
        printf("ZhiJiaoZuoBiaoXi\n");
        printf("ShiBu\n");
        scanf("%lf",&ShiBu);
        printf("XuBu\n");   
        scanf("%lf",&XuBu);
        Mo=sqrt(pow(ShiBu,2)+pow(XuBu,2));
        HuDu=atan(XuBu/ShiBu);
        JiaoDu=HuDu/DEC;
        printf("JiZuoBiaoXi:\n%f/_%f\n",Mo,JiaoDu);
        goto START;
    }
    else if(n==2)
    {
        printf("JiZuoBiaoXi\n");
        printf("JiZhouChangDu\n");
        scanf("%lf",&Mo);
        printf("Jiaodu\n");
        scanf("%lf",&JiaoDu);
        HuDu=JiaoDu*DEC;
        ShiBu=Mo*cos(HuDu);
        XuBu=Mo*sin (HuDu);
        printf("ZhiJiaoZuoBiaoXi:\n%f+j%f\n",ShiBu,XuBu);
        goto START;
    }
    else
    {
        printf("S T O P ?'1'yes'2' no\n");
        scanf("%d",&m);
       if(m==2)
        goto START;
       else
       printf("Thanks");
    }
 return 0;
}