#include <iostream>

using namespace std;

int main()
{

    string name;
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (cin.fail())
    {
        cout << "Invalid Input!";
        return 1;
    }

    cout << "Enter your name:";
    cin >> name;

    if (cin.fail())
    {
        cout << "Invalid Input!";
        return 1;
    }

    if (age >= 18)
    {
        cout << name << " can vote as his age is " << age << " yrs.";
    }
    else
    {
        cout << "You can't vote.";
    }

    cout << endl;
    return 0;
}

/*

Case 1:

 if(condition => boolean){
    ...
    ...
    ...
 }


 Case 2:

 if(condition1 => boolean){
    ...
    ...
    ...
 }

 if(condition2 => boolean){
    ...
    ...
    ...
 }


 Case 3:

 if(condition1 => boolean){
    ...
    ...
    ...
 }

 else if(condition2 => boolean){
    ...
    ...
    ...
 }

 else if(condition3 => boolean){
    ...
    ...
    ...
 }

Case 4:

 if(condition1 => boolean){
    ...
    ...
    ...
 }

 else if(condition2 => boolean){
    ...
    ...
    ...
 }

 else if(condition3 => boolean){
    ...
    ...
    ...
 }

 else {
    ...
    ...
 }

 Case 5:

 if(condition => boolean){
    ...
    ...
    ...
 }

 else {
    ...
    ...
 }


 Case 6: Nested ifs

 if(condition => boolean){
    if(condition => boolean){
    ...
    ...
    ...
    }
 }

 else {
    ...
    ...
 }

*/

/*
    1. If
    2. Switch
    3. For Loop
*/

/*
    1. WAP to take name, age as input and output the value if user is allowed to issue DL.
    2. WAP to create a Electricity Bill Generator, where user will input name, mobile number, bill of month, units consumed (in Integer) and output as bill due.

     0 - 200: Free

    OR

     0 - 400: 7.5 / unit
     401 - 600: 10 / unit
     > 600: 12 / unit
*/

// 450
// 400 * 7.5
// 50 * 10;

// 620
// 400 * 7.5
// 200 * 10
// 20 * 12