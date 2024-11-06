#include <iostream>

class Entity
{

public:
    float X, Y;

    //contructor - initialise x and y, need to have the same name as class
    Entity() {
    
    }

    Entity(float x, float y){
        X = x;
        Y = y;
    } 

    //destuctor
    ~Entity() {
        std::cout << "Destroy Entity" << std::endl;
    }

    void Print() {
        std::cout << X << ", " << Y << std::endl; 
    }
};


void Function() {

    Entity e(10, 5);
    std::cout << e.X << e.Y << std::endl;
    e.Print(); //initiatlise x and y, it will print leftover from memory 
}

int main()
{
    Function();
    std::cin.get();
}