#include <iostream>
#include <string.h>

#define LOG(x) std::cout << x << std::endl;

int main() {
    //reference is used to refer to an existing variable, not new variable, not occupying memory

    int a = 5;
    int& ref = a; //alias, not a variable just a reference.

    ref = 2;

    LOG(a);

    std::cin.get();
}