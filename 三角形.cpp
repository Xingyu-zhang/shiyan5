#include<iostream>
#include<Cmath>
using namespace std;
class Triangle
{
private:
	double a, b, c; 
public:
	void set()
	{
		float x, y, z;
		cout << "���������������ߵĳ���" << endl;
		cin >> x >> y >> z;
		a = x;
		b = y;
		c = z;
	}
	double getA()
	{
		return a;
	}
	double getB()
	{
		return b;
	}
	double getC()
	{
		return c;
	}
	bool exist();//�ж��Ƿ񹹳�������
	double perimeter(void);//���������ε��ܳ�
	double area(void);//���㲢���������ε����

};

bool Triangle::exist()
{
	return (a + b > c&&a + c > b&&b + c > a);
}

double Triangle::perimeter()
{
	return a + b + c;
}

double Triangle::area()
{
	double p = (a + b + c) / 2;
	return sqrt(p*(p - a)*(p - b)*(p - c));
}
int main()
{
	Triangle tri1;  
	double x, y, z;
	tri1.set();

	x = tri1.getA();
	y = tri1.getB();
	z = tri1.getC();

	if (tri1.exist())
	{
		cout << "�����ߵĳ���Ϊ��" << x << ',' << y << ',' << z << endl;

		cout << "�����ε��ܳ�Ϊ��" << tri1.perimeter() << '\n' << "�����ε����Ϊ��" << tri1.area() << endl;

		if ((x*x + y * y == z * z) || (x*x + z * z == y * y) || (z*z + y * y == x * x))
			cout << "����������ֱ��������" << endl;

		else if ((x*x + y * y > z*z) && (x*x + z * z > y*y) && (z*z + y * y > x*x))
			cout << "�������������������" << endl;

		else cout << "���������Ƕ۽�������" << endl;
	}
	else
		cout << "���ܹ���������" << endl;
	system("pause");
	return 0;
}
