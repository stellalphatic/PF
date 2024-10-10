#include <iostream>
using namespace std;
float perimeter(char shape, float side)
{
    if (shape == 's')
        return 4 * side;
    else if (shape == 'c')
        return 6.8 * side;
    else if (shape == 't')
        return 3 * side;
    else if (shape == 'h')
        return 6 * side;
}
int main()
{
    char shape;
    float value;
    cout << "Enter the shape(s for sq. , c for circle,t for triangle,h for hexagon): ";
    cin >> shape;
    cout << "Enter the value: ";
    cin >> value;
    cout << perimeter(shape, value);
    return 0;
}