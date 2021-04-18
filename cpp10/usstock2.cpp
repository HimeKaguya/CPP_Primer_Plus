//#include<iostream>
//#include "stock20.h"
//using namespace std;
//
//const int stks = 4;
//int main()
//{
//	Stock stocks[stks] =
//	{
//		Stock("NanoSmart",12,20.0),
//		Stock("Boffo Objects",200,2.0),
//		Stock("Monolithic Obelisks",130,3.25),
//		Stock("Fleep Enterprises",60,6.5)
//	};
//	int st;
//	for (st = 0; st < stks; st++) stocks[st].show();
//
//	const Stock* top = &stocks[0];
//	for (st = 1; st < stks; st++) top = &top->topval(stocks[st]);
//
//	top->show();
//	return 0;
//}