//
// Created by kayvon on 06/10/2023.
//

#include "records.h"
#include <iostream>
#include "FileReader.h"

FileReader::FileReader(std::string text_file, StudentRecords SR) {
    file_name = text_file;
    student_records = SR;
}

void FileReader::add_course_from_file() {
    inFile.open(file_name);
    if (inFile.fail()) {
        std::cout << std::endl << "File not found!" << std::endl;
        return;
    }

    while (std::getline(inFile, file_line)) {
        course_id = std::stoi(file_line);
        std::getline(inFile, file_line);
        course_name = file_line;
        std::getline(inFile, file_line);
        ccredits = file_line[0];
        student_records.add_course(course_id, course_name, ccredits);
    }

    inFile.close();
}

void FileReader::add_grade_from_file() {
    inFile.open(file_name);
    if (inFile.fail()) {
        std::cout << std::endl << "File not found!" << std::endl;
        return;
    }

    while (std::getline(inFile, file_line)) {
        student_id = std::stoi(file_line);
        std::getline(inFile, file_line);
        course_id = std::stoi(file_line);
        std::getline(inFile, file_line);
        grade = file_line[0];
        student_records.add_grade(student_id, course_id, grade);
    }

    inFile.close();
}

void FileReader::add_student_from_file() {
    inFile.open(file_name);
    if (inFile.fail())
        std::cout << std::endl << "File not found!" << std::endl;

    while (std::getline(inFile, file_line)) {
        student_id = std::stoi(file_line);
        std::getline(inFile, file_line);
        student_name = file_line;
        student_records.add_student(student_id, student_name);
    }

    inFile.close();
}
