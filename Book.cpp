#include<iostream>
#include<string>
#include"Book.h"
using namespace std;
Book::Book()
{
	cout << "Konstruktor pusty klasy Book\n";
}
Book::Book(const string& Author, const string& Title)
{
	author = Author;
	title = Title;
	cout << "Konstruktor z l-ref klasy Book\n";
}
Book::Book(string&& Author, string&& Title)
{
	author = move(Author);
	title = move(Title);
	cout << "Konstruktor z r-ref klasy Book\n";
}
Book::Book(const Book& obj)
{
	author = obj.author;
	title = obj.title;
	cout << "Konstruktor kopiujacy klasy Book\n";
}
Book::Book(Book&& obj)
{
	author = move(obj.author);
	title = move(obj.title);
	cout << "Konstrukor przenosz¹cy klasy Book\n";
	obj.author = "NULL";
	obj.title = "NULL";
}
Book::~Book()
{
	cout << "Usuwam obiekt klasy Book\n";
}
ostream& operator<<(ostream& out, const Book& obj)
{
	out << "Autorem " << obj.title << " jest " << obj.author<<"\n";
	return out;
}
Book& Book::operator=(const Book& obj)
{
	author = obj.author;
	title = obj.title;
	return *this;
}
Book& Book::operator=(Book&& obj)
{
	swap(author, obj.author);
	swap(title, obj.title);
	return *this;
}
string Book::GetA()const
{
	string a = author;
	return a;
}
string Book::GetT()const
{
	string a = title;
	return a;
}
void Book::SetA(const string& Author)
{
	author = Author;
}
void Book::SetA(string&& Author)
{
	author = move(Author);
}
void Book::SetT(const string& Title)
{
	title = Title;
}
void Book::SetT(string&& Title)
{
	title = move(Title);
}
