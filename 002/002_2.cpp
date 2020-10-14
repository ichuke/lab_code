//任务二(进阶级) ：输入三角形三条边边长，通过带const常量指针的函数计算输出三角形的面积。
#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

double area(const double &a,const &b,const double &c)
{
    double p=(a+b+c)/2.0;
    double s=sqrt(p*(p-a)*(p-b)*(p-c));
    return s;
}

int main()
{
    double a,b,c;
    cout<<"please input a,b,c:\n";
    cin>>a>>b>>c;
    cout<<"the area is:\n";
    cout<<area(a,b,c)<<"\n";
    return 0;
}
