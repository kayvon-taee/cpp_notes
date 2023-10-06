// Learning C++ 
// Challenge 06_03
// Upgrade to work with files, by Eduardo Corpeño 

#include <iostream>
#include "records.h"
#include "FileReader.h"

using namespace std;

void initialize();


StudentRecords SR;
int id;
int main(){
	initialize();

	cout << "Enter a student ID: ";
	cin >> id;

	SR.report_card(id);
	
	return (0);
}

void initialize(){
    FileReader read_students_text_file("students.txt",SR);
    read_students_text_file.add_student_from_file();
    FileReader read_courses_text_file("courses.txt",SR);
    read_courses_text_file.add_course_from_file();
    FileReader read_grades_text_file("grades.txt",SR);
    read_grades_text_file.add_grade_from_file();
}