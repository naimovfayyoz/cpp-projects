#include <iostream>

using namespace std;

class Animal {
protected:
    int legs;
public:
    Animal(int legs) {
        this->legs = legs;
    }

    virtual void feed() {
        cout << "Eats Some Food\n";
    }
};

class Lion : public Animal {
public:
    Lion(int legs) : Animal(legs) {}

    void feed() {
        cout << "Lions: eat meet\n";
        cout << "Number of legs = " << legs << endl;

    }
};

class Snake : public Animal {
public:
    Snake(int legs ) : Animal(legs) {}

    void feed() {
        cout << "Snakes: eat rats\n";
        cout << "Number of legs = " << legs << endl;

    }
};

class Bird : public Animal {
public:
    Bird(int legs) : Animal(legs) {}

    void feed() {

        cout << "Birds: eat insects\n";
        cout << "Number of legs = " << legs << endl;
    }
};
int main() {
    int a = 1;
    Animal* data;
    Bird bird(2);
    Snake snake(0);
    Lion lion(4);
    
    char letter;
    while (a != 0) {


        cout << "Enter L for lion\n";
        cout << "Enter S for Snake\n";
        cout << "Enter B fro Bird\n";
        cout << "Enter E to exit\n";
        cin >> letter;
        if (letter == 'L' || letter == 'l') {
            data = &lion;
            data->feed();


        }
        else if (letter == 'S' || letter == 's') {
            data = &snake;
            data->feed();

        }
        else if (letter == 'B' || letter == 'b') {
            data = &bird;
            data->feed();

        }
        else if (letter == 'E' || letter == 'e') {
            return 0;
        }
        else {
            cout << "Error check the letter\n";

        }

    }

}
/*
Name:Fayyoz Naimov
ID:U1910071*/