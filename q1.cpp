#include <iostream>
using namespace std;
int main()
{
    string name;
    int age;

    cout << "enter your name" << endl;
    cin >> name;
    cout << "your name" << name << endl;
    cout << "enter your age for dl verification" << endl;
    cin >> age;
    cout << "your age" << age;

    if (age >= 18)
    {
        cout << "you are eligible for gear vehicle" << endl;
    }
    else if (age >= 16)
    {
        cout << "you are eligible for non gear vehicle" << endl;
    }
    else
    {
        cout << "you are not eligible to drive." << endl;
    }

    // if (16 > age)
    // {
    //     cout << "you are eligible for non gear vehicle" << endl;
    // }
    // else if (16 <= age && 18 > age)
    // {
    //     cout << "you are eligible for non gear vehicle" << endl;
    // }
    // else if (18 <= age)
    // {
    //     cout << "you are eligible for gear vehicle" << endl;
    // }

    return 0;
}