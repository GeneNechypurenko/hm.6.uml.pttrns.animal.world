#include "Carnivore.h"

Carnivore::Carnivore(int p, const string n)
	:
	power(p),
	name(n)
{}

Lion::Lion()
	:
	Carnivore(100, "Lion")
{}

void Lion::eat(Herbivore * h)
{
    if (h->getIsAlive())
    {
        if (power > h->getWeight())
        {
            power += 10;
            cout << getName() << " hunts his prey " << h->getName() << " and gain " << getPower() << " power" << endl;
        }
        else
        {
            power -= 10;
            cout << h->getName() << " escapes the predator " << getName() << " and " << getName() << " loses " << getPower() << " power" << endl;
        }
    }
}

int Lion::getPower()
{
    return power;
}

string Lion::getName()
{
    return name;
}

Wolf::Wolf()
    :
    Carnivore(70, "Wolf")
{}

void Wolf::eat(Herbivore * h)
{
    if (h->getIsAlive())
    {
        if (power > h->getWeight())
        {
            power += 10;
            cout << getName() << " hunts his prey " << h->getName() << " and gain " << getPower() << " power" << endl;
        }
        else
        {
            power -= 10;
            cout << h->getName() << " escapes the predator " << getName() << " and " << getName() << " loses " << getPower() << " power" << endl;
        }
    }
}

int Wolf::getPower()
{
    return power;
}

string Wolf::getName()
{
    return name;
}

Tiger::Tiger()
    :
    Carnivore(100, "Tiger")
{}

void Tiger::eat(Herbivore* h)
{
    if (h->getIsAlive())
    {
        if (power > h->getWeight())
        {
            power += 10;
            cout << getName() << " hunts his prey " << h->getName() << " and gain " << getPower() << " power" << endl;
        }
        else
        {
            power -= 10;
            cout << h->getName() << " escapes the predator " << getName() << " and " << getName() << " loses " << getPower() << " power" << endl;
        }
    }
}

int Tiger::getPower()
{
    return power;
}

string Tiger::getName()
{
    return name;
}
