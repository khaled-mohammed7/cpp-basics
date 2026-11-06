#include <iostream>
using namespace std;
int main()
{
    float Celsius, Fahrenheit;

    cout << "enter the dagree Calsius \n";
    cin >> Celsius;

    Fahrenheit = Celsius*9/ 5 + 32 ;

    cout << "Fahrenheit = " << Fahrenheit << "F" "\n";

    return 0;
}