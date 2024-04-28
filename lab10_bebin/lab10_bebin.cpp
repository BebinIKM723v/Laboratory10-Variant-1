#include <iostream>
#include <string>
#include "windows.h"

using namespace std;

struct Student {
    string surname;
    int id;
    bool receivesScholarship;
    double averageGrade;
};

void generateStudentsData(Student students[], int size) {
    students[0] = { "Кравценко", 5, true, 99 };
    students[1] = { "Петренко", 8, false, 68 };
    students[2] = { "Цевков", 9, true, 89 };
    students[3] = { "Тарасенко", 2, false, 62 };
    students[4] = { "Шевченко", 3, true, 88 };
}

void printAllStudents(Student students[], int size) {
    cout << "Повний список студентів:\n";
    for (int i = 0; i < size; i++) {
        cout << "Прізвище: " << students[i].surname
            << ", номер: " << students[i].id
            << ", Середній бал за сесiю: " << students[i].averageGrade << endl;
    }
}

void printScholarshipStudents(Student students[], int size) {
    cout << "\nСписок студентів, які отримують стипендію:\n";
    for (int i = 0; i < size; i++) {
        if (students[i].receivesScholarship) {
            cout << "Прізвище: " << students[i].surname
                << ", номер: " << students[i].id
                << ", Середній бал за сесiю: " << students[i].averageGrade << endl;
        }
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Ukrainian");

    const int numStudents = 5;
    Student students[numStudents];

    generateStudentsData(students, numStudents);
    printAllStudents(students, numStudents);
    printScholarshipStudents(students, numStudents);

    return 0;
}