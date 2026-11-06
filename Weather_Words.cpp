#include <iostream>
using namespace std;
int main()
{

    int tempareture;

    cout << " enter the temparature \n";
    cin >> tempareture;

    if (tempareture < 15)
        cout << "cold \n";
    else if (tempareture >= 15 && tempareture <= 30)
        cout << "Warm";
    else
        cout << "Hot";

    return 0 ;    
}