#include <iostream>

using namespace std;

/*

Syntax:

condition ? then : else;

*/

int main()
{
    int marks = 77;
    // char grade;

    // if (marks >= 90 && marks <= 100)
    // {
    //     grade = 'A';
    // }
    // else
    // {
    //     grade = "F";
    // }

    // marks >= 90 &&marks <= 100 ? grade = 'A' : grade = 'F';

    string grade = marks >= 90   ? "A"
                   : marks >= 80 ? "B"
                   : marks >= 65 ? "C"
                   : marks >= 40 ? "D"
                   : marks >= 0  ? "F"
                                 : "Invalid grade";

    cout << "Grade: " << grade;

    cout << endl;

    return 0;
};
