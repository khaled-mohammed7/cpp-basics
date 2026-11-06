#include <iostream>
using namespace std;
int main()
{
    int number;

    cout << "enter the number\n";
    cin >> number;

    if (number % 7 == 0)
        cout << number << " is a multipie of 7" ;
    else
        cout << number << " is not a multipie of 7" ;

    return 0 ;
}