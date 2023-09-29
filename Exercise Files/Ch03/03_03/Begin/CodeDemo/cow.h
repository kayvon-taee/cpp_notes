//
// Created by kayvo on 29/09/2023.
//

#ifndef CPP_NOTES_COW_H
#define CPP_NOTES_COW_H // Include guard
#include <string>
enum cow_purpose {dairy, meat, hide, pet};

class cow{
public:
    cow(std::string name_i, int age_i, unsigned char purpose_i);
    std::string get_name();
    int get_age();
    unsigned char get_purpose();
    void set_age(int new_age);
private:
    std::string name;
    int age;
    unsigned char purpose;
};
#endif // CPP_NOTES_COW_H
