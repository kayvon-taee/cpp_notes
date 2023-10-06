// Learning C++ 
// Exercise 04_03
// While Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>

using namespace std;

vector<int> numbers = {12,25,31,47,58};

int main(){
    // Iterator pointing to first element of vector
    // Good use case for auto type
    auto ptr = numbers.begin();

    while (ptr != numbers.end()){
        std::cout << *ptr << " ";
        ptr = next(ptr, 1);
    }

    std::cout << endl;

    int i = 0;
    do {
        std::cout << numbers[i] << " ";
        i++;
    } while (i < numbers.size());
    std::cout << endl;
    
    return (0);
}
