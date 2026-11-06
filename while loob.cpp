#include <iostream>

using namespace std;

int main()
{
    int counter = 1;
    int grade = 0, sum = 0;

    while (counter <= 6)
    {
        cout << " enter grade for student no: " << counter << "\n";
        cin >> grade;
        sum += grade;

        counter++;
    }
    cout << "Average grade is: " << sum / 6 << "\n";
}
