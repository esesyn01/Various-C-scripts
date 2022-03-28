#pragma once
#include "FiguraPlaska.h"
#include<iostream>
using namespace std;
class Trojkat : public FiguraPlaska{
	double a,b,c;
	protected:
		void Wypisz(ostream& out) const override;
	public:
		Trojkat(double a, double b, double c);
		double GetA() const;
		double GetB() const;
		double GetC() const;
		void SetA(double a);
		void SetB(double b);
		void SetC(double c);
		double Obwod() override;
		double Pole() override;
		~Trojkat () override;
};
