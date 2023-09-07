#pragma once

#include "Herbivore.h"
#include "Carnivore.h"

class iContinent abstract
{
public:
	virtual Herbivore* createHerbivore() abstract;
	virtual Carnivore* createCarnivore() abstract;
};

class Africa : public iContinent
{
public:
    Herbivore* createHerbivore() override;
    Carnivore* createCarnivore() override;
};

class NorthAmerica : public iContinent
{
public:
    Herbivore* createHerbivore() override;
    Carnivore* createCarnivore() override;
};

class Eurasia : public iContinent
{
public:
    Herbivore* createHerbivore() override;
    Carnivore* createCarnivore() override;
};