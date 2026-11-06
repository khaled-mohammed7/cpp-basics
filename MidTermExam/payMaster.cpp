#include <iostream>
using namespace std;
int main()
{
    int Work_years;
    double total_sales, base_salary;
    double bouns = 0;
    double pay_check = 0;
    double additional_bonus = 0;

    cout << "enter base_salary \n";
    cin >> base_salary;

    cout << "enter total_sales \n";
    cin >> total_sales;

    cout << "enter Work_years \n";
    cin >> Work_years;

    if (Work_years <= 5)
        bouns = Work_years * 10;
    else
        bouns = Work_years * 20;

    if (total_sales >= 5000 && total_sales < 10000)
        additional_bonus = total_sales * 0.03;
    else if (total_sales >= 10000)
        additional_bonus = total_sales * 0.06;
    else
        additional_bonus = 0;

    pay_check = base_salary + bouns + additional_bonus;
    cout << "pay_check = " << pay_check << "$ \n";

    return 0;
}