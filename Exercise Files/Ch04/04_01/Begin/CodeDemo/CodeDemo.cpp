// Learning C++ 
// Exercise 04_01
// If Statements, by Eduardo Corpeño 

#include <iostream>

int a = 1023;
bool flag = false;
char letter = 'd';

int main(){
    if(a>1000)
        std::cout << "Warning: a is over 1000." << std::endl;

    if (a % 2) {
        std::cout << "a is odd" << std::endl;
    } else {
        std::cout << "a is even" << std::endl;
    }

    std::cout << "The letter " << letter << " is ";
    if ((char) tolower(letter) !='a' && (char) tolower(letter) != 'e' && (char) tolower(letter) != 'i' && (char) tolower(letter) != 'o' && (char) tolower(letter) != 'u')
        std::cout << "not ";


    if (flag)
        std::cout << "The flag is true!" << std::endl;

    return (0);
}
