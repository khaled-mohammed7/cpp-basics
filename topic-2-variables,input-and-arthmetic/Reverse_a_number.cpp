#include <iostream>
using namespace std;
int main()
{
    int a;

    cout << "enter tht number \n ";
    cin >> a;

    int d1 = a % 10;
    int d2 = (a / 10) % 10;
    int d3 = (a / 100) % 10;
    int d4 = a / 1000;

    int rev = d1 * 1000 + d2 * 100 + d3 * 10 + d4;

    int sum = d1 + d2 + d3 + d4;

    cout << "reverse : " << rev << "\n";
    cout << "sum = " << sum << "\n";

    return 0;
}