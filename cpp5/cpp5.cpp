#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<ctime>
using namespace std;

//long long f(long long a)
//{
//	if (a == 0 or a == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return a * f(a - 1);
//	}
//}

int main()
{
	//long long a;
	//cout << "CIN a number: ";
	//cin >> a;
	//f(a);
	//cout << a<<"!= "<<f(a)<<endl;

	//string word;
	//cin >> word;

	//for (int i = word.size() - 1; i >= 0; i--)
	//{
	//	cout << word[i]<<endl;
	//}

	//float sec;
	//cin >> sec;
	//clock_t cd = sec * CLOCKS_PER_SEC;
	//clock_t cs = clock();
	//while (clock() - cs < cd);
	//cout << "done" << endl;

	//int n;
	//do
	//{
	//	cin >> n;
	//} while (n != 7);
	//cout << "yes" << endl;

	//在数组范围内的循环，for(int x:array)  如果要修改，需要在x前面加上&，表示引用
	//vector<int> p = { 1,2,3,4,5 };
	//for (int &x: p)
	//{
	//	x += 1;
	//	cout << x << endl;
	//}

	//char ch;
	//int count = 0;
	//cin.get(ch);
	//while (cin.fail()==false)//ctrl+z代表来自键盘的EOF，表示输入的终止
	//{
	//	cout << ch;
	//	count++;
	//	cin.get(ch);
	//}
	//cout << count << endl;

	//string s = "aa";
	//string p = "a";
	//vector<vector<int>> t (s.size() + 1, vector<int>(p.size() + 1, -1));
	//for (int i = 0;i < s.size() + 1;i++)
	//{
	//	for (int j = 0; j < p.size() + 1;j++)
	//	{
	//		cout << t[i][j]<<'\t';
	//	}
	//	cout << endl;
	//}

	//const int Cities = 5;
	//const int Years = 4;

	//const char* cities[Cities] =
	//{
	//	"Griblble City",
	//	"Gribbleton",
	//	"New Gribble",
	//	"San Gribble",
	//	"Gribble Vista"
	//};

	//int maxtemp[Years][Cities] =
	//{
	//	{96,100,87,101,105},
	//	{96,98,91,107,104},
	//	{97,101,93,108,107},
	//	{98,103,95,109,108}
	//};

	//for (int city = 0; city < Cities; ++city)
	//{
	//	cout << cities[city] << '\t';
	//	for (int year = 0; year < Years; ++year)
	//	{
	//		cout << maxtemp[year][city] << '\t';
	//	}
	//	cout << endl;
	//}

	//int p[3] = { 2,3,4 };
	//const int* q[3] = { &p[0],&p[1],&p[2] };
	//for(int i=0;i<3;i++)
	//	cout << q[i] << endl;
	return 0;
}

