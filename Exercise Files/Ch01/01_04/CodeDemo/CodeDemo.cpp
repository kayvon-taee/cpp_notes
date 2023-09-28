// Learning C++ 
// Challenge 01_04
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

using namespace std;

int main(){
	string str;
    cout << "Please enter your name: ";
	cin >> str;
    cout << "Hello, " << str << "! How are you today?";
	return(0);
}
