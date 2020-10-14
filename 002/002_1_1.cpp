//任务一(基础级) ：
//求解一元二次方程ax^2+bx+c=0的根(使用不同注释方式)。

#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

void exroot()
{
    double a, b, c, x1, x2,f,k,s;
    printf("输入系数a,b,c\n");
    scanf("%lf%lf%lf", &a, &b, &c);
    if (fabs(a) <= 1e-6)  //非一元二次方程
        printf("Error,Please enter the correct coefficient");//警告
    else
    {
        f = b * b - 4 * a * c;   //判别式△
        if (fabs(f) <= 1e-6)       //△=0，有两个相等实根
            printf("一个解:%8.4f\n", -b / (2.0 * a));
        else if (f > 1e-6)    //△>0，有两个不等实根
        {
            x1 = (-b + sqrt(f)) / (2 * a);
            x2 = (-b - sqrt(f)) / (2 * a);
            printf("两个解：x1=%6.4f x2=%6.4f\n", x1, x2);
        }
        else            //△<0，有两个共轭复根
        {
            k = -b / (2 * a);
            s = sqrt(f) / (2 * a);
            printf("两个复数根:x1=(%6.4f+%6.4f)i x2=(%6.4f-%6.4f)i\n", k, s, k, s);
        }
    }
}


int main()
{
    void exroot();
    exroot();
    return 0;
}

