#include <iostream>

using namespace std;

class Location
{
protected:
	double x, y;
public:
	Location(double a, double b)
	{
		x = a;
		y = b;
	}
	~Location()
	{

	}

	void move(double a, double b) //�������ƶ��� (a, b)
	{
		x = a;
		y = b;
	}
	void move_add(double a, double b) //������ (x, y) �ֱ����� a, b ����λ���ƶ��� (x+a, y+b)
	{
		x += a;
		y += b;
	}
	double get_x()
	{
		return x;
	}
	double get_y()
	{
		return y;
	}
	void show()
	{
		cout << "the location is : (x, y) = " << "(" << x << ", " << y << ")" <<  endl << endl;
	}
};

class Point : public Location
{
protected:
	double z;
public:
	Point(double a, double b, double c) : Location(a, b)
	{
		z = c;
	}
	~Point()
	{

	}

	void move(double a, double b, double c)
	{
		x = a;
		y = b;
		z = c;
	}
	void move_add(double a, double b, double c) //���� (x, y, z) ��3������ֱ����� a, b, c ����λ���ƶ��� (x+a, y+b, z+c)
	{
		x += a;
		y += b;
		z += c;
	}
	double get_z()
	{
		return z;
	}
	void show()
	{
		cout << "the point's location is : (x, y, z) = " << "(" << x << ", " << y << ", " << z << ")" << endl << endl;
	}
};

class Sphere : public Point
{
protected:
	const double PI; //Բ����
	double r, S, V; //�뾶������������
public:
	Sphere(double a, double b, double c, double rr) : Point(a, b, c), PI(3.1415926) //��ʼ�������ݳ�Ա
	{
		r = rr;
		S = 4.0*PI*r*r;
		V = 4 / 3 * PI*r*r*r;
	}
	~Sphere()
	{

	}

	void modify_r(double rr) //�뾶�޸�Ϊ rr
	{
		r = rr;
		S = 4.0*PI*r*r;
		V = 4 / 3 * PI*r*r*r;

	}
	void add_r(double rr) //�뾶���� rr
	{
		r += rr;
		S = 4.0*PI*r*r;
		V = 4 / 3 * PI*r*r*r;
	}
	double get_r()
	{
		return r;
	}
	double get_S()
	{
		return S;
	}
	double get_V()
	{
		return V;
	}
	void show()
	{
		cout << "the sphere's location is :  (x, y, z) = " << "(" << x << ", " << y << ", " << z << ")" << endl;
		cout << "The radius is r = " << r << "\nthe area is S = " << S << "\nthe volume is V = " << V << endl << endl;
	}
};

int main()
{
	Location a(3, 4);
	cout << "a.x = " << a.get_x() << ", a.y = " << a.get_y() << endl;
	a.move(1, 2);
	cout << "after move(1, 2), ";
	a.show();
	a.move_add(1, 2);
	cout << "after move_add(1, 2), ";
	a.show();

	Point b(5, 6, 7);
	cout << "b.x = " << b.get_x() << ", b.y = " << b.get_y() << ", b.z = " << b.get_z() << endl;
	b.move(3, 4, 5);
	cout << "after move(3, 4, 5), ";
	b.show();
	b.move_add(5, 6, 7);
	cout << "after move_add(5, 6, 7), ";
	b.show();

	Sphere c(8, 9, 10, 11);
	cout << "c.x = " << c.get_x() << ", c.y = " << c.get_y() << ", c.z = " << c.get_z() << ", c.r = " << c.get_r() << endl;
	c.move(1, 2, 3);
	cout << "after move(1, 2, 3), ";
	c.show();
	c.move_add(3, 4, 5);
	cout << "after move_add(3, 4, 5), ";
	c.show();
	c.modify_r(3);
	cout << "after modify_r(3), ";
	c.show();
	c.add_r(6);
	cout << "after add_r(6), ";
	c.show();

	return 0;
}
