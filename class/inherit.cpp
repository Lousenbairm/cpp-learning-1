#include <iostream>

class Entity {

    public:

        float X, Y;

        void Move(float xa, float ya) {
            X += xa;
            Y += ya;
        }
};

//inheritance
class Player : public Entity {

    public:
        const char* Name;

        void PrintName() {
            std::cout << Name << std::endl;
        }
};

int main() {

    Player player;
    player.PrintName();
    player.Move(5, 5);
    
    std::cin.get();
}