#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<stdlib.h>
//
////文件在与预处理阶段会展开<stdlib.h>,里面包含以rand命名的函数，此时与我们定义的rand就会冲突
//
//int rand = 100;
//int main()
//{
//    printf("%d\n", rand);
//    return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//int rand = 0; //前面已经将rand全局定义为函数，这里又定义为全局变量，顾重定义
//int main()
//{
//	int rand = 0; //这里rand是局部变量，作用域不同，局部优先，因此不会报错
//	rand(); //由于rand是局部优先，这里的rand是个局部变量，顾无法作为函数使用，报错
//	printf("%d", rand);
//	return 0;
//}

////命名空间的普通定义
//namespace N1 //N1为命名空间的名称
//{
//	//在命名空间中，既可以定义变量，也可以定义函数
//	int a;
//	int Add(int x, int y)
//	{
//		return x + y;
//	}
//}

////命名空间的嵌套定义
//namespace N1 //定义一个名为N1的命名空间
//{
//	int a;
//	int b;
//	namespace N2 //嵌套定义另一个名为N2的命名空间
//	{
//		int c;
//		int d;
//	}
//}

//#include<stdio.h>
//namespace Dream
//{
//	int b = 10;
//}
//int main()
//{
//	printf("%d", b); //报错，b只在Dream作用域内有效
//	return 0;
//}
//加命名空间名称及作用域限定符
//#include <stdio.h>
//namespace N
//{
//	int a;
//	double b;
//}
//int main()
//{
//	N::a = 10;//将命名空间中的成员a赋值为10
//	printf("%d\n", N::a);//打印命名空间中的成员a
//	return 0;
//}

////使用using将命名空间中的成员引入
//#include <stdio.h>
//namespace N
//{
//	int a;
//	double b;
//}
//using N::a;//将命名空间中的成员a引入
//int main()
//{
//	a = 10;//将命名空间中的成员a赋值为10
//	printf("%d\n", a);//打印命名空间中的成员a
//	return 0;
//}

////使用using namespace 命名空间名称引入
//#include <stdio.h>
//namespace N
//{
//	int a;
//	double b;
//}
//using namespace N;//将命名空间N的所有成员引入
//int main()
//{
//	a = 10;//将命名空间中的成员a赋值为10
//	printf("%d\n", a);//打印命名空间中的成员a
//	return 0;
//}

////test1.cpp
//namespace Dream
//{
//	int a = 5;
//	int b = 10;
//}
//
////test2.cpp
//namespace Dream
//{
//	int Add(int x, int y)
//	{
//		return x + y;
//	}
//}
//
////上面两个同名命名空间编译器最终会进行合并，结果如下：
//namespace Dream
//{
//	int a = 5;
//	int b = 10;
//
//	int Add(int x, int y)
//	{
//		return x + y;
//	}
//}

//#include<iostream>
//using namespace std; //展开std命名空间
//int main()
//{
//	cout << "hello world!!!" << endl; //打印输出
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int i;
//	double d;
//	char arr[20];
//	cin >> i;//读取一个整型
//	cin >> d;//读取一个浮点型
//	cin >> arr;//读取一个字符串
//	cout << i << endl;//打印整型i
//	cout << d << endl;//打印浮点型d
//	cout << arr << endl;//打印字符串arr
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
////对于cout，流插入的东西不会直接到终端，而是先到一个缓冲区，有了刷新标志才会出现在终端
//
//int main()
//{
//	//在io需求比较高的地方，如部分大量输入的竞赛题中，加上下面3行代码
//	//可以提高C++IO效率
//	ios_base::sync_with_stdio(false);//取消c和c++的兼容
//	//作用：解除cin与cout的绑定
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	return 0;
//}

#include<iostream>
using namespace std;
//void Print(int a = 0)
//{
//	cout << a << endl;
//}
//
////全缺省参数
//void Print(int a = 10, int b = 20, int c = 30)
//{
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//}
//
////半缺省参数
//void Print(int a, int b = 10, int c=20)
//{
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//}
//int main()
//{
//	Print();//没有指定实参，使用参数的默认值(打印0)
//	Print(10);//指定了实参，使用指定的实参(打印10)
//	return 0;
//}

////错误写法
//void Print(int a = 10, int b, int c) {};
//void Print(int a = 10, int b = 20, int c) {};
//void Print(int a = 10, int b, int c = 30) {};
//
//
////正确写法
//void Print(int a, int b, int c = 30) {};
//void Print(int a, int b = 20, int c = 30) {};

////正确示例
//int x = 30;//全局变量
//void Print(int a, int b = 20, int c = x)
//{
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//}

////C语言写法
//int iAdd(int x, int y)
//{
//	return x + y;
//}
//double dAdd(double x, double y)
//{
//	return x + y;
//}
//int main()
//{
//	iAdd(1, 2);
//	dAdd(1.0, 2.0);
//	return 0;
//}

////C++写法，两个Add函数构成函数重载
//int Add(int x, int y)
//{
//	return x + y;
//}
//double Add(double x, double y)
//{
//	return x + y;
//}
//int main()
//{
//	Add(1, 2);
//	Add(1.0, 2.0);
//	return 0;
//}

////参数个数不同
//#include<iostream>
//using namespace std;
//void Fun(int x)
//{
//	cout << "void Fun(int x)" << endl;
//
//}
//void Fun()
//{
//	cout << "void Fun()" << endl;
//
//}
//int main()
//{
//	Fun(1);//调用第一个
//	Fun();//调用第二个
//}

////参数类型不同
//#include<iostream>
//using namespace std;
//int Add(int x,int y)
//{
//	cout << "void Fun(int x,int y)" << endl;
//	return x + y;
//
//}
//double Add(double x,double y)
//{
//	cout << "void Fun(double x,double y)" << endl;
//	return x + y;
//
//}
//int main()
//{
//	Add(1,2);//调用第一个
//	Add(1.5,3.8);//调用第二个
//	return 0;
//}

////参数顺序不同
//#include<iostream>
//using namespace std;
//int Add(int x, double y)
//{
//	cout << "void Fun(int x,double y)" << endl;
//	return x + y;
//
//}
//double Add(double x, int y)
//{
//	cout << "void Fun(double x,int y)" << endl;
//	return x + y;
//
//}
//int main()
//{
//	Add(1, 2.4);//调用第一个
//	Add(1.5, 5);//调用第二个
//	return 0;
//}

//
////缺省函数的重载
//#include<iostream>
//using namespace std;
//void Fun(int x,double y = 1.5)
//{
//	cout << "void Fun(int x,double y = 1.5)" << endl;
//
//}
//void Fun(int x)
//{
//	cout << "void Fun(int x)" << endl;
//
//}
//int main()
//{
//	Fun(1,1.9);////这里会调用第一个函数没问题
//	Fun(1);//此时既可以调用第一个函数，也可以调用第二个函数，存在歧义，会报错
//}

////引用的使用
//void Test()
//{
//	int a = 10;
//	int& ra = a;//<====定义引用类型，此时ra就是变量a的别名，ra和a是同一块内存空间
//	printf("a的地址为%p\n", &a);
//	printf("ra的地址为%p\n", &ra);
//
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int& b;//错误写法
//	int& b = a;//正确写法
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//下面的b,c,d均是变量a的别名
//	int& b = a;
//	int& c = a;
//	int& d = c;
//	printf("%p %p %p %p\n", &a, &b, &c, &d);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int& b = a;//b是a的别名
//	int c = 20;
//
//	//能不能将b改成c的别名呢？
//	b = c;//不行，这条语句是将c的值赋给引用变量b，即修改变量a的值，并不是让b引用c
//
//	printf("&a = %p &b = %p &c = %p\n", &a, &b, &c);
//	printf("a = %d b = %d c = %d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//  double& b = a;//这种写法会报错
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	const double& b = a;
//
//	//类似于下面的步骤
//	int a = 10;
//	double tmp = a;//将a的值转换赋给tmp
//	const double& b = tmp;//b再引用tmp
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	const double& b = a;
//
//	printf("&a = %p , &b = %p\n", &a, &b);//求a,b空间的地址
//
//	printf("修改前 a = %d , b = %.2lf\n", a, b);
//	a = 20;
//	//b = 30; //这句代码会报错，被const修饰的变量不可修改
//	printf("修改后 a = %d , b = %.2lf\n", a, b);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	const int& b = a;
//	//b++;//会报错，b是常引用，无法修改
//	a++;//a是普通变量，允许修改
//	cout << "a = " << a << ' ' << "b = " << b;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	const int& b = a;//权限的缩小，const引用普通变量，编译正常
//
//	const int aa = 10;
//	const int& bb = aa;//权限的平移，const引用const变量，编译正常
//
//	int& cc = aa;//权限的放大，普通引用const变量，报错
//	return 0;
//}

//#include<iostream>
//using namespace std;
////引用作为函数参数
//void Swap(int& x, int& y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << "交换前：" << "a = " << a << "b = " << b << endl;
//	Swap(a, b);
//	cout << "交换后：" << "a = " << a << "b = " << b << endl;
//}

//#include<iostream>
//using namespace std;
//
//int& Count()
//{
//	static int n = 0;//n是一个静态变量，函数调用结束后不会销毁
//	cout << n << endl;
//	return n;
//}
//int main()
//{
//	int& k = Count();
//
//	k++;
//
//	Count();
//
//	return 0;
//
//}


//int& Add(int a, int b)
//{
//	int c = a + b; //c是局部变量，Add调用结束后被销毁
//	return c;
//}
//int main()
//{
//	int& ret = Add(1, 2);
//	Add(3, 4);
//	cout << "Add(1, 2) is :" << ret << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int& Add(int a, int b)
//{
//    int c = a + b;
//    cout << "在Add函数内: c = " << c << ", &c = " << &c << endl;
//    return c;
//}
//
//int main()
//{
//    int& ret = Add(1, 2);
//    cout << "第一次调用后: ret = " << ret << ", &ret = " << &ret << endl;
//
//    Add(3, 4);
//    cout << "第二次调用后: ret = " << ret << ", &ret = " << &ret << endl;
//
//    // 可能得到7，也可能是垃圾值
//    cout << "最终结果: " << ret << endl;
//
//    return 0;
//}

//#include <iostream>
//#include <time.h>
//
//struct A { int a[10000]; };
//
//void TestFunc1(A a)
//{
//	;
//}
//
//void TestFunc2(A& a)
//{
//	;
//}
//
//void TestRefAndValue()
//{
//	A a;
//	// 以值作为函数参数
//	size_t begin1 = clock(); //clock()函数返回程序运行到调用clock()函数所耗费的时间，单位是ms
//	for (size_t i = 0; i < 100000; ++i)
//		TestFunc1(a);
//	size_t end1 = clock();
//
//	// 以引用作为函数参数
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 100000; ++i)
//		TestFunc2(a);
//	size_t end2 = clock();
//
//	// 分别计算两个函数运行结束后的时间
//	cout << "TestFunc1(A)-time:" << end1 - begin1 << endl;
//	cout << "TestFunc2(A&)-time:" << end2 - begin2 << endl;
//}
//int main()
//{
//	TestRefAndValue();
//	return 0;
//}


//#include <time.h>
//struct A
//{
//	int a[10000];
//}a;
//// 值返回
//A TestFunc1()
//{
//	return a;
//}
//// 引用返回
//A& TestFunc2()
//{
//	return a;
//}
//void TestRefAndValue()
//{
//	// 以值作为函数的返回值类型
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 100000; ++i)
//		TestFunc1();
//	size_t end1 = clock();
//
//	// 以引用作为函数的返回值类型
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 100000; ++i)
//		TestFunc2();
//	size_t end2 = clock();
//
//	// 计算两个函数运算完成之后的时间
//	cout << "TestFunc1 time:" << end1 - begin1 << endl;
//	cout << "TestFunc2 time:" << end2 - begin2 << endl;
//}
//int main()
//{
//	TestRefAndValue();
//	return 0;
//}

//
//int main()
//{
//	
//	int a = 10;
//	//引用
//	int& ra = a;
//	ra = 20;
//	//指针
//	int* pa = &a;
//	*pa = 20;
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int ans = 0;
//	ans = Add(1, 2);
//	return 0;
//}

//inline int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int ans = 0;
//	ans = Add(1, 2);
//	return 0;
//}

//#include <string>
//#include <map>
//int main()
//{
//	std::map<std::string, std::string> m{ { "apple", "苹果" }, { "orange","橙子" },{ "pear","梨" } };
//	std::map<std::string, std::string>::iterator it = m.begin();
//	while (it != m.end())
//	{
//		//....
//	}
//	return 0;
//}


//#include<string>
//int TestAuto()
//{
//	return 10;
//}
//int main()
//{
//	int a = 10;
//	string s;
//	auto b = a;
//	auto c = 'a';
//	auto d = TestAuto();
//	auto e = s.begin();
//	cout << typeid(b).name() << endl; //typeid类似于sizeof一样，是一个操作符，其可以用来获取变量的类型。
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//	cout << typeid(e).name() << endl;
//	//auto e; //无法通过编译，使用auto定义变量时必须对其进行初始化
//	return 0;
//}

//int main()
//{
//	int val = 10;
//	auto a; //错误写法，编译时会报错
//	auto b = val; //正确写法，定义时进行初始化，编译器才能进行推导然后将auto替换
//	return 0;
//}

//int main()
//{
//	int x = 10;
//	auto a = &x;
//	auto* b = &x;
//	auto& c = x;
//	cout << typeid(a).name() << endl;
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	*a = 20;
//	*b = 30;
//	c = 40;
//	return 0;
//}

//int main()
//{
//	auto a = 1, b = 2; // 正确写法
//	auto c = 3, d = 4.0; // 编译失败，因为c和d的初始化表达式类型不同
//
//	return 0;
//}

//// 此处代码编译失败，auto不能作为形参类型，
//// 原因：函数调用传参发生在运行阶段，故在编译阶段编译器无法对a的实际类型进行推导
//void TestAuto(auto a)
//{}
//
//int main()
//{
//	return 0;
//}

//int main()
//{
//	int a[] = { 1,2,3 };
//	auto b[] = { 4,5,6 };
//	return 0;
//}

//int main()
//{
//	int array[] = { 1, 2, 3, 4, 5 };
//	for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
//	{
//		array[i] *= 2; //利用下标访问
//	}
//	cout << endl;
//	for (int* p = array; p < array + sizeof(array) / sizeof(array[0]); ++p)
//	{
//		cout << *p << ' '; //利用指针访问
//	}
//	cout << endl;
//
//}

//int main()
//{
//	int array[] = { 1,2,3,4,5 };
//
//	//依次取数组的数据给引用变量e，自动判断结束，自动迭代 + 1
//	for (auto& e : array)
//	{
//		e *= 2;
//	}
//
//	//依次取数组的数据赋值给变量e，自动判断结束，自动迭代 + 1
//	for (auto e : array)
//	{
//		cout << e << " ";
//	}
//	return 0;
//}

#include<iostream>
#include <vector>  // 添加vector头文件
using namespace std;  // 使用std命名空间
//
//int main()
//{
//	vector<int> v;
//	for (int i = 1; i <= 5; i++) //插入1-5的数据
//	{
//		v.push_back(i);
//	}
//
//	for (auto e : v) //范围for遍历
//	{
//		cout << e << ' ';
//	}
//	cout << endl;
//	return 0;
//}

//int main()
//{
//	vector<int> v;
//	for (int i = 1; i <= 5; i++) //插入1-5的数据
//	{
//		v.push_back(i);
//	}
//
//	vector<int>::iterator it = v.begin();
//	//auto it = v.begin(); //迭代器的类型较长，也可以使用auto自动推导
//
//	while (it != v.end()) //迭代器遍历，这里将it当做指针理解即可
//	{
//		cout << *it << ' ';
//		it++;
//	}
//	cout << endl;
//	return 0;
//}

//void putArray(int array[])
//{
//	//数组传参发生降维，array是个指针，指向数组首元素
//	for (auto e : array) //由于array只是个int*指针，我们无法确定迭代的范围，故这里的范围for会报错
//	{
//		cout << e << ' ';
//	}
//}
//int main()
//{
//
//	vector<int> v;
//	for (int i = 1; i <= 5; i++) //插入1-5的数据
//	{
//		v.push_back(i);
//	}
//
//	for (auto e : v) //范围for遍历vector容器类。范围：v.begin()~v.end()
//	{
//		cout << e << ' ';
//	}
//	cout << endl;
//
//	int array[5] = { 1,2,3,4,5 };
//	for (auto e : array) //范围for遍历array数组。范围：从第一个元素的下标0到最后一个元素的下标4
//	{
//		cout << e << ' ';
//	}
//
//	putArray(array);
//	return 0;
//}

//int main()
//{
//	int* p1 = NULL;
//	return 0;
//}

//void f(int)
//{
//	cout << "f(int)" << endl;
//}
//void f(int*)
//{
//	cout << "f(int*)" << endl;
//}
//int main()
//{
//	f(0);
//	f(NULL);
//	f((int*)NULL);
//	return 0;
//}

void f(int)
{
	cout << "f(int)" << endl;
}
void f(int*)
{
	cout << "f(int*)" << endl;
}
int main()
{
	f(0);
	f(nullptr); //nullptr表示空指针
	return 0;
}