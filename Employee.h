#pragma once
#include <iostream>

using namespace std;

struct Employee{
    char secondName[100] = "undefined";
    int bornYear = 0;
    char position[50] = "undefined";
    double salary = 0;
    char education[100] = "undefined";

    void showInfo(){
        cout << "Second name: " << secondName << endl;
        cout << "Born year: " << bornYear << endl;
        cout << "Position: " << position << endl;
        cout << "Salary: " << salary << endl;
        cout << "Education: " << education << endl;
    }
};