#include <iostream>
using namespace std;
int main()
{
    int Km, distance, Fare;

    cout << "enter the Km\n";
    cin >> Km;

    distance = Km * 4;
    Fare = 10 + distance;

    if (Fare > 25)
        cout << " Fare = " << Fare << " EGP \n";
    else
        cout << " Fare = 25 EGP \n";

    return 0;
}