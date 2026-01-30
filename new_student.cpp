//Peter Xie Winter 2026 EECS 402 Discussion 4
//Implement the TODOs

#include <iostream>
using namespace std;

const int NUM_STUDENTS = 3;
const int NUM_QUIZZES = 3;

class Student {
private:
    int graduationYear;
    double quizGrades[NUM_QUIZZES];

public:
    Student();
    Student(int year, double grades[]);

    int getGraduationYear() const;
    void setGraduationYear(int year);

    double getAverage() const;
};

class EECS {
private:
    Student students[NUM_STUDENTS];

public:
    EECS(Student s[]);
    void printStudents() const;
};

Student::Student() {
    // TODO: default constructor, set everything to 0
}

Student::Student(int year, double grades[]) {
    // TODO: custom constructor
}

int Student::getGraduationYear() const {
    // TODO: get the graduation year
    return 0;
}

void Student::setGraduationYear(int year) {
    // TODO: set the graduation year
}

double Student::getAverage() const {
    // TODO: compute the average score for this student
    return 0.0;
}

EECS::EECS(Student s[]) {
    // TODO: EECS constructor
}

void EECS::printStudents() const {
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << "Student " << i << endl;
        cout << "Graduation Year: "
            << students[i].getGraduationYear() << endl;
        cout << "Average Score: "
            << students[i].getAverage() << endl << endl;
    }
}

int main() {
    double g1[NUM_QUIZZES] = {90, 95, 92};
    double g2[NUM_QUIZZES] = {60, 75.5, 56.0};
    double g3[NUM_QUIZZES] = {88, 99, 84.5};

    Student s[NUM_STUDENTS] = {
        Student(2035, g1),
        Student(2036, g2),
        Student(2047, g3)
    };

    EECS course(s);
    course.printStudents();

    return 0;
}
