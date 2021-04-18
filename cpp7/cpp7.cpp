//const int* a说明指针可以被更改地址，但是通过该指针修改值是不允许的。
//int const* a说明指针指向地址的值可以被更改，但是修改该指针地址是不允许的。
//对于二维数组的函数，需要在函数原型中明确指出其列数，并将行数作为另一个参数传入函数原型中。

#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<array>
using namespace std;

//const int Arsize = 8;
//int sum_arr(int a[], int n);
//int sum_arr(int a[], int n)
//{
//	int total = 0;
//	for (int i = 0; i < n; i++)
//	{
//		total += a[i];
//	}
//	return total;
//}

//unsigned int c(const char* str, char ch);
//unsigned int c(const char* str, char ch)
//{
//	unsigned int count = 0;
//	while (*str)
//	{
//		if (*str == ch) count++;
//		str++;
//	}
//	return count;
//}

//char* b(char c, int n);
//char* b(char c, int n)
//{
//	char* p = new char[n + 1];
//	p[n] = '\0';
//	while (n-- > 0) p[n] = c;
//	return p;
//}

//struct polar
//{
//	double dis;
//	double angle;
//};
//struct rect
//{
//	double x;
//	double y;
//};
//void rect_to_polar(const rect* pxy, polar* pda);
//void rect_to_polar(const rect* pxy, polar* pda)
//{
//	pda->dis = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
//	pda->angle = atan2(pxy->y, pxy->x);
//}
//void show_polar(const polar* pda);
//void show_polar(const polar* pda)
//{
//	const double Rad_to_deg = 57.29577951;
//	cout << "distance = " << pda->dis;
//	cout << " , angle = " << pda->angle * Rad_to_deg;
//	cout << " degrees\n";
//}


//const int size = 5;
//void display(const string sa[], int n);
//void display(const string sa[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << sa[i] << endl;
//	}
//}

//const int seasons = 4;
//const array<string, seasons> snames = { "Spring","Summer","Autumn","Winter" };
//void fill(array<double, seasons>* pa);
//void fill(array<double, seasons>* pa)
//{
//	for (int i = 0; i < seasons; i++) cin >> (*pa)[i];
//}
//void show(array<double, seasons> da);
//void show(array<double, seasons> da)
//{
//	double total = 0.0;
//	for (auto x : da) total += x;
//	cout << total << endl;
//}

//汉诺塔
//int i = 0;
//void h(int n, char a, char b, char c);
//void h(int n, char a, char b, char c)
//{
//	if (n == 1)
//	{
//		i++;
//		cout << "移动第" << i << "次" << a << "-->" << c << endl;
//	}
//	else
//	{ 
//		h(n - 1, a, c, b);
//		h(1, a, b, c);
//		h(n - 1, b, a, c);
//	}
//	
//}

const int len = 66;
const int divs = 6;
void subdiv(char ar[], int low, int high, int level);
void subdiv(char ar[], int low, int high, int level)
{
	if (level == 0) return;
	int mid = (low + high) / 2;
	ar[mid] = '|';
	subdiv(ar, low, mid, level - 1);
	subdiv(ar, mid, high, level - 1);
}
int main()
{
	//int cookies[Arsize] = { 1,2,4,8,16,32,64,128 };
	//cout << cookies << " = array address";
	//cout << sizeof cookies << " =size of cookies";
	//int sum = sum_arr(cookies, Arsize);

	//cout << "Total eaten: " << sum << " \n";


	//char mmm[15] = "minimum";
	//const char* wail = "ululate";

	//unsigned int ms = c(mmm, 'm');
	//unsigned int us = c(wail, 'u');

	//cout << ms << endl;
	//cout << us << endl;

	//int times;
	//char ch;

	//cin >> ch;
	//cin >> times;
	//char* ps = b(ch, times);
	//cout << ps << endl;
	//delete[] ps;
	//ps = b('+', 20);
	//cout << ps << "-DONE-" << ps << endl;
	//delete[] ps;


	//rect rplace;
	//polar pplace;

	//cout << "Enter the x and y values: ";
	//while (cin >> rplace.x >> rplace.y)
	//{
	//	rect_to_polar(&rplace, &pplace);
	//	show_polar(&pplace);
	//	cout << "Next 2 numbers (q to quit): ";
	//}
	//cout << "Done\n";



	//string list[size];
	//for (int i = 0; i < size; i++)
	//{
	//	getline(cin, list[i]);
	//}
	//display(list, size);

	//array<double, seasons> expense;
	//fill(&expense);
	//show(expense);

	//int n;
	//cin >> n;
	//h(n, 'a', 'b', 'c');

	char ruler[len];
	int i;
	for (i = 1; i < len-2; i++) ruler[i] = ' ';
	ruler[len - 1] = '\0';
	int max = len - 2;
	int min = 0;
	ruler[min] = ruler[max] = '|';
	cout << ruler << endl;
	for (i = 1; i <= divs; i++)
	{
		subdiv(ruler, min, max, i);
		cout << ruler << endl;
		for (int j = 1; j < len - 2; j++)
		{
			ruler[j] = ' ';
		}
	}
	return 0;
}


