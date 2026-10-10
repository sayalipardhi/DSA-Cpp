
#include <iostream>
using namespace std;

int main() {
    int age = 20;
    int marks = 85;
    float bonus = 5.5;
    char grade = 'A';

    // Arithmetic operator
    int total = marks + 10;

    // Typecasting
    float average = (float)total / 2;

    // Assignment operator
    age += 1;

    // Relational and logical operators
    bool passed = marks >= 40;
    bool eligible = age >= 18 && passed;

    cout << "Age = " << age << endl;
    cout << "Marks = " << marks << endl;
    cout << "Bonus = " << bonus << endl;
    cout << "Grade = " << grade << endl;
    cout << "Total Marks = " << total << endl;
    cout << "Average = " << average << endl;
    cout << "Passed = " << passed << endl;
    cout << "Eligible = " << eligible << endl;

    return 0;
}
