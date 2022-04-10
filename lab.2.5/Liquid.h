#include <iostream>
#include <string>
#pragma once
using namespace std;
class Liquid
{
private:
	string name;
	double density;
public:
	string getName() const { return name; }
	double getDensity() const { return density; }

	void setName(string name) { this->name = name; }
	void setDensity(double density) { this->density = density; }

	void Init(string name, double density);
	void Displey()const;
	void Read();

	Liquid() :name(""), density(0) {};
	Liquid(const string name);
	Liquid(const double density);
	Liquid(const string name, const double density);
	Liquid(const Liquid&);

	Liquid& operator =(const Liquid&);
	operator string () const;
	friend ostream& operator << (ostream& out, const Liquid& q);
	friend istream& operator >> (istream& in,  Liquid& q);

	void changeDensity();

	Liquid& operator ++ ();
	Liquid& operator -- ();
	Liquid operator ++ (int);
	Liquid operator -- (int);
	~Liquid(void){};
};

