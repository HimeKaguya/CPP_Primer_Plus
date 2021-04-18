#include"queue.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

const int MIN_PER_HR = 60;
bool newcustomer(double x)
{
	return rand() * x / RAND_MAX < 1;
}

int main()
{
	srand(time(0));
	cout << "Case study: Bank\n";
	cout << "Enter maximum size of queue: ";
	int qs;
	cin >>qs;
	Queue line(qs);

	cout << "Enter the number of simulation hours: ";
	int hours;
	cin >> hours;
	long cyclelimt = MIN_PER_HR * hours;

	cout << "Enter average number of customers per hout: ";
	double perhour;
	cin >> perhour;
	double min_per_cust=MIN_PER_HR/perhour;

	Item temp;
	long turnaways = 0;
	long customers = 0;
	long served = 0;
	long sum_line = 0;
	int wait_time = 0;
	long line_wait = 0;

	for (int cycle = 0; cycle < cyclelimt; cycle++)
	{
		if (newcustomer(min_per_cust))
		{
			if (line.isfull())
				turnaways++;
			else
			{
				customers++;
				temp.set(cycle);
				line.enqueue(temp);
			}
		}
		if (wait_time <= 0 && !line.isempty())
		{
			line.dequeue(temp);
			wait_time = temp.ptime();
			line_wait += cycle - temp.when();
			served++;
		}
		if (wait_time > 0)
		{
			wait_time--;
		}
		sum_line += line.queuecount();
	}

	if (customers > 0)
	{
		cout << "customers accepted: " << customers << endl;
		cout << "customers served: " << served << endl;
		cout << "turnaways: " << turnaways << endl;
		cout << "average queue size: ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout << (double)sum_line / cyclelimt << endl;
		cout << "average wait time: " << (double)line_wait / served << " minutes\n";
	}
	else
	{
		cout << "No customer!\n";
	}
	cout << "Done!\n";
	return 0;
}