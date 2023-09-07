#pragma once

#include <iostream>
#include <string>

using namespace std;

class Herbivore abstract
{
protected:
	int weight;
	bool isAlive;
	string name;
public:
	Herbivore(int w, bool a, const string n);
	virtual void eatGrass() abstract;
	virtual bool getIsAlive() abstract;
	virtual int getWeight() abstract;
	virtual string getName() abstract;
};

class Wildebeest : public Herbivore
{
public:
	Wildebeest();
	void eatGrass() override;
	bool getIsAlive() override;
	int getWeight() override;
	string getName() override;
};

class Bison : public Herbivore
{
public:
	Bison();
	void eatGrass() override;
	bool getIsAlive() override;
	int getWeight() override;
	string getName() override;
};

class Elk : public Herbivore
{
public:
	Elk();
	void eatGrass() override;
	bool getIsAlive() override;
	int getWeight() override;
	string getName() override;
};