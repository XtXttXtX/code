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


//缺省函数的重载
#include<iostream>
using namespace std;
void Fun(int x,double y = 1.5)
{
	cout << "void Fun(int x,double y = 1.5)" << endl;

}
void Fun(int x)
{
	cout << "void Fun(int x)" << endl;

}
int main()
{
	Fun(1,1.9);////这里会调用第一个函数没问题
	Fun(1);//此时既可以调用第一个函数，也可以调用第二个函数，存在歧义，会报错
}