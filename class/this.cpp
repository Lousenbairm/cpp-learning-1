#include <iostream>
#include <string>

void PrintEntity(Entity* e);

class Entity {

    public:
        int x, y;

        Entity(int x, int y) {

            Entity* e = this;
            e->x = x;

            this->y = y;

            PrintEntity(this);
        }

        int GetX const {

            const Entity*e = this;

            return x;
        }
};

void PrintEntity(Entity* e) {
    //Print something
}


int main() {

    std::cin.get();
}