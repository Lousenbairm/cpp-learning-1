//a pointer is just a integer that points to an address in memory

#include <iostream>
#include <string.h>

int main() {
    
    void* ptr = nullptr; //given a memory address of 0, but 0 is not a valid memory address
    // void* ptr = NULL;
    // void* ptr = 0;

    int var = 8;
    int* ptr2 = &var; //&var is the memory address of var

    *ptr2 = 10; //Accessing the data, dereferencing. Type is important here.


    //Allocate memory
    char* buffer = new char[8]; //8 bytes
    memset(buffer, 0, 8); //set all 8 bytes to 0

    delete[] buffer; //delete the data

    char** ptr3 = &buffer; //ptr3 is a pointer to a pointer
    
    std::cin.get();
}