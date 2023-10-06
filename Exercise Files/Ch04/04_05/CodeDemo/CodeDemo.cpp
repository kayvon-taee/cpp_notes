// Learning C++ 
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

using namespace std;

vector<Student> students = {Student(1,"George P. Burdell"),
							Student(2,"Nancy Rhodes")};

vector<Course> courses = {Course(1,"Algebra",5),
						  Course(2,"Physics",4),
						  Course(3,"English",3),
						  Course(4,"Economics",4)};

vector<Grade> grades = {Grade(1,1,'B'),	Grade(1,2,'A'),	Grade(1,3,'C'),
						Grade(2,1,'A'),	Grade(2,2,'A'), Grade(2,4,'B')};

float total_points = 0.0f;
float total_credits = 0.0f;
float GPA = 0.0f;
int id;


int main(){
	cout << "Enter a student ID: ";
	cin >> id;

	// Calculate the GPA for the selected student.
	// Write your code here
    for (int i = 0; i < grades.size(); i++) {
        if (grades[i].get_student_id() == id) {
            switch (grades[i].get_grade()) {
                case 'A':
                    total_points += 4.0f;
                    break;
                case 'B':
                    total_points += 3.0f;
                    break;
                case 'C':
                    total_points += 2.0f;
                    break;
                case 'D':
                    total_points += 1.0f;
                    break;
                default:
                    total_points += 0.0f;
            }

            int course_id = grades[i].get_course_id();
            for (int j = 0; j < courses.size(); j++) {
                if (course_id == courses[j].get_id()) {
                    total_credits += courses[j].get_credits();
                }
            }
        }
    }

    cout << total_points << endl;
    cout << total_credits << endl;

    GPA = total_points / total_credits;




	string student_str;

    for (int i = 0; i < students.size(); i++) {
        if (students[i].get_id() == id)
            student_str = students[i].get_name();
    }

	cout << "The GPA for " << student_str << " is " << GPA << endl;
	return (0);
}




