#include<iostream>
#include<string>
using namespace std;
class student
{
private:
	string name;
	int num;
	bool sex;
	string birthday;
	string height;
	string weight;
	string score;
	string add;
public:
	void set();
	string getname()
	{
		return name;
	}
	int getnum()
	{
		return num;
	}
	bool getsex()
	{
		return sex;
	}
	string getbirthday()
	{
		return birthday;
	}
	string getheight()
	{
		return height;
	}
	string getweight()
	{
		return weight;
	}
	string getscore()
	{
		return score;
	}
	string getadd()
	{
		return add;
	}
	void show();

};
void student::set()
{
	string a;
	int b;
	bool c;
	string d;
	string e;
	string f;
	string g;
	string h;
	cout << "����\tѧ��\t�Ա�\t�������ڣ��� �� �գ�\t���\t����\t�߿��ɼ�\t��ͥסַ\n";
	cin >> a >> b >> c >> d >> e >> f >> g >> h;
	name = a;
	num = b;
	sex = 3;
	birthday = d;
	height = e;
	weight = f;
	score = g;
	add = h;
}
void student::show()
{
	cout << student::getname() << "\t" << student::getnum() << "\t" << student::getsex() << "\t" << student::getbirthday() << "\t" << student::getheight() << "\t" << student::getweight() << "\t" << student::getscore() << "\t" << student::getadd();
}
int main(void)
{
	student stu;
	
		stu.set();
		stu.show();
	
	system("pause");
}