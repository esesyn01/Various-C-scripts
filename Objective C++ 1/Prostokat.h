#pragma once
#include<iostream>
#include"FiguraPlaska.h"
using namespace std;
class Prostokat : public FiguraPlaska{
	private:
		double a,b;
	protected:
		void Wypisz(ostream& out) const override;
	public:
		Prostokat(double a, double b);
		double GetA() const;
		void SetA(double a);
		double GetB() const;
		void SetB(double b);
		double Pole(int x);
		double Obwod() override;
		double Pole() override;
		~Prostokat() override;
};
