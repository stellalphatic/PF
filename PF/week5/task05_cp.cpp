#include <iostream>
#include <cmath>
void rootSolution(float, float, float);
using namespace std;
int main()
{
    float a, b, c;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;
    rootSolution(a, b, c);
}

void rootSolution(float a, float b, float c)
{
    float b_sq = pow(b, 2);
    float discriminant = ((b_sq)-4 * a * c);
    float root1, root2;
    if (discriminant == 0)
    {
        cout << "Solution: x = " << (-b) / (2 * a);
    }
    else if (discriminant > 0)
    {
        root1 = ((-b) + sqrt(discriminant)) / (2 * a);
        root2 = ((-b) - sqrt(discriminant)) / (2 * a);
        cout << "Complex Solutions: x = " << root1 << " and x = " << root2;
    }
    else
    {
        discriminant = -1 * discriminant;
        root1 = ((-b) + sqrt(discriminant)) / (2 * a);
        root2 = ((-b) - sqrt(discriminant)) / (2 * a);
        cout << "Complex Solutions: x = " << (-b / 2 * a) << "+" << (sqrt(discriminant)) / (2 * a) << "i" << " and x = " << (-b / 2 * a) << "+" << (sqrt(discriminant)) / (2 * a) << "i" << endl;
    }
}