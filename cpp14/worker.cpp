//#include "worker.h"
//#include<iostream>
//
//Worker::~Worker(){}
//void Worker::data() const
//{
//	cout << "Name: " << fullname << endl;
//	cout << "ID: " << id << endl;
//}
//void Worker::get()
//{
//	getline(cin, fullname);
//	cout << "Enter worker's ID: ";
//	cin >> id;
//	while (cin.get() != '\n') continue;
//}
//
//void Waiter::set()
//{
//	cout << "Enterr waiter's name: ";
//	Worker::get();
//	get();
//}
//void Waiter::show() const
//{
//	cout << "Category: waiter\n";
//	Worker::data();
//	data();
//}
//void Waiter::data() const
//{
//	cout << "Panache rating: " << panache << endl;
//}
//void Waiter::get()
//{
//	cout << "Enter waiter's panache rating: ";
//	cin >> panache;
//	while (cin.get() != '\n') continue;
//}
//
//const char* Singer::pv[Singer::Vtypes] = \
//{"other", "alto", "contralto", "soprano", "bass", "baritone", "tenor"};
//void Singer::set()
//{
//	cout << "Enterr singer's name: ";
//	Worker::get();
//	get();
//}
//void Singer::show() const
//{
//	cout << "Category: singer\n";
//	Worker::data();
//	data();
//}
//void Singer::data() const
//{
//	cout << "Vocal range: " << pv[voice] << endl;
//}
//void Singer::get()
//{
//	cout << "Enter number for singer's vocal range: \n";
//	int i = 0;
//	for (i = 0; i < Vtypes; i++)
//	{
//		cout << i << ": " << pv[i] << "\t";
//		if (i % 4 == 3)
//			cout << endl;
//	}
//	if (i % 4 != 0)
//		cout << "\n";
//	cin >> voice;
//	while (cin.get() != '\n') continue;
//}
//
//void SingingWaiter::data() const
//{
//	Singer::data();
//	Waiter::data();
//}
//void SingingWaiter::get()
//{
//	Singer::get();
//	Waiter::get();
//}
//void SingingWaiter::set()
//{
//	cout << "Enter singing waiter's name: ";
//	Worker::get();
//	get();
//}
//void SingingWaiter::show() const
//{
//	cout << "Category: singingwaiter\n";
//	Worker::data();
//	data();
//}