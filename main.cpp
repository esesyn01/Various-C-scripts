
#include<iostream>
#include"Prostokat.h"
#include"Trojkat.h"
#include"Kolo.h"
using namespace std;

int main()
{
	FiguraPlaska *rect = new Prostokat(3,5);
	rect->Obwod();
	rect->Pole();
	cout << *rect;
	delete rect;
	FiguraPlaska *trian = new Trojkat(2,3,4);
	trian->Obwod();
	trian->Pole();
	cout << *trian;
	delete trian;
	FiguraPlaska *kolo= new Kolo(4);
	kolo->Obwod();
	kolo->Pole();
	cout << *kolo;
	delete kolo;
	Kolo bc(2);
	bc.Obwod();
	cout << bc;
	FiguraPlaska *tab[3];
	Prostokat g(4, 7);
	Trojkat h(3, 6, 4);
	Kolo k(3);
	tab[0] = &g;
	tab[1] = &h;
	tab[2] = &k;
	for (int i = 0; i < 3; i++)
	{
		tab[i]->Obwod();
		tab[i]->Pole();
	}
	FiguraPlaska* pp=&g;
	pp->Pole();
	g.Pole(3);
	pp = nullptr;
	delete pp;
	return 0;
}
