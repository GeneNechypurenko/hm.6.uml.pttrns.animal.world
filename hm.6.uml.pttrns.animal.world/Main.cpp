#include <iostream>

#include "AnimalWorld.h"

int main()
{
    AnimalWorld animalWorld;
    Africa africa;
    Eurasia eurasia;
    NorthAmerica northAmerica;

    animalWorld.AddContinent(&africa);
    animalWorld.AddContinent(&northAmerica);
    animalWorld.AddContinent(&eurasia);

    animalWorld.MealsHerbivores();
    animalWorld.NutritionCarnivores();

    return 0;
}