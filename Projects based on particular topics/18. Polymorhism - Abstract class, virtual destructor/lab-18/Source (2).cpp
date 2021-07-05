#include <iostream>
#include <string>
using namespace std;
int lions = 0, snakes = 0, birds = 0;
class Animal {
public:
    Animal() {}

    
    virtual void legs(int legnum) {
        cout << "Legs count: " << legnum << endl;
    }

    ~Animal() {
        cout << "Destruction of Animal Class\n" ;
    }
};

class Lion : public Animal {
public:
    Lion() {
        ++lions;
    }

    void legs(int legnum) {
        cout << "Lions have " << legnum << " legs\n";
    }

    ~Lion() {
        cout << "Destruction of Lion Class\n";
        --lions;
    }
};

class Snake : public Animal {
public:
    Snake() {
        ++snakes;
    }

    void legs(int legnum) {
        cout << "Snakes have " << legnum << " legs\n" ;
    }

    ~Snake() {
        cout << "Destruction of snake Class\n" ;
        --snakes;
    }
};

class Bird : public Animal {
public:
    Bird() {
        ++birds;
    }

    void legs(int legnum) {
        cout << "Birds have " << legnum << " legs\n" ;
    }

    ~Bird() {
        cout << "Destruction of bird Class\n" ;
        --birds;
    }
};

void create(string type, string action) {
    if (type == "lion") {
        Lion* lion = new Lion;
        if (action == "delete") {
            delete lion;
            lions--;
        }
        else {
            lion->legs(4);
        }
    }
    else if (type == "snake") {
        Snake* snake = new Snake();
        if (action == "delete") {
            delete snake;
            snakes--;
        }
        else {
            snake->legs(0);
        }
    }
    else if (type == "bird") {
        Bird* bird = new Bird();
        if (action == "delete") {
            delete bird;
                birds--;
        }
        else {
            bird->legs(2);
        }
    }
};
int main(){
    char option;
    int i = 0;
    while (i != 2)
    { cout << "C: Create Object\n" ;
      cout << "D: Delete Object\n" ;
      cout << "E: Exit Application\n" ;
      cin >> option;
        if (option == 'C' || option == 'c') 
        {
            char letter;
            cout << "L: Lion\n" ;
            cout << "S: Snake\n" ;
            cout << "B: Bird\n" ;

            cin >> letter;
           
               
                
                    if (letter == 'L' || letter == 'l')
                    {
                        if (lions == 0)
                            create("lion", "create");
                        
                        else 
                            cout << "we have already a  Lion \n";
                        
                    }
                    else if (letter == 'S' || letter == 's') {
                        if (snakes == 0) 
                            create("snake", "create");
                        
                        else {
                            cout << "we have already a Snake object\n";
                        }

                    }
                    else if (letter == 'B' || letter == 'b')
                    {
                        if (birds == 0) 
                            create("bird", "create");
                        
                        else 
                            cout << "we have already a bird object\n" ;
                        
                    }
                    else if (letter != '[' && letter != ']') 
                        cout << "PLS,BE SURE YOU INPUT THE CORRECT LETTER\n";
                   
                
            } 

        
        else if (option == 'D' || option == 'd') {
            char delating;
                cout << "L: Lion" << endl;
                cout << "S: Snake" << endl;
                cout << "B: Bird" << endl;
                cout << "G: Go back" << endl;
                cin >> delating;
                    if (delating == 'L' || delating == 'l') 
                    {
                        if (lions == 1)
                            create("lion", "delete");
                      
                        else 
                            cout << "DO NOT HAVE EXISTENT OBJECT\n" ;
                        
                    }
                    else if (delating == 'S' || delating == 's') {
                        if (snakes == 1) {
                            create("snake", "delete");
                        }
                        else {
                            cout << "DO NOT HAVE EXISTENT OBJECT\n";
                        }

                    }
                    else if (delating == 'B' || delating == 'b') {
                        if (birds == 1) {
                            create("bird", "delete");
                        }
                        else {
                            cout << "DO NOT HAVE EXISTENT OBJECT\n";
                        }
                    }
                    else if (delating != '[' && delating != ']')
                        cout << "PLS,BE SURE YOU INPUT THE CORRECT LETTER\n";
                }

        
        else if (option == 'E' || option == 'e') {
            cout << "Bye" << endl;
            return 0;
        }
        else 
            cout << "PLS,BE SURE YOU INPUT THE CORRECT LETTER\n";

        

    }
}
/*
Fayyoz Naimov
U1910071*/