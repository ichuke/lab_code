//#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <algorithm>
using namespace std;

typedef long long ll;

int main()
{
	int n;
	cout << "请输入要求斐波那契数列项数N:\n";
	cin >> n;
	ll *p = new ll[n];
	p[0] = 1;
	p[1] = 1;
	for (int i = 2; i < n; ++i) 
		p[i] = p[i - 1] + p[i - 2];
	cout << endl << "-------------- 输出结果 --------------" << endl;
	cout << "斐波那契数列的前N项如下：\n";
	for (int i = 0; i < n; ++i)
		cout << p[i] << endl;
	delete[]p;
	system("pause");
	return 0;
}