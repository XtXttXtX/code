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

//class A
//{
//public:
//	void PrintA()
//	{
//		cout << _a << endl;
//	}
//private:
//	int _a;
//};
//int main()
//{
//	A* p = nullptr;
//	p->PrintA();
//	return 0;
//}

////空类
//class Date
//{
//
//};

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
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	d1.Init(2022, 7, 5);
//	d1.Print();
//	Date d2;
//	d2.Init(2022, 7, 6);
//	d2.Print();
//	return 0;
//}

//class Date
//{
//public:
//	//Date 的构造函数
//	Date()
//	{
//		//进行初始化
//		//...
//	}
//};


//class Date
//{
//public:
//	//Date的构造函数
//	Date()
//	{
//
//	}
//	void Date() {} //错误写法，没有返回值
//};


//class Date
//{
//public:
//	// 1.无参构造函数
//	Date()
//	{}
//	// 2.带参构造函数
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	//1.创建对象
//	//2.调用相应的构造函数
//	Date d1; //调用无参构造函数
//	Date d2(2023, 8, 22); //调用带参构造函数
//}

//Date d1; //调用无参构造函数
//
//Date d3(); //声明一个没有形参的函数d3，它的返回值类型为Date

//class Date
//{
//public:
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1; //调用编译器自动生成的默认构造函数，默认构造是无参的，相匹配
//
//	Date d2(2023, 8, 22); //该行代码会报错，没有匹配的带参构造函数
//}

//class Date
//{
//public:
//	//显式定义带参的构造函数
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;  //该行代码会报错，没有匹配的默认构造函数
//
//	Date d2(2023, 8, 22); //调用带参的构造函数
//}

//class Time
//{
//public:
//	//Time类的默认构造函数
//	Time()
//	{
//		_hours = 0;
//		_minute = 0;
//		_second = 0;
//	}
//private:
//	int _hours;
//	int _minute;
//	int _second;
//};
//
//class Date
//{
//public:
//
//private:
//	//内置类型
//	int _year;
//	int _month;
//	//自定义类型
//	Time _day;
//};
//
//int main()
//{
//	//调用编译器自动生成的默认构造函数
//	Date d;
//	return 0;
//}

//class Date
//{
//public:
//	void Print()
//	{
//		cout << _year << '-' << _month << '-' << _day << endl;
//	}
//private:
//	int _year = 0; //声明时给默认值
//	int _month = 0;
//	int _day = 0;
//};
//
//int main()
//{
//	Date d;
//	d.Print();
//	return 0;
//}

//class Date
//{
//public:
//	Date() //无参的构造函数
//	{
//		_year = 2023;
//		_month = 8;
//		_day = 22;
//	}
//	Date(int year = 2023, int month = 8, int day = 22) //全缺省的构造函数
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2024); //编译通过，调用全缺省的构造函数
//	Date d2; //这里编译会报错，d2调用默认构造函数，但存在两个默认构造函数，编译器不知道调用哪个
//	return 0;
//}

//class Stack
//{
//public:
//	//构造函数，初始化一个栈，写成全缺省的形式
//	Stack(size_t capacity = 4)
//	{
//		_array = (int*)malloc(sizeof(int) * capacity);
//		if (nullptr == _array)
//		{
//			perror("malloc申请空间失败");
//			return;
//		}
//		_capacity = capacity;
//		_top = 0;
//	}
//
//	//析构函数，在类名前加~号
//	~Stack()
//	{
//		free(_array);//堆上动态申请的空间需要由用户自行释放
//		//下面的代码也可以不写，栈上的空间操作系统会自动释放
//		_array = nullptr;
//		_capacity = _top = 0;
//	}
//private:
//	int* _array;
//	int _capacity;
//	int _top;
//};


//class Stack
//{
//public:
//	Stack() {
//		cout << "Stack()" << endl;
//	}
//	~Stack() {
//		cout << "~Stack()" << endl;
//	}
//private:
//	int* _array;
//	int _capacity;
//	int _top;
//};
//
//int main()
//{
//	Stack s;
//	return 0;
//}

//class Time
//{
//public:
//	Time() //Time类的默认构造函数
//	{
//		cout << "Time()" << endl;
//	}
//	~Time() //Time类的析构函数
//	{
//		cout << "~Time()" << endl;
//	}
//private:
//	int _hours;
//	int _minute;
//	int _second;
//};
//class Date
//{
//public:
//	//没有显式写出构造函数和析构函数，使用编译器自动生成的
//
//private:
//	int _year;
//	int _month;
//	Time _day;
//};
//
//int main()
//{
//	Date d; //调用编译器自动生成的默认构造函数
//	return 0;
//}


//class Date
//{
//public:
//	//构造函数
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//拷贝构造函数
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1(2025, 11, 24);
//	Date d2(d1);//用已存在的对象d1创建对象d2
//
//	return 0;
//}

////拷贝构造函数的写法
//Date(const Date d) // 错误写法：编译报错，会引发无穷递归
//{
//	_year = d._year;
//	_month = d._month;
//	_day = d._day;
//}
//
//Date(const Date& d) // 正确写法
//{
//	_year = d._year;
//	_month = d._month;
//	_day = d._day;
//}


//class Time
//{
//public:
//	Time()
//	{
//		_hour = 1;
//		_minute = 1;
//		_second = 1;
//	}
//	Time(const Time& t)
//	{
//		_hour = t._hour;
//		_minute = t._minute;
//		_second = t._second;
//		cout << "Time::Time(const Time&)" << endl;
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//class Date
//{
//private:
//	// 内置类型
//	int _year = 2023;
//	int _month = 1;
//	int _day = 1;
//	// 自定义类型
//	Time _t;
//};
//int main()
//{
//	Date d1; //d1调用默认的构造函数进行初始化
//
//	// 用已经存在的d1拷贝构造d2，此时会调用Date类的拷贝构造函数
//	// 但Date类并没有显式定义拷贝构造函数，因此编译器会给Date类生成一个默认的拷贝构造函数
//	Date d2(d1);
//	return 0;
//}


//class Stack
//{
//public:
//	Stack(size_t capacity = 16)
//	{
//		_array = (int*)malloc(capacity * sizeof(int));
//		if (nullptr == _array)
//		{
//			perror("malloc申请空间失败");
//			return;
//		}
//		_size = 0;
//		_capacity = capacity;
//	}
//	~Stack()
//	{
//		if (_array)
//		{
//			free(_array);
//			_array = nullptr;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//private:
//	int* _array;
//	size_t _size;
//	size_t _capacity;
//};
//int main()
//{
//	Stack s1;
//	Stack s2(s1);
//	return 0;
//}

//class Date
//{
//public:
//	Date(int year, int minute, int day)
//	{
//		cout << "Date(int,int,int):" << this << endl;
//	}
//	Date(const Date& d)
//	{
//		cout << "Date(const Date& d):" << this << endl;
//	}
//	~Date()
//	{
//		cout << "~Date():" << this << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//Date Test(Date d)
//{
//	Date temp(d);
//	return temp;
//}
//int main()
//{
//	Date d1(2022, 1, 13);
//	Test(d1);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a + 10;
//	b = b - 10;
//	cout << (a == b);
//	cout << (a > b);
//	//还可以使用许许多多的运算符进行操作，这里就不一一挪列了
//	//...
//	return 0;
//}

//class Date
//{
//public:
//	Date(int year = 2000, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1(2023, 8, 24);
//	Date d2(2023, 8, 25);
//	d1 = d1 + 10; //d1类对象使用+号运算符
//	d1 == d2; //d2类对象使用==号运算符
//}

class Date
{
public:
	Date(int year = 2000, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void AddYear(int val)
	{
		_year += val;
	}
	bool isSame(const Date& d)
	{
		return _year == d._year && _month == d._month && _day == d._day;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1(2025, 11, 24);
	Date d2(2026, 8, 24);
	d1.AddYear(1); //年份+1
	cout << d1.isSame(d2); //比较d1和d2是否相等
}