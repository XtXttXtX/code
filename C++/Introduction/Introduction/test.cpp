#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
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

//使用using namespace 命名空间名称引入
#include <stdio.h>
namespace N
{
	int a;
	double b;
}
using namespace N;//将命名空间N的所有成员引入
int main()
{
	a = 10;//将命名空间中的成员a赋值为10
	printf("%d\n", a);//打印命名空间中的成员a
	return 0;
}


