//设计数据交换函数swap(),实现对两个具有相同类型数据的交换。

#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;


void swap()
{
    double a, b, t;
    cout << "请输入a和b\n";
    cin >> a >> b;
    t = a;
    a = b;
    b = t;
    cout << "a=" << a << "  b=" << b << endl;
    cout << endl;
}
int main()
{
    void swap();
    swap();
    return 0;
}

