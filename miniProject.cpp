#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() = 0;
    virtual void move() = 0;
};

class Dog : public Animal {
public:
    void makeSound() {
        cout << "Dog says: Woof!" << endl;
    }

    void move() {
        cout << "Dog runs on four legs." << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() {
        cout << "Cat says: Meow!" << endl;
    }

    void move() {
        cout << "Cat walks gracefully." << endl;
    }
};

class Bird : public Animal {
public:
    void makeSound() {
        cout << "Bird says: Tweet!" << endl;
    }

    void move() {
        cout << "Bird flies in the sky." << endl;
    }
};

int main() {
    Dog d;
    Cat c;
    Bird b;

    Animal* a1 = &d;
    Animal* a2 = &c;
    Animal* a3 = &b;

    a1->makeSound();
    a1->move();

    a2->makeSound();
    a2->move();

    a3->makeSound();
    a3->move();

    return 0;
}
