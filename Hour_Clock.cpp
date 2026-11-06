#include <iostream>
using namespace std;
int main()
{
    float num, Hour, Minute;

    cout << "enter the Hour \n";
    cin >> Hour;

    cout << "enter the Minute \n";
    cin >> Minute;

    if (Hour <= 12 && Hour >= 0)
        cout << Hour: Minute "AM\nGood morning\n";
    else if (Hour > 12 && Hour <= 23)
        cout << Hour - 12 : Minute "PM\nGood night";

    return 0;
}