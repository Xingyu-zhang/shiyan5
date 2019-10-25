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
		cout << "请输入三角形三边的长度" << endl;
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
	bool exist();//判断是否构成三角形
	double perimeter(void);//计算三角形的周长
	double area(void);//计算并返回三角形的面积

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
		cout << "三条边的长度为：" << x << ',' << y << ',' << z << endl;

		cout << "三角形的周长为：" << tri1.perimeter() << '\n' << "三角形的面积为：" << tri1.area() << endl;

		if ((x*x + y * y == z * z) || (x*x + z * z == y * y) || (z*z + y * y == x * x))
			cout << "该三角形是直角三角形" << endl;

		else if ((x*x + y * y > z*z) && (x*x + z * z > y*y) && (z*z + y * y > x*x))
			cout << "该三角形是锐角三角形" << endl;

		else cout << "该三角形是钝角三角形" << endl;
	}
	else
		cout << "不能构成三角形" << endl;
	system("pause");
	return 0;
}
