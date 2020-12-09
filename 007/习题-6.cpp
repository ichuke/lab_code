#include <iostream>

using namespace std;

class X
{
public:
	void f()
	{
		cout << "X::f() executing\n";
	}
};

class Y: public X
{
public:
	void f()
	{
		cout << "Y::f() executing\n";
	}
};

int main()
{
	X x;
	Y y;

	X *p = &x;
	p->f();

	p = &y;
	p->f(); //���Ƽ��ݣ�Y�е�f()��������������Ա�����ɷ��ʣ����Ե��õ��ǻ���X�е�f()

	y.f(); //ͬ�����ǣ�����Y�е�f()

	return 0;
}