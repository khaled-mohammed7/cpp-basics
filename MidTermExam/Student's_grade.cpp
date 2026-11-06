#include <iostream>
using namespace std;
int main()
{
    int grade;

    cout << "enter the grade \n";
    cin >> grade;

    if (grade >= 90)
        cout << "A \n";
    else if (grade >= 80 && grade < 90)
        cout << "B \n";
    else if (grade >= 70 && grade < 80)
        cout << "C \n";
    else if (grade >= 60 && grade < 70)
        cout << "D \n";
    else
        cout << "F \n";
        
    return 0;
}