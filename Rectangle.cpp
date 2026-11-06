#include <iostream>
using namespace std;
int main()
{
    int Width, Height, area, perimeter;

    cout << "Enter the Width \n";
    cin >> Width;

    cout << "Enter the Height\n";
    cin >> Height;

    area = Width * Height;
    perimeter = (Width + Height) * 2;

    cout << " area = " << area << "\nperimeter = " << perimeter << " \n";

    return 0;
}