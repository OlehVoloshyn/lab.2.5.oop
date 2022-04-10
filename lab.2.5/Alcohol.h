
#include "Liquid.h"
#pragma once
class Alcohol
{
private:
	Liquid liquid;
	double strength;
public:
	Liquid getLiquid() { return liquid; }
	double getStrength() { return strength; }

	void setLiquid(Liquid liquid) { this->liquid = liquid; }
	void setSrtength(double strength) { this->strength = strength; }

	Alcohol() :liquid("",0), strength(0) {};
	Alcohol(const string name, const double density, const double strength);
	Alcohol(const Alcohol& s);

	void Init(Liquid liquid, double strength);
	void Display() const;
	void Read();
	void changeStrength(Liquid l);

	Alcohol& operator = (const Alcohol& s);

	friend ostream& operator << (ostream& out, const Alcohol& s);
	friend istream& operator >> (istream& in, Alcohol& s);

	operator string () const;

	Alcohol& operator ++ ();
	Alcohol& operator -- ();
	Alcohol operator ++ (int);
	Alcohol operator -- (int);
	~Alcohol(void){};

};

