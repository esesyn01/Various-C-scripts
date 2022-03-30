#pragma once
#include<iostream>
#include<string>
using namespace std;
class Book {
	string author, title;
public:
	Book();
	Book(const string& author, const string& title);
	Book(string&& author, string&& title);
	Book(const Book& obj);
	Book(Book&& obj);
	string GetA() const;
	string GetT() const;
	void SetA(const string& author);
	void SetA(string&& author);
	void SetT(const string& title);
	void SetT(string&& title);
	friend ostream& operator<<(ostream& out, const Book& obj);
	Book& operator=(const Book& obj);
	Book& operator=(Book&& obj);
	~Book();
};
