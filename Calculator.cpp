#include <iostream>
#include <cmath>
#include <unistd.h> // for sleep function
#include <cstdlib>  // for system("cls")

using namespace std;

int addition(int, int);
int subtraction(int, int);
int multiplication(int, int);
int division(int, int);
double squareroot(int);
int factorial(int);
int exponential(int);
double percentage(int, int);
int combination(int, int);
int permutation(int, int);

void clearScreen() {
    system("cls"); // clear the screen for Windows
}

void wait(int seconds) {
    sleep(seconds); // sleep for the given number of seconds
}

int main()
{
    char cont = 'y';
    while (cont != 'e' && cont != 'E') {
        int op, n1 = 0, n2 = 0;

        clearScreen();
        cout << "(------Calculator---)" << endl;
        cout << "                     " << endl;
        cout << "|-------------------|" << endl;
        cout << "| Choices Available |" << endl;
        cout << "|-------------------|" << endl;

        cout << "                     " << endl;
        cout << " ___________________ " << endl;
        cout << "|                   |" << endl;
        cout << "| 1-Addition        |" << endl;
        cout << "| 2-Subtraction     |" << endl;
        cout << "| 3-Multiplication  |" << endl;
        cout << "| 4-Division        |" << endl;
        cout << "| 5-Square Root     |" << endl;
        cout << "| 6-Factorial       |" << endl;
        cout << "| 7-Exponential     |" << endl;
        cout << "| 8-Percentage      |" << endl;
        cout << "| 9-Combination     |" << endl;
        cout << "| 10-Permutation    |" << endl;
        cout << "|___________________|" << endl;

        cout << "                     " << endl;

        cout << "Enter the operator: ";
        cin >> op;

        switch (op)
        {
        case 1:
        case 2:
        case 3:
        case 4:
        case 8:
        case 9:
        case 10:
            cout << "Enter your First Number: ";
            cin >> n1;
            cout << "Enter your Second Number: ";
            cin >> n2;
            break;
        case 5:
        case 6:
        case 7:
            cout << "Enter your Number: ";
            cin >> n1;
            break;
        default:
            cout << "Invalid Selection" << endl;
            wait(2);
            continue;
        }

        clearScreen(); // clear screen before showing the result

        switch (op)
        {
        case 1:
            cout << "Result: " << addition(n1, n2) << endl;
            break;
        case 2:
            cout << "Result: " << subtraction(n1, n2) << endl;
            break;
        case 3:
            cout << "Result: " << multiplication(n1, n2) << endl;
            break;
        case 4:
            cout << "Result: " << division(n1, n2) << endl;
            break;
        case 5:
            cout << "Result: " << squareroot(n1) << endl;
            break;
        case 6:
            cout << "Result: " << factorial(n1) << endl;
            break;
        case 7:
            cout << "Result: " << exponential(n1) << endl;
            break;
        case 8:
            cout << "Result: " << percentage(n1, n2) << "%" << endl;
            break;
        case 9:
            cout << "Result: " << combination(n1, n2) << endl;
            break;
        case 10:
            cout << "Result: " << permutation(n1, n2) << endl;
            break;
        default:
            cout << "Invalid Selection" << endl;
            break;
        }

        wait(3); // wait for 3 seconds before asking to continue

        cout << "Do you want to perform another calculation? (e/E to exit, any other key to continue): ";
        cin >> cont;
    }

    clearScreen();
    cout << "Thank you for using the calculator!" << endl;
    return 0;
}

int addition(int n1, int n2)
{
    return n1 + n2;
}

int subtraction(int n1, int n2)
{
    return n1 - n2;
}

int multiplication(int n1, int n2)
{
    return n1 * n2;
}

int division(int n1, int n2)
{
    if (n2 == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    int div = n1 / n2;
    char y;
    cout << "Do you want the remainder? Press (Y/y) if yes: ";
    cin >> y;
    if (y == 'Y' || y == 'y')
    {
        int r = n1 % n2;
        cout << "Remainder is: " << r << endl;
    }
    return div;
}

double squareroot(int n1)
{
    return sqrt(n1);
}

int factorial(int n1)
{
    int fac = 1;
    if (n1 == 0 || n1 == 1)
    {
        return 1;
    }
    else if (n1 > 1)
    {
        for (int i = 1; i <= n1; i++)
        {
            fac = fac * i;
        }
    }
    return fac;
}

int exponential(int n1)
{
    int p;
    int r = 1;
    cout << "Enter the power: ";
    cin >> p;
    for (int i = 1; i <= p; i++)
    {
        r = r * n1;
    }
    return r;
}

double percentage(int n1, int n2)
{
    return ((double)n1 / n2) * 100;
}

int combination(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int permutation(int n, int r)
{
    return factorial(n) / factorial(n - r);
}
