#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;
const int SIZE = 60;
int main()
{
	//enum{red,orange,yellow,green,blue,violet,indigo};
	//cout << "Enter color code 0-6\n";
	//int code;
	//cin >> code;
	//while (code >= red && code <= indigo)
	//{
	//	switch (code)
	//	{
	//	case red: cout << "red\n"; break;
	//	case orange: cout << "orange\n"; break;
	//	case yellow: cout << "yellow\n"; break;
	//	case green: cout << "green\n"; break;
	//	case blue: cout << "blue\n"; break;
	//	case violet: cout << "violet\n"; break;
	//	case indigo: cout << "indigo\n"; break;
	//	}
	//	cout << "Enter color code 0-6\n";
	//	cin >> code;
	//}
	//cout << "bye\n";

	//string line;
	//int spaces = 0;
	//getline(cin, line);
	//cout << line<<endl;
	//for (int i = 0; line[i] != '\0'; i++)
	//{
	//	cout << line[i];
	//	if (line[i] == '.')break;
	//	if (line[i] != ' ') continue;
	//	spaces++;
	//}
	//cout << endl<<spaces << " spaces\n";
	//cout << "Done\n";
	
	//int golf[Max] = {};
	//cout << "Please enter your golf scores.\n";
	//cout << "You must enter " << Max << " rounds.\n";
	//int i;
	//for (i = 0; i < Max; i++)
	//{
	//	cout << "Round # " << i + 1 << " : ";
	//	while (!(cin >> golf[i]))
	//	{
	//		cin.clear();
	//		while (cin.get() != '\n')
	//			continue;
	//		cout << "Please enter a number: ";
	//	}
	//}
	//double total = 0.0;
	//for (auto x : golf)
	//{
	//	total += x;
	//}
	//cout << total / Max << " =average score " << Max << " rounds\n";

	//char automobile[50];
	//int year;
	//double a_price;
	//double d_price;

	//ofstream outFile;
	//outFile.open("carinfo.txt");

	//cout << "Enter the make and model of automobile: \n";
	//cin.getline(automobile, 50);
	//cout << "Enter the model year: \n";
	//cin >> year;
	//cout << "Enter original asking price: \n";
	//cin >> a_price;
	//d_price = a_price * 0.913;

	//cout << fixed;
	//cout.precision(2);
	//cout.setf(ios_base::showpoint);
	//cout << "Make and model: " << automobile << endl;
	//cout << "Years: " << year << endl;
	//cout << "Was asking $" << a_price << endl;
	//cout << "Now asking $" << d_price << endl;

	////正常方式显示小数，而不是科学计数法
	//outFile << fixed;
	////保留两位有效数字
	//outFile.precision(2);
	////显示小数点和额外的零，即使不需要
	//outFile.setf(ios_base::showpoint);
	//outFile << "Make and model: " << automobile << endl;
	//outFile << "Years: " << year << endl;
	//outFile << "Was asking $" << a_price << endl;
	//outFile << "Now asking $" << d_price << endl;

	//outFile.close();

	char filename[SIZE];
	ifstream inFile;
	cout << "Enter name of data file: ";
	cin.getline(filename, SIZE);
	inFile.open(filename);
	if (!inFile.is_open())
	{
		cout << "Wrong!!!\n";
		exit(EXIT_FAILURE);
	}

	double value;
	double sum = 0.0;
	int count = 0;

	inFile >> value;
	while (inFile.good())
	{
		++count;
		sum += value;
		inFile >> value;
	}

	if (inFile.eof()) cout << "End\n";
	else if (inFile.fail()) cout << "Input terminated by data mismatch\n";
	else cout << "Input terminated by unknown reason\n";

	if (count == 0)
	{
		cout << "No data\n";
	}
	else
	{
		cout << "Items read: " << count << endl;
		cout << "Sum: " << sum << endl;
		cout << "Average: " << sum / count << endl;
	}
	inFile.close();
	return 0;
}