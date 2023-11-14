#include<iostream>
using namespace std;

class Animal{
	public:
		virtual void speak()=0;
};
class Dog:public Animal{
	public:
		void speak()
		{
			cout<<"Woof"<<endl;
		}
	
};
class Cat:public Animal{
	public:
		void speak()
		{
			cout<<"Meow"<<endl;
		}
	
};
class Color{
	public:
		virtual void fill()=0;
};
class Red:public Color{
	public:
		void fill()
		{
			cout<<"Filled with Red"<<endl;
		}
	
};
class Blue:public Color{
	public:
		void fill()
		{
			cout<<"Filled with Blue"<<endl;
		}
	
};

class AbstractFactory{
	public:
		virtual Animal* createAnimal()=0;
		virtual Color* createColor()=0;
};
class WildFactory: public AbstractFactory{
	public:
		Animal* createAnimal() override{
			Animal *cat = new Cat();
			return cat;
		}
		Color* createColor() override{
			Color *red = new Red();
			return red;
		}
};
class PetFactory: public AbstractFactory{
	public:
		Animal *createAnimal() override{
			Animal *dog = new Dog();
			return dog;
		}
		Color *createColor() override{
			Color *blue = new Blue();
			return blue;
		}
};
void getPetAndColor(AbstractFactory* factory) {
    Animal* animal = factory->createAnimal();
    Color* color = factory->createColor();

    animal->speak();
    color->fill();

    // Cleanup
    delete animal;
    delete color;
}
int main() {
    // Using PetFactory
    AbstractFactory* petFactory = new PetFactory();
    getPetAndColor(petFactory);

    // Using WildFactory
    AbstractFactory* wildFactory = new WildFactory();
    getPetAndColor(wildFactory);

    // Cleanup
    delete petFactory;
    delete wildFactory;

    return 0;
}
