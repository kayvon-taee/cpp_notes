// Learning C++ 
// Exercise 06_01
// Opening a text file for reading, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

ofstream outFile;
float a = 4.303f, b = 5.392f;

int main(){
    outFile.open("calculations.txt");
    if (outFile.fail())
        cout << endl << "Couldn't open the file!" << endl;
    else{
        // Write values to file
        // All objects converted to strings
        outFile << "a = " << a << endl;
        outFile << "b = " << b << endl;
        outFile << "a + b = " << a + b << endl;
        outFile << "a * b = " << a * b << endl;
        outFile.close();
        cout << "File written successfully!" << endl;
    }
    return (0);
}
