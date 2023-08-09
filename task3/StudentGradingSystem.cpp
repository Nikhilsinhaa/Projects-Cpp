#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // Required for min_element and max_element

using namespace std;

struct Student {
    string name;
    double grade;
};

int main() {
    vector<Student> students;
    int numStudents;
    
    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; i++) {
        Student newStudent;
        
        cout << "Enter name of student " << i + 1 << ": ";
        cin.ignore();
        getline(cin, newStudent.name);

        cout << "Enter grade of student " << i + 1 << ": ";
        cin >> newStudent.grade;

        students.push_back(newStudent);
    }

    // Calculate the average grade
    double sum = 0;
    for (const auto& student : students) {
        sum += student.grade;
    }
    double averageGrade = sum / students.size();

    // Find highest and lowest grades
    auto highestGradeStudent = max_element(students.begin(), students.end(), 
        [](const Student& s1, const Student& s2) { return s1.grade < s2.grade; });
    auto lowestGradeStudent = min_element(students.begin(), students.end(), 
        [](const Student& s1, const Student& s2) { return s1.grade < s2.grade; });


    cout << "\nAverage Grade: " << averageGrade << endl;
    cout << "Highest Grade: " << highestGradeStudent->grade << " (Name: " << highestGradeStudent->name << ")" << endl;
    cout << "Lowest Grade: " << lowestGradeStudent->grade << " (Name: " << lowestGradeStudent->name << ")" << endl;

    return 0;
}
