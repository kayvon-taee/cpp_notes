//
// Created by kayvon on 06/10/2023.
//
#include <string>
#include <vector>
#include "records.h"
#include <fstream>

#pragma onces

class FileReader{
private:
    std::string file_name;
    StudentRecords student_records;
    std::ifstream inFile;
    std::string file_line;
    unsigned char ccredits;
    int student_id;
    int course_id;
    char grade;
    std::string student_name;
    std::string course_name;
public:
    FileReader(std::string text_file, StudentRecords SR);
    void add_student_from_file();
    void add_course_from_file();
    void add_grade_from_file();
};
