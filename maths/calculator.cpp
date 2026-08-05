#include <iostream>
using namespace std;

int sum(int x, int y)
{
    return x + y;
}

int mul(int x, int y)
{
    return x * y;
}

double divide(double x, double y)
{
    if (y == 0)
    {
        cout << "Division by zero is not possible." << endl;
        
    }

    return x / y;
}

int sub(int x, int y)
{
    return x - y;
}

int main()
{
    int x, y;

    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;

    int choice;

    cout << "\nChoose Operation\n";
    cout << "1. Addition\n";
    cout << "2. Multiplication\n";
    cout << "3. Division\n";
    cout << "4. Subtraction\n";
    cout << "Enter your choice: ";

    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Sum of the numbers is = " << sum(x, y);
        break;

    case 2:
        cout << "Product of the numbers is = " << mul(x, y);
        break;

    case 3:
        cout << "Division of the numbers is = " << divide(x, y);
        break;

    case 4:
        cout << "Difference of the numbers is = " << sub(x, y);
        break;

    default:
        cout << "Invalid choice";
    }

    return 0;
}