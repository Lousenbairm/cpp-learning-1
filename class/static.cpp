#include <iostream>


struct Entity {
    static int x, y; //theres only one and only one x and y 

    void Print() {
        std::cout << x << ", " << y << std::endl;
    }
};


int Entity::x;
int Entity::y;
int main() {

    Entity e;
    Entity::y = 3; 
    Entity::x = 5;

    Entity e1;
    Entity::y = 11; 
    Entity::x = 12;

    e.Print();
    e1.Print();

    std::cin.get();
}