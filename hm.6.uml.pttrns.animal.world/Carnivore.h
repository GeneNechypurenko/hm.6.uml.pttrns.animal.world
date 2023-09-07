#pragma once

#include <iostream>
#include <string>

#include "Herbivore.h"

using namespace std;

class Carnivore abstract
{
protected:
	int power;
	string name;
public:
	Carnivore(int p, const string n);
	virtual void eat(Herbivore* h) abstract;
	virtual int getPower() abstract;
	virtual string getName() abstract;
};

class Lion : public Carnivore
{
public:
	Lion();
	void eat(Herbivore* h) override;
	int getPower() override;
	string getName() override;
};

class Wolf : public Carnivore
{
public:
	Wolf();
	void eat(Herbivore* h) override;
	int getPower() override;
	string getName() override;
};

class Tiger : public Carnivore
{
public:
	Tiger();
	void eat(Herbivore* h) override;
	int getPower() override;
	string getName() override;
};