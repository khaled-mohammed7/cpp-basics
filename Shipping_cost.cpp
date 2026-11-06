#include <iostream>
using namespace std;
int main()
{

    int kg, sum;

    cout << "enter the kg \n";
    cin >> kg;

    sum = 80 + ((kg - 10) * 10);

    if (kg >= 1 && kg <= 5)
        cout << "shipping: 50 EGP \n";
    else if (kg >= 5 && kg <= 10)
        cout << "shopping: 80 EGP \n";
    else if (kg > 10)
        cout << "shopping:" << sum << "\n";
    else
        cout << "invalid weight";

    return 0;
}