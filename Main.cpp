#include "AnimalFactory.h"

void testFactory(AnimalFactory* factory) {
    Animal* pet = factory->createPetAnimal();
    pet->describe();
    delete pet;

    Animal* wild = factory->createWildAnimal();
    wild->describe();
    delete wild;
}

int main() {
	AnimalFactory* factory = nullptr;
	
	//Dog
	factory = new DogFactory();
    testFactory(factory);
    delete factory;

	//Cat
    factory = new CatFactory();
    testFactory(factory);
    delete factory;
	
	return 0;
}
