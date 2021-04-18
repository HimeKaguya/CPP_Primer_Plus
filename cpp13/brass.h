#pragma once
#ifndef BRASS_H_
#define BRASS_H_
#include<string>
using namespace std;
class Brass
{
private:
	string fullname;
	long accnum;
	double balance;
public:
	Brass(const string& s = "Nullbody", long an = -1, double bal = 0.0);
	void Deposit(double amt);
	virtual void Withdraw(double amt);
	double Balance() const;
	virtual void Viewacct() const;
	virtual ~Brass() {};
};

class BrassPlus :public Brass
{
private:
	double maxloan;
	double rate;
	double owesbank;
public:
	BrassPlus(const string& s = "Nullbody", long an = -1, double bal = 0.0, double ml = 500, double r = 0.11125);
	BrassPlus(const Brass& ba, double ml = 500, double r = 0.11125);
	virtual void Withdraw(double amt);
	virtual void Viewacct() const;
	void Resetmax(double m) { maxloan = m; }
	void Resetrate(double r) { rate = r; }
	void Resetowes() { owesbank = 0; }
};

#endif // !BRASS_H_

