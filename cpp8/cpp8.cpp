#include<iostream>
#include<string>
#include<vector>
using namespace std;

//inline double square(double x) { return x * x; }

//void swapr(int& a, int& b)
//{
//	swap(a,b);
//}
//void swapp(int* p, int* q)
//{
//	swap(*p, *q);
//}
//void swapv(int a, int b)
//{
//	swap(a, b);
//}

//double cube(double a)
//{
//	a *= a * a;
//	return a;
//}
//double refcube(double& a)
//{
//	a *= a * a;
//	return a;
//}

//template <typename t>
//void swapr(t& a, t& b)
//{
//	swap(a,b);
//}
//template <typename t>
//void swapr(t* a, t* b, int n)
//{
//	t temp;
//	for (int i = 0; i < n; i++)
//	{
//		temp=b[i];
//		b[i] = a[i];
//		a[i] = temp;
//	}
//}
//void show(int a[])
//{
//	cout << a[0] << a[1] << "/";
//	cout << a[2] << a[3] << "/";
//	for (int i = 4; i < 8; i++) cout << a[i];
//	cout << endl;
//}
//显示具体化
//template<> void swapr<job>(job&, job&);
//显示实例化
//template void swapr<int>(int&, int&);
//让xpy的类型与x+y的类型相同
//decltype(x + y) xpy = x + y;

int main()
{
	//double a, b;
	//double c = 13.0;
	//a = square(5.0);
	//b = square(4.5 + 7.5);
	//cout << a << endl << b << endl << square(c++) << endl;

	//int rats = 101;
	//int& ra = rats;
	//cout << rats << endl;
	//cout << ra << endl;
	//ra++;
	//cout << rats << endl;
	//cout << ra << endl;
	//cout << &rats << endl;
	//cout << &ra << endl;

	//int w1 = 350;
	//int w2 = 300;

	//swapr(w1, w2);
	//cout << w1 << w2 << endl;
	//swapp(&w1, &w2);
	//cout << w1 << w2 << endl;
	//swapv(w1, w2);
	//cout << w1 << w2 << endl;

	//double x = 3.0;
	//cout << cube(x) <<x<< endl;
	//cout << refcube(x) << x << endl;

	//int i = 10, j = 20;
	//double x = 24.5, y = 36.7;
	//swapr(i, j);
	//swapr(x, y);
	//cout << i << j << endl;
	//cout << x << y << endl;
	//int d1[8] = { 0,7,0,4,1,7,7,6 };
	//int d2[8] = { 0,7,2,0,1,9,6,9 };
	//swapr(d1, d2, 8);
	//show(d1);
	//show(d2);
	return 0;
}			