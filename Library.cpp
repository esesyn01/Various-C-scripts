#include "Library.h"
#include<iostream>
#include<initializer_list>
using namespace std;
Library::Library()
{
	cout << "Konstruktor bezargumentowy biblioteki\n";
}
Library::Library(initializer_list <Book> list):size{list.size()},tab{new Book[list.size()]}
{
	size_t i = 0;
	cout << "Konstruktor nieograniczonej biblioteki\n";
	for (Book a : list)
	{
		tab[i] = a;
		++i;
		cout << " " << i << " ";
	}
}
Library::Library(size_t n):size{n},tab{new Book[n]}
{
	cout << "Konstruktor biblioteki z podana liczba\n";
	Book a;
	for (int i = 0; i < n; i++)
	{
		tab[i] = a;
	}
}
Library::Library(const Library& obj):size(obj.size),tab{new Book[obj.size]}
{
	cout << "Konstruktor kopiujacy biblioteki\n";
	for (size_t i = 0; i < size; i++)
	{
		tab[i] = obj.tab[i];
	}
}
Library::Library(Library&& obj)
{
	cout << "Konstruktor przenoszacy biblioteki\n";
	tab = obj.tab;
	size = obj.size;
	obj.tab = nullptr;
	obj.size = 0;
}
Library::~Library()
{
	if (tab != nullptr)
		delete[] tab;
	cout << "Usuwam biblioteke\n";
}
Library& Library::operator=(const Library& obj)
{
	Library temp = obj;
	swap(tab, temp.tab);
	swap(size, temp.size);
	return *this;
}
Library& Library::operator=(Library&& obj)
{
	swap(tab, obj.tab);
	swap(size, obj.size);
	return *this;
}
Book& Library::operator[](size_t index)
{
	return tab[index];
}
const Book& Library::operator[](size_t index) const
{
	return tab[index];
}
size_t Library::GetSize() const
{
	return size;
}
ostream& operator<<(ostream& out, const Library& obj)
{
	for (size_t i = 0; i < obj.size; i++)
	{
		out<< obj.tab[i];
	}
	return out;
}