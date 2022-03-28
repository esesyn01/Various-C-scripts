#include<iostream>
#include"Kolo.h"
using namespace std;
Kolo::Kolo(double r):r(r)
{
	cout<<"Konstruuje kolo\n";
}
double Kolo::GetR() const
{
	return r;
}
void Kolo::SetR(double r)
{
	this->r=r;
}
double Kolo::Pole()
{
	double pole=r*r*3.14;
	cout<<"Pole kola: "<< pole<<"\n";
	return pole;
}
double Kolo::Obwod()
{
	double obw=2*3.14*r;
	cout<<"Obwod kola: "<<obw<<"\n";
	return obw;
}
void Kolo::Wypisz(ostream &out) const{
	cout<<"Kolo o promieniu "<<this->r<<"\n";
}
Kolo::~Kolo()
{
	cout<<"Usuwam kolo o r ="<<r <<"\n";
}
