// Learning C++ 
// Exercise 06_01
// Opening a text file for reading, by Eduardo Corpeño 

#include <iostream>
#include <string>
// Reads files
#include <fstream>

using namespace std;

// Input stream for file
ifstream inFile;
string str;
int number;
char letter;

int main(){
    inFile.open("people.txt");
    // Check if opening file failed
    if (inFile.fail())
        cout << endl << "File not found!" << endl;

    else{
        // While the file is not at the end eof = End of File
        while (!inFile.eof()){
            // Take one word and parse it as a string. Use cin for whole lines
            getline(inFile, str);
            // Print line on screen
            cout << str << ", ";
            getline(inFile, str);
            // Parse a number string to an integer
            number = stoi(str);
            cout << number << ", ";
            getline(inFile, str);
            // Parse string as character by indexing the string at 0
            letter = str[0];
            cout << letter << endl;
        }
        // Close file once finished
        inFile.close();
    }
    return (0);
}
