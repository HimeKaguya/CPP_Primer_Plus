//#include "stock10.h"
//#include<iostream>
//using namespace std;
//
//Stock::Stock()
//{
//	cout << "Default constructor called: \n";
//	company = "no name";
//	shares = 0;
//	share_val = 0;
//	total_val=0;
//}
//Stock::Stock(const std::string& co, long n, double pr)
//{
//	cout << "Constructor using " << co << " called: \n";
//	company = co;
//
//	if (n < 0)
//	{
//		cout << "shares cannot be negative, set to 0\n";
//		shares = 0;
//	}
//	else shares = n;
//	share_val = pr;
//	set_tot();
//}
//Stock::~Stock()
//{
//	cout << "Bye, " << company << endl;
//}
//void Stock::buy(long num, double price)
//{
//	if (num < 0) cout << "Perchase cannot be negative\n";
//	else 
//	{
//		shares += num;
//		share_val = price;
//		set_tot();
//	}
//}
//void Stock::sell(long num, double price)
//{
//	if (num < 0) cout << "Sold cannot be negative\n";
//	else if(num>shares) cout << "You cannot sold more than you have\n";
//	else
//	{
//		shares -= num;
//		share_val = price;
//		set_tot();
//	}
//}
//void Stock::updata(double price)
//{
//	share_val = price;
//	set_tot();
//}
//void Stock::show() const
//{
//
//	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
//	streamsize prec = cout.precision(3);
//
//	cout << "Company: " << company << " Shares: " << shares << endl;
//
//	cout.precision(2);
//	cout << "Share price: $" << share_val << " Total Worth: $" << total_val << endl;
//
//	cout.setf(orig, ios_base::floatfield);
//	cout.precision(prec);
//}