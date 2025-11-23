#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

////实现一个栈类
//typedef int DataType;
//struct Stack
//{
//	void Init(size_t capacity)
//	{
//		//栈初始化
//	}
//	void Push(const DataType& data)
//	{
//		//栈的插入
//	}
//	DataType Top()
//	{
//		//取栈顶元素
//	}
//	void Destroy()
//	{
//		//栈空间销毁
//	}
//
//	//成员变量、类属性
//	DataType* _array;
//	size_t _capacity;
//	size_t _size;
//};


////实现一个栈类
//typedef int DataType;
//
////用class来定义一个类
//class Stack
//{
//	void Init(size_t capacity)
//	{
//		//栈初始化
//	}
//	void Push(const DataType& data)
//	{
//		//栈的插入
//	}
//	DataType Top()
//	{
//		//取栈顶元素
//	}
//	void Destroy()
//	{
//		//栈空间销毁
//	}
//
//	//成员变量、类属性
//	DataType* _array;
//	size_t _capacity;
//	size_t _size;
//};

#include<iostream>
using namespace std;
//class Date
//{
//	//成员函数的声明和定义
//	void Print()
//	{
//		cout << _year << "年" << _month << "月" << _day << "日" << endl;
//	}
//
//	//成员变量的声明
//	int _year;
//	int _month;
//	int _day;
//};

////class.h文件
//class Date
//{
//	//成员函数的声明
//	void Print();
//
//	//成员变量的声明
//	int _year;
//	int _month;
//	int _day;
//};
//
////class.cpp文件
//void Date::Print()
//{
//	cout << _year << "年" << _month << "月" << _day << "日" << endl;
//}

//class Date
//{
//
//	void Init(int year)
//	{
//		// 这里的year到底是成员变量，还是函数形参？
//		year = year;
//	}
//
//	int year;
//};

//class Date
//{
//	void Init(int year)
//	{
//		_year = year;
//	}
//
//	int _year; //前缀
//};
//// 或者这样
//class Date
//{
//	void Init(int year)
//	{
//		year_ = year;
//	}
//
//	int year_; //后缀
//};
//
//// 其他方式也可以的，只要可以加以区分即可，一般都是加个前缀或者后缀就行。

//class Date
//{
//public:   //使用访问限定符加冒号限定变量或函数的访问权限
//	void Print()
//	{
//		cout << _year << "年" << _month << "月" << _day << "日" << endl;
//	}
//
//	int _year = 10; //C++11支持给成员变量缺省值
//
//protected:
//	int _month = 10;
//
//private:
//	int _day = 10;
//};
//
//int main()
//{
//	Date d; //类的实例化，类名+变量名
//	d._year = 2023; //_year是共有的，类外可以访问
//
//	//无法通过编译，保护和私有变量不能在类外访问
//	//d._month = 10;
//	//d._day = 10;
//
//	d.Print(); //Print函数是共有的，类外可以访问
//}

//class Date
//{
//	int _year;
//	void Print()
//	{
//		cout << _year << "年" << endl;
//	}
//};
//int main()
//{
//	Date d;
//	//下方代码会报错，class定义类，没有指定访问限定符默认是private
//	d._year;
//	d.Print();
//
//}

//struct Date
//{
//	int _year;
//	void Print()
//	{
//		cout << _year << "年" << endl;
//	}
//};
//int main()
//{
//	Date d;
//	//下方代码会报错，class定义类，没有指定访问限定符默认是private
//	d._year;
//	d.Print();
//
//}

//class Person
//{
//public:
//	void PrintPerson();
//private:
//	char _name[20];
//	char _gender[3];
//	int _age;
//};
//
////这里定义的PrintPerson()是全局函数
//void PrintPerson()
//{
//	cout << "void PrintPersonInfo()" << endl;
//}
//
////这里定义的PrintPerson()是Person类中的成员函数
//void Person::PrintPerson()
//{
//	cout << "void Person::PrintPersonInfo()" << endl;
//}
//
//int main()
//{
//	Person p;
//	PrintPerson();//调用全局函数
//	p.PrintPerson();//调用类域中
//}


////Person类的定义
//class Person
//{
//public:
//	void PrintPerson()
//	{
//		cout << _name << " " << _gender << " " << _age << endl;
//	}
//	//这里的成员变量都是声明
//	char _name[20];
//	char _gender[3];
//	int _age;
//};
//int main()
//{
//	//实例化一个对象p
//	Person p;
//	p._age = 20;//p是类实例化出来的对象，占用内存空间，顾可以对成员变量_age进行操作
//
//	//下面的写法均错误，类中的_age只是声明，没有内存空间
//	Person::_age = 20;
//	Person._age = 20;
//	return 0;
//}

//class A
//{
//public:
//	void PrintA()
//	{
//		cout << _a << endl;
//	}
//private:
//	char _a;
//};
//
//int main()
//{
//	A a;
//	cout << sizeof(a) << endl;
//	return 0;
//}

////类中既有成员变量，又有成员函数
//class A1
//{
//public:
//	void f1()
//	{
//
//	}
//private:
//	int _a;
//};
//
////类中仅有成员函数
//class A2
//{
//public:
//	void f2()
//	{
//
//	}
//};
//
////类中什么也没有—空类
//class A3
//{
//
//};
//
//int main()
//{
//	cout << sizeof(A1) << endl; //既有成员变量，又有成员函数
//	cout << sizeof(A2) << endl; //仅有成员函数
//	cout << sizeof(A3) << endl; //什么也没有
//	return 0;
//
//}

//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "_" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1, d2;
//	d1.Init(2025, 11, 23);
//	d2.Init(2025, 12, 23);
//	d1.Print();
//	d2.Print();
//	return 0;
//}

////this指针作为隐藏参数指向调用的对象
//void Init(Date* const this, int year, int month, int day)
//{
//	this->_year = year; //通过this指针找到对象对其内容进行修改
//	this->_month = month;
//	this->_day = day;
//}

//class A
//{
//public:
//	void Print()
//	{
//		cout << "Print()" << endl;
//	}
//private:
//	int _a;
//};
//int main()
//{
//	A* p = nullptr;
//	p->Print();
//	return 0;
//}

class A
{
public:
	void PrintA()
	{
		cout << _a << endl;
	}
private:
	int _a;
};
int main()
{
	A* p = nullptr;
	p->PrintA();
	return 0;
}