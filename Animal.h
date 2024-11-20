#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

using namespace std;

class Animal {
	public:
		virtual void describe() = 0;
		virtual ~Animal() = default;
};

class Dog : public Animal {
	public:
		void describe() override {
			cout << "I am Dog. Woof!" << endl;
		}
};

class Wolf : public Animal {
	public:
	    void describe() override {
	        std::cout << "I am Wolf. Howl!" << std::endl;
	    }
};

class Cat : public Animal {
	public:
		void describe() override {
			cout << "I am Cat. Meow!" << endl;
		}	
};

class Tiger : public Animal {
	public:
	    void describe() override {
	        std::cout << "I am Tiger. Roar!" << std::endl;
	    }
};

#endif
