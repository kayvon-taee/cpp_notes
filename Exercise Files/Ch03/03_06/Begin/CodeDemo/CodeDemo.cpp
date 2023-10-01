// Learning C++ 
// Exercise 03_05
// Vectors, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include "cow.h"
#include <vector>


// Vectors are a special type of container class that dynamic size containers
// Memory is managed for you, but if the container has objects that require manual memory management
// you need to handle it yourself
// It's a generic container class so can take on many types
// Built in from STL library which comes with lots of useful methods
// Vectors have a start and end points, and data is always added at the end of the vector
// This guarantees vectors will retain ordering
std::vector<int> primes;

int main(){
    // You can insert elements at the front of the vector, but it requires the elements to be reallocated
    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(5);
    primes.push_back(7);
    primes.push_back(11);
    std::cout << "The vector has " << primes.size() << " elements" << std::endl;
    // Indexing is similar to normal arrays
    std::cout << "The element at index 2 is " << primes[2] << std::endl;
    // Values can be easily reassigned
    primes[2] = 13;
    std::cout << "The element at index 2 is " << primes[2] << std::endl;
    std::cout << std::endl;

    // Now examples with the cow object
    std::vector<cow> cattle;

    cattle.push_back(cow("Betty", 6, meat));
    cattle.push_back(cow("Libby", 4, hide));
    cattle.push_back(cow("Trudy", 5, pet));
    cattle.push_back(cow("Betsy", 2, dairy));

    // Vectors support iterators which are special objects that allow you traverse containers
    // Similar semantics to pointers - pointers are a type of iterator

    // .begin() method fetches first element of vector as an iterator so use pointer syntax to call methods
    std::cout << "The first cow is " << cattle.begin()->get_age() << std::endl;
    // No pointer semantic here as we are directly calling the value - it's not an iterator
    std::cout << "At index 1 we have " << cattle[1].get_name() << std::endl;
    // prev() guarantees going n number of positions from the end. Here it's 2
    std::cout << "Next to last is " << std::prev(cattle.end(), 2)->get_name() << std::endl;
    // Below is similar to negative indexing. .end() calls the null pointer, so we use the number - 1 to get last element.
    std::cout << "The last cow is " << (cattle.end() - 2)->get_name() << std::endl;
    return (0);
}
