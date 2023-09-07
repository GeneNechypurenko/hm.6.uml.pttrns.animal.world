#include "AnimalWorld.h"
#include "Herbivore.h"
#include "Carnivore.h"

void AnimalWorld::AddContinent(iContinent* continent)
{
    continents.push_back(continent);
}

void AnimalWorld::MealsHerbivores()
{
    for (auto continent : continents)
    {
        Herbivore* herbivore = continent->createHerbivore();

        herbivore->eatGrass();

        delete herbivore;
    }
}

void AnimalWorld::NutritionCarnivores()
{
    for (auto continent : continents)
    {
        Carnivore* carnivore = continent->createCarnivore();
        Herbivore* herbivore = continent->createHerbivore();

        carnivore->eat(herbivore);

        delete carnivore;
        delete herbivore;
    }
}
