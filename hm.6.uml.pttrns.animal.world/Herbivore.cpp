#include "Herbivore.h"

Herbivore::Herbivore(int w, bool a, const string n)
	:
	weight(w),
	isAlive(a),
	name(n)
{}

Wildebeest::Wildebeest()
	:
	Herbivore(50, true, "Wildebeest")
{}

void Wildebeest::eatGrass()
{
	weight += 10;
}

bool Wildebeest::getIsAlive()
{
	return isAlive;
}

int Wildebeest::getWeight()
{
	return weight;
}

string Wildebeest::getName()
{
	return name;
}

Bison::Bison()
	:
	Herbivore(100, true, "Bison")
{}

void Bison::eatGrass()
{
	weight += 10;
}

bool Bison::getIsAlive()
{
	return isAlive;
}

int Bison::getWeight()
{
	return weight;
}

string Bison::getName()
{
	return name;
}

Elk::Elk()
	:
	Herbivore(70, true, "Elk")
{}

void Elk::eatGrass()
{
	weight += 10;
}

bool Elk::getIsAlive()
{
	return isAlive;
}

int Elk::getWeight()
{
	return weight;
}

string Elk::getName()
{
	return name;
}
