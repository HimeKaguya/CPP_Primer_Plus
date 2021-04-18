//#include "string1.h"
//#include<iostream>
//#include<cstdlib>
//#include<ctime>
//using namespace std;
//
//const int arsize = 10;
//const int maxlen = 81;
//
//int main()
//{
//	String name;
//	cout << "Hi,what's your name?\n";
//	cin >> name;
//
//	cout << name << " ,please enter up to " << arsize << " short sayings <empty line to quit>: \n";
//	String sayings[arsize];
//	char temp[maxlen];
//	int i;
//	for (i = 0; i < arsize; i++)
//	{
//		cout << i + 1 << ": ";
//		cin.get(temp, maxlen);
//		while (cin && cin.get() != '\n') continue;
//		if (!cin || temp[0] == '\0') break;
//		else sayings[i] = temp;
//	}
//	int total = i;
//
//	if (total > 0)
//	{
//		cout << "Here are your sayings: \n";
//		for (i = 0; i < total; i++)
//			cout << sayings[i] << endl;
//		//int shortest = 0;
//		//int first = 0;
//		//for (i = 1; i < total; i++)
//		//{
//		//	if (sayings[i].length() < sayings[shortest].length()) shortest = i;
//		//	if (sayings[i] < sayings[first]) first = i;
//		//}
//		//cout << "Shortest sayings:\n" << sayings[shortest] << endl;
//		//cout << "First alphabetically:\n" << sayings[first] << endl;
//		//cout << "This program used " << String::HowMany() << " String objects. Bye.\n";
//		String* shortest = &sayings[0];
//		String* first = &sayings[0];
//		for (i = 1; i < total; i++)
//		{
//			if (sayings[i].length() < shortest->length()) shortest = &sayings[i];
//			if (sayings[i] < *first) first = &sayings[i];
//		}
//		cout << "Shortest sayings:\n" <<*shortest << endl;
//		cout << "First alphabetically:\n" << *first << endl;
//		srand(time(0));
//		int choice = rand() % total;
//		String* f = new String(sayings[choice]);
//		cout << "My favourite saying:\n" << *f << endl;
//		delete f;
//		cout << "This program used " << String::HowMany() << " String objects. Bye.\n";
//	}
//	else
//		cout << "No input.Bye.\n";
//	return 0;
//}