//#include "mytime1.h"
//#include<iostream>
//using namespace std;
//Time::Time()
//{
//	hours = minutes = 0;
//}
//Time::Time(int h, int m )
//{
//	hours = h;
//	minutes = m;
//}
//void Time::addmin(int m)
//{
//	minutes += m;
//	hours += minutes / 60;
//	minutes %= 60;
//}
//void Time::addhr(int h)
//{
//	hours += h;
//}
//void Time::reset(int h , int m)
//{
//	hours = h;
//	minutes = m;
//}
//Time Time::operator+(const Time& t) const
//{
//	Time sum;
//	sum.minutes = minutes + t.minutes;
//	sum.hours = hours + t.hours + sum.minutes / 60;
//	sum.minutes %= 60;
//	return sum;
//}
//Time Time::operator-(const Time& t) const
//{
//	Time diff;
//	int t1, t2;
//	t1 = t.minutes + 60 * t.hours;
//	t2 = minutes + 60 * hours;
//	diff.minutes = (t2 - t1) % 60;
//	diff.hours = (t2 - t1) / 60;
//	return diff;
//}
//Time Time::operator*(double n) const
//{
//	Time result;
//	long totalminutes = hours * n * 60 + minutes * n;
//	result.hours = totalminutes / 60;
//	result.minutes = totalminutes % 60;
//	return result;
//}
//ostream& operator<<(ostream& os, const Time& t)
//{
//	os << t.hours << " hours, " << t.minutes << " minutes\n";
//	return os;
//}
////void Time::show() const
////{
////	std::cout << hours << " hours, " << minutes << " minutes\n";
////}