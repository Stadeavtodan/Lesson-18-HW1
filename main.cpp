#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
    int n = 5;
    Employee* arr = new Employee[n]{
            {"Pupkin", 2003, "Manager", 3570, "high education"},
            {"Shevchenko", 1897, "Writer", 1320, "high education"},
            {"Pupkin_little", 2004, "Helper", 1940, "middle education"},
            {"Felixov", 1987, "Programmer", 2910, "no education"},
            {"Felixovich", 1999, "Manager", 3290, "low education"}
    };
    int yearCount = 0;
    for(int i = 0; i < n; i++){
        if(2025 - arr[i].bornYear > 60){
            arr[i].showInfo();
            yearCount++;
        }
    }
    cout << "Quantity: " << yearCount << endl;
    cout << "====================================\n";

}