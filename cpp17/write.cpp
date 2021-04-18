#include <iostream>
#include<cmath>
#include <cstring> // or else string.h
#include<iomanip>

//int main()
//{
//	using std::cout;
//	using std::endl;
//	const char* state1 = "Florida";
//	const char* state2 = "Kansas";
//	const char* state3 = "Euphoria";
//	int len = std::strlen(state2);
//	cout << "Increasing loop index:\n";
//	int i;
//	for (i = 1; i <= len; i++)
//	{
//		cout.write(state2, i);
//		cout << endl;
//	}
//	// concatenate output
//	cout << "Decreasing loop index:\n";
//	for (i = len; i > 0; i--)
//		cout.write(state2, i) << endl;
//	// exceed string length
//	cout << "Exceeding string length:\n";
//	cout.write(state2, len + 5) << endl;
//	return 0;
//}
//
//int main()
//{
//	using namespace std;
//	cout << "Enter an integer: ";
//	int n;
//	cin >> n;
//	cout << "n n*n\n";
//	cout << n << " " << n * n << " (decimal)\n";
//	// set to hex mode
//	cout << hex;
//	cout << n << " ";
//	cout << n * n << " (hexadecimal)\n";
//	// set to octal mode
//	cout << oct << n << " " << n * n << " (octal)\n";
//	// alternative way to call a manipulator
//	dec(cout);
//	cout << n << " " << n * n << " (decimal)\n";
//	return 0;
//}
//
//int main()
//{
//	using std::cout;
//	int w = cout.width(30);
//	cout << "default field width = " << w << ":\n";
//	cout.width(5);
//	cout << "N" << ':';
//	cout.width(8);
//	cout << "N * N" << ":\n";
//	for (long i = 1; i <= 100; i *= 10)
//	{
//		cout.width(5);
//		cout << i << ':';
//		cout.width(8);
//		cout << i * i << ":\n";
//	}
//	return 0;
//}
//
//int main()
//{
//	using std::cout;
//	cout.fill('*');
//	const char* staff[2] = { "Waldo Whipsnade", "Wilmarie Wooper" };
//	long bonus[2] = { 900, 1350 };
//	for (int i = 0; i < 2; i++)
//	{
//		cout << staff[i] << ": $";
//		cout.width(7);
//		cout << bonus[i] << "\n";
//	}
//	return 0;
//}
//
//int main()
//{
//	using std::cout;
//	float price1 = 20.40;
//	float price2 = 1.9 + 8.0 / 9.0;
//	cout << "\"Furry Friends\" is $" << price1 << "!\n";
//	cout << "\"Fiery Fiends\" is $" << price2 << "!\n";
//	cout.precision(2);
//	cout << "\"Furry Friends\" is $" << price1 << "!\n";
//	cout << "\"Fiery Fiends\" is $" << price2 << "!\n";
//	return 0;
//}
//
//int main()
//{
//	using std::cout;
//	using std::ios_base;
//	float price1 = 20.40;
//	float price2 = 1.9 + 8.0 / 9.0;
//	cout.setf(ios_base::showpoint);
//	cout << "\"Furry Friends\" is $" << price1 << "!\n";
//	cout << "\"Fiery Fiends\" is $" << price2 << "!\n";
//	cout.precision(2);
//	cout << "\"Furry Friends\" is $" << price1 << "!\n";
//	cout << "\"Fiery Fiends\" is $" << price2 << "!\n";
//	return 0;
//}
//
//int main()
//{
//	using std::cout;
//	using std::endl;
//	using std::ios_base;
//	int temperature = 63;
//	cout << "Today's water temperature: ";
//	cout.setf(ios_base::showpos); // show plus sign
//	cout << temperature << endl;
//	cout << "For our programming friends, that's\n";
//	cout << std::hex << temperature << endl; // use hex
//	cout.setf(ios_base::uppercase); // use uppercase in hex
//	cout.setf(ios_base::showbase); // use 0X prefix for hex
//	cout << "or\n";
//	cout << temperature << endl;
//	cout << "How " << true << "! oops -- How ";
//	cout.setf(ios_base::boolalpha);
//	cout << true << "!\n";
//	return 0;
//}
//
//int main()
//{
//	using namespace std;
//	// use left justification, show the plus sign, show trailing
//	// zeros, with a precision of 3
//	cout.setf(ios_base::left, ios_base::adjustfield);
//	cout.setf(ios_base::showpos);
//	cout.setf(ios_base::showpoint);
//	cout.precision(3);
//	// use e-notation and save old format setting
//	ios_base::fmtflags old = cout.setf(ios_base::scientific,
//		ios_base::floatfield);
//	cout << "Left Justification:\n";
//	long n;
//	for (n = 1; n <= 41; n += 10)
//	{
//		cout.width(4);
//		cout << n << "|";
//		cout.width(12);
//		cout << sqrt(double(n)) << "|\n";
//	}
//	// change to internal justification
//	cout.setf(ios_base::internal, ios_base::adjustfield);
//	// restore default floating-point display style
//	cout.setf(old, ios_base::floatfield);
//	cout << "Internal Justification:\n";
//	for (n = 1; n <= 41; n += 10)
//	{
//		cout.width(4);
//		cout << n << "|";
//		cout.width(12);
//		cout << sqrt(double(n)) << "|\n";
//	}
//	// use right justification, fixed notation
//	cout.setf(ios_base::right, ios_base::adjustfield);
//	cout.setf(ios_base::fixed, ios_base::floatfield);
//	cout << "Right Justification:\n";
//	for (n = 1; n <= 41; n += 10)
//	{
//		cout.width(4);
//		cout << n << "|";
//		cout.width(12);
//		cout << sqrt(double(n)) << "|\n";
//	}
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	// use new standard manipulators
//	cout << fixed << right;
//	// use iomanip manipulators
//	cout << setw(6) << "N" << setw(14) << "square root"
//		<< setw(15) << "fourth root\n";
//	double root;
//	for (int n = 10; n <= 100; n += 10)
//	{
//		root = sqrt(double(n));
//		cout << setw(6) << setfill('.') << n << setfill(' ')
//			<< setw(12) << setprecision(3) << root
//			<< setw(14) << setprecision(4) << sqrt(root)
//			<< endl;
//	}
//	return 0;
//}