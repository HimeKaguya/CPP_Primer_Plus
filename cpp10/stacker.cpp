#include<iostream>
#include"stack.h"
#include<cctype>
using namespace std;

int main()
{
	Stack st;
	char ch;
	unsigned long po;
	cout << "Please enter a to add a purchase order,\n";
	cout << "p to process a po, or q to quit\n";
	while (cin >> ch && toupper(ch) != 'Q')
	{
		while (cin.get() != '\n') continue;
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		case 'A':
		case 'a':cout << "Enter a po number to add: ";
			cin >> po;
			if (st.isfull()) cout << "stack already full\n";
			else st.push(po);
			break;
		case 'P':
		case 'p':if (st.isempty()) cout << "stack already empty\n";
				else { st.pop(po); cout << "PO #" << po << " popped\n"; }
				break;
		}
		cout << "Please enter a to add a purchase order,\n";
		cout << "p to process a po, or q to quit\n";
	}
	cout << "Bye\n";
	return 0;
}