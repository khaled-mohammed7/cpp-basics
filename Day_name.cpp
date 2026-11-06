#include <iostream>
using namespace std;
int main()
{
    int number;

    cout << "enter the number \n";
    cin >> number;

    if (number == 1)
        cout << "Sunday \n";
    else if (number == 2)
        cout << "Monday \n";
    else if (number == 3)
        cout << "Tusday \n";
    else if (number == 4)
        cout << "Wednesday \n";
    else if (number == 5)
        cout << "Thursday \n";
    else if (number == 6)
        cout << "Friday \n";
    else if (number == 7)
        cout << "saturday \n";
    else
        cout << "invalid day \n";

    return 0;
}