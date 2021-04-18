#include<iostream>
#include<string>
#include<cmath>
#include<new>
//#include"coordin.h"
using namespace std;

//double w = 0.3;
//void update(double dt);
//void local();

//int tom = 3, dick = 30;
//static int harry = 300;
//void remote_access();

const int buf = 512;
const int n = 5;
char buffer[buf];
int main()
{
	//rect rplace;
	//polar pplace;
	//cout << "Enter x and y : " ;
	//while (cin >> rplace.x >> rplace.y)
	//{
	//	pplace = rect_to_polar(rplace);
	//	show_polar(pplace);
	//	cout << "Next 2 nums (q to quit): ";
	//}
	//cout << "bye" << endl;

	//cout << w << endl;
	//update(0.1);
	//cout << w << endl;
	//local();
	//cout << w << endl;

	//cout << &tom << endl <<tom<<endl<< &dick <<endl <<dick<<endl << &harry << endl<<harry<<endl;
	//remote_access();

	double* pd1, * pd2;
	int i;
	cout << "Calling new and placement new: \n";
	pd1 = new double[n];
	pd2 = new(buffer) double[n];
	for (i = 0; i < n; i++)
		pd2[i] = pd1[i] = 1000 + 20.0 * i;
	cout << "Memory addresses: \n" << " heap: " << pd1;
	cout << " static: " << (void*)buffer << endl;
	cout << "Memory contents: \n";
	for (i = 0; i < n; i++)
	{
		cout<<pd1[i]<<" at "<<&pd1[i]<<" ; ";
		cout<<pd2[i]<<" at "<<&pd2[i]<<endl;
	}

	cout << "\nCalling new and placement new a second time: \n";
	double* pd3, * pd4;
	pd3 = new double[n];
	pd4 = new(buffer) double[n];
	for (i = 0; i < n; i++)
		pd4[i] = pd3[i] = 1000 + 40.0 * i;
	cout << "Memory contents: \n";
	for (i = 0; i < n; i++)
	{
		cout << pd3[i] << " at " << &pd3[i] << " ; ";
		cout << pd4[i] << " at " << &pd4[i] << endl;
	}

	cout << "\nCalling new and placement new a third time: \n";
	delete[] pd1;
	pd1 = new double[n];
	pd2 = new(buffer+n*sizeof(double)) double[n];
	for (i = 0; i < n; i++)
		pd2[i] = pd1[i] = 1000 + 60.0 * i;
	cout << "Memory contents: \n";
	for (i = 0; i < n; i++)
	{
		cout << pd1[i] << " at " << &pd1[i] << " ; ";
		cout << pd2[i] << " at " << &pd2[i] << endl;
	}
	delete[] pd1;
	delete[] pd3;
	return 0;
}