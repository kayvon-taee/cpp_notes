// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>


// Define enums!
enum cow_purpose {
    dairy,
    meat,
    hide,
    pet
};

struct cow{
    std::string name;
    int age;
    // Each char defines a purpose or action of the cow
    unsigned char purpose;
};
int main(){
    cow my_cow;
    my_cow.age = 5;
    my_cow.name = "Betsy";
    my_cow.purpose = cow_purpose::meat;

    std::cout << my_cow.purpose << std::endl;
    return (0);
}
