#ifndef ANIMAL_FACTORY_H
#define ANIMAL_FACTORY_H

#include "Animal.h"

class AnimalFactory {
	public:
		virtual Animal* createPetAnimal() = 0;
		virtual Animal* createWildAnimal() = 0;
		virtual ~AnimalFactory() = default;
		
};

class DogFactory : public AnimalFactory {
	public:
		Animal* createPetAnimal() override {
			return new Dog;
		}
		
		Animal* createWildAnimal() override {
	        return new Wolf;
	    }
};

class CatFactory : public AnimalFactory {
	public:
		Animal* createPetAnimal() override {
			return new Cat;
		}
		
		Animal* createWildAnimal() override {
	        return new Tiger;
	    }
};

#endif
