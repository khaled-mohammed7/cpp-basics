#include <iostream>
using namespace std;
int main()
{
    double units;
    double bill = 0;

    cout << "enter units \n";
    cin >> units;

    if (units <= 100)

        bill = units * 0.50;
    else if (units <= 300)
        bill = (100 * 0.50) + (units - 100) * 0.75;
    else if (units > 300)
        bill = (100 * 0.50) + (200 * 0.75) + (units - 300) * 1.20;
    
    
    if(bill >= 200) 
        bill = (bill * 0.05)+bill ;


    cout<<"bill = "<<bill<<" $ \n";
    return 0;
}