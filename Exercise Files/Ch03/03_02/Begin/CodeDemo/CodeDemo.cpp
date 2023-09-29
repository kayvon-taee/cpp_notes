// Learning C++ 
// Exercise 03_02
// Classes, by Eduardo Corpeño 

#include <iostream>
#include <string>

using namespace std;

enum cow_purpose {dairy, meat, hide, pet};

class cow{
public:
    cow(string name_i, int age_i, unsigned char purpose_i){
        name = name_i;
        age = age_i;
        purpose = purpose_i;
    }
    string get_name(){
        return name;
    }
    int get_age(){
        return age;
    }
    unsigned char get_purpose(){
        return purpose;
    }
    void set_age(int new_age){
        age=new_age;
    }
    void set_name(string new_name){
        name=new_name;
    }
    void set_purpose(unsigned char new_purpose){
        purpose=new_purpose;
    }
private:
    string name;
    int age;
    unsigned char purpose;
};

int main(){
    cow my_cow("Hildy", 7, pet);

    cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose() << " cow." << endl;
    cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << endl;
    my_cow.set_age(10);
    cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << endl;
    my_cow.set_name("Bessie");
    my_cow.set_purpose(cow_purpose::hide);
    cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose() << " cow." << endl;
    return (0);
}
