#include <sstream>
#include <iostream>
#include"Liquid.h"
#include "Alcohol.h"

using namespace std;
Alcohol::Alcohol(const string name, const double density, const double strength)
	:liquid(name,density),strength(strength)
{
}

Alcohol::Alcohol(const Alcohol& s)
{
	liquid = s.liquid;
	strength = s.strength;
}

void Alcohol::Init(Liquid liquid, double strength)
{
	setLiquid(liquid);
	setSrtength(strength);
}

void Alcohol::Display() const
{
	cout << endl;
	cout << "Liquid = " << endl;
	liquid.Displey();
	cout << "strength = " << strength << endl;
}

void Alcohol::Read()
{
	double strength;
	Liquid l;
	cout << endl;
	cout << "Liquid =  " << endl;
	l.Read();
	cout << "strength =  "; cin >> strength;
	Init(l,strength);

}

void Alcohol::changeStrength(Liquid l)
{
	double strength;
	cout << endl;
	l.changeDensity();
	cout << "new strength = "; cin >> strength;
	Init(l, strength);
}

Alcohol& Alcohol::operator=(const Alcohol& s)
{
	liquid = s.liquid;
	strength = s.strength;

	return *this;

}

Alcohol::operator string() const
{
	stringstream ss;
	ss << "strength = " << strength << endl;
	return string(liquid)+ ss.str();

}

Alcohol& Alcohol::operator++()
{
	++liquid;
	return*this;
}

Alcohol& Alcohol::operator--()
{
	--liquid;
	return*this;
}

Alcohol Alcohol::operator++(int)
{
	Alcohol s(*this);
	liquid++;
	return s;
}

Alcohol Alcohol::operator--(int)
{
	Alcohol s(*this);
	liquid--;
	return s;
}

ostream& operator<<(ostream& out, const Alcohol& s)
{
	out << string(s);
	return out;
}

istream& operator>>(istream& in, Alcohol& s)
{
	double strength;
	cout << endl;
	cout << "liquid =  "; in >>s.liquid;
	cout << "strength =  ";in >> strength;
	s.setSrtength(strength);
	return in;

}
