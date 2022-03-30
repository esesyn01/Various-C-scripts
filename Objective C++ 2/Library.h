#pragma once
#include<iostream>
#include<initializer_list>
#include"Book.h"
using namespace std;
class Library
{
	Book* tab;
	size_t size;
public:
	Library();
	Library(initializer_list<Book> list);
	Library(size_t n);
	Library(const Library& obj);
	Library(Library&& obj);
	Library& operator=(const Library& obj);
	Library& operator=(Library&& obj);
	Book& operator[](size_t index);
	const Book& operator[](size_t index) const;
	friend ostream& operator<<(ostream& out, const Library& obj);
	size_t GetSize() const;
	~Library();
};

