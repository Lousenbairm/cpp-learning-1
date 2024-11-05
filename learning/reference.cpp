#include <iostream>
#include <string.h>

#define LOG(x) std::cout << x << std::endl;

void Increment(int& value){
    value++;
}

int main() {
    //reference is used to refer to an existing variable, not new variable, not occupying memory

    int a = 5;
    int& ref = a; //alias, not a variable just a reference.

    ref = 2;

    Increment(a); //wont increase if you just pass a, you pass hte value in the memeory address or just pass reference

    LOG(a);

    std::cin.get();
}