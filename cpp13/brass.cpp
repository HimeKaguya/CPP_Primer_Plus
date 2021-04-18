#include "brass.h"
#include<iostream>

typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
format setFormat()
{
	return cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
}
void restore(format f, precis p)
{
	cout.setf(f, std::ios_base::floatfield);
	cout.precision(p);
}

Brass::Brass(const string& s, long an, double bal)
{
	fullname = s;
	accnum = an;
	balance = bal;
}
void Brass::Deposit(double amt)
{
	if (amt < 0)
		cout << "negative,deposit is cancelled.\n";
	else balance += amt;
}
void Brass::Withdraw(double amt)
{
	format initialstate = setFormat();
	precis prec = cout.precision(2);

	if (amt < 0)
		cout << "Withdraw must be positive.\n";
	else if (amt <= balance)
		balance -= amt;
	else
		cout << "Withdrawal amount of $ " << amt << "exceeds your balance.\n";
	restore(initialstate, prec);
}
double Brass::Balance() const
{
	return balance;
}
void Brass::Viewacct() const
{
	format initialstate = setFormat();
	precis prec = cout.precision(2);
	cout << "Client: " << fullname << endl;
	cout << "Account number: " << accnum << endl;
	cout << "Balance: $ " << balance << endl;
	restore(initialstate, prec);
}

BrassPlus::BrassPlus(const string& s, long an, double bal, double ml, double r) :Brass(s, an, bal)
{
	maxloan = ml;
	owesbank = 0.0;
	rate = r;
}
BrassPlus::BrassPlus(const Brass& ba, double ml, double r) :Brass(ba)
{
	maxloan = ml;
	owesbank = 0.0;
	rate = r;
}
void BrassPlus::Withdraw(double amt)
{
	format initialstate = setFormat();
	precis prec = cout.precision(2);

	double bal = Balance();
	if (amt <= bal)
		Brass::Withdraw(amt);
	else if (amt <= bal + maxloan - owesbank)
	{
		double advance = amt - bal;
		owesbank += advance * (1.0 + rate);
		cout << "Bank advance: $ " << advance << endl;
		cout << "Finance charge: $ " << advance * rate << endl;
		Deposit(advance);
		Brass::Withdraw(amt);
	}
	else
	{
		cout << "Credits limit exceeded.\n";
	}
	restore(initialstate, prec);
}
void BrassPlus::Viewacct() const
{
	format initialstate = setFormat();
	precis prec = cout.precision(2);
	Brass::Viewacct();
	cout << "Max Loan: $ " << maxloan << endl;
	cout << "Owed to bank :$  " << owesbank << endl;
	cout.precision(3);
	cout << "Loan rate: " << 100*rate <<"%\n";
	restore(initialstate, prec);
}
