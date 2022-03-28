#include<iostream>
#include "Prostokat.h"
using namespace std;
Prostokat::Prostokat(double a ,double b): a(a), b(b)
{
	cout<<"Konstruktor Prostokata("<<a<<","<<b<<")\n";
}
double Prostokat::GetA() const{
return  a;
}
double Prostokat::GetB() const{
return b;
}
void Prostokat::SetA(double a)
{
	this->a=a;
}
void Prostokat::SetB(double b)
{
	this->b=b;
}
double Prostokat::Obwod()
{
	double obwod=2*(a+b);
	cout<<"Obwod prostokata = "<<obwod<<"\n";
	return obwod;
}
double Prostokat::Pole()
{
	double pole= a*b;
	cout<<"Pole prostokata = "<<pole<<"\n";
	return pole;
}
double Prostokat::Pole(int x)
{
	double pole = a * b;
	pole *= x;
	cout << "Pole prostokata pomnnozone = " << pole << "\n";
	return pole;
}
void Prostokat::Wypisz(ostream& out) const{
   cout<<"Prostokat o wymiarach: "<<this->a<<" x "<<this->b<<"\n";
}
Prostokat::~Prostokat()
{
	cout<<"Niszcze prostokata:"<<a<<" x "<<b<<"\n";
}
