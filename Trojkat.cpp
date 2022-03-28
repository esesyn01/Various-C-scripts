
#include<iostream>
#include<math.h>
#include"Trojkat.h"
using namespace std;
Trojkat::Trojkat (double a, double b, double c):a(a),b(b),c(c){
	cout<<"Konstruktor trojkata\n";
}
double Trojkat::GetA() const{
return a;
}
double Trojkat::GetB() const{
return b;
}
double Trojkat::GetC() const{
return c;
}
void Trojkat::SetA(double a)
{
	this->a=a;
}
void Trojkat::SetB(double b)
{
	this->b=b;
}
void Trojkat::SetC(double c)
{
	this->c=c;
}
double Trojkat::Obwod()
{
	double obw=a+b+c;
	cout<<"Obwod trojkata: "<<obw<<"\n";
	return obw;
}
double Trojkat::Pole()
{
	if (!(a + b > c && a + c > b && b + c > a))
	{
		cout << "Taki trojkat nie moze istniec!\n";
		return 0;

	}
	double p=(a+b+c)/2;
	double pole=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<"Pole trojkata: "<<pole<<"\n";
	return pole;
}
void Trojkat::Wypisz(ostream& out) const
{
	cout<<"Trojkat o wymiarach: "<<this->a<<" "<<this->b<<" "<<this->c<<"\n";
}
Trojkat::~Trojkat()
{
	cout<<"Niszcze trojkata:"<<a<<" "<<b<<" "<<c<<"\n";
}
