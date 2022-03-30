#include<iostream>
#include<string>
#include"Book.h"
#include"Library.h"
using namespace std;
int main()
{
	string a = "1", t = "2";
	Book e;
	cout << "e: " << e << endl;
	Book b1 = { a, t };
	cout << "b1: " << b1 << endl;
	Book b2 = { "3","4" };
	cout << "b2: " << b2 << endl;
	Book b3 = b1;
	cout << "b3: " << b3 << " b1: " << b1 << endl;
	e = move(b2);
	cout << "e: " << e << " b2:" << b2 << endl;
	e.SetA("5");
	cout << "e: " << e << endl;
	e.SetT("6");
	cout << "e: " << e << endl;
	cout << "Tu testujemy\n";
	Library f;
	cout << "f: " << f << endl;
	//3-5 książek 
	Library l1 = {{"A", "B"}, {"C", "D"}, {"E", "F"}};
	cout << "l1: " << l1 << endl;
	Library l2(2);
	cout << "l2: " << l2 << endl;
	l2[0] = { "G", "H" };
	l2[1] = { "I", "J" };
	cout << "l2: " << l2 << endl;
	f = move(l2);
	cout << "f: " << f << " l2: " << l2 << endl;
	l1[0] = move(f[1]);
	cout << "l1: " << l1 << " f: " << f << endl;
}