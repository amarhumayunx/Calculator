#include <iostream>

using namespace std;

void addition();
void subtraction();
void multiplication();
void division();
void power();
void square();
void mod();
void expression();

int main()
{
    int choice = 0;
    int runtime = 0;
    do
    {
        cout << "-------------------------\n";
        cout << "|       Menu For Calculator       |\n";
        cout << "-------------------------\n";
        
        cout << "1. Add Numbers\n";
        cout << "2. Subtract Numbers\n";
        cout << "3. Multiply Numbers\n";
        cout << "4. Take Modulus\n";
        cout << "5. Expression Evaluation\n";
        cout << "6. Find Power of a Number\n";
        cout << "7. Find Square of a Number\n";
        cout << "8. Divide Numbers\n";
        cout << "9. Exit\n";
        cout << "Please enter an integer (1-9): ";
        cin >> choice;

        if (choice >= 1 && choice <= 9)
        {
            switch (choice)
            {
                case 1:
                    addition();
                    break;
                case 2:
                    subtraction();
                    break;
                case 3:
                    multiplication();
                    break;
                case 4:
                    mod();
                    break;
                case 5:
                    expression();
                    break;
                case 6:
                    power();
                    break;
                case 7:
                    square();
                    break;
                case 8:
                    division();
                    break;
                case 9:
                    cout << "Thanks for using the calculator!\n";
                    break;
                default:
                    break;
            }
        }
        else
        {
            cout << "Invalid choice. Please select a valid option.\n";
            continue;
        }
        
        cout << "\nRuntime of code is: " << ++runtime << " times.\n";
    } while (choice != 9);

    return 0;
}

void addition()
{
    int x, y;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;

    int sum = x + y;
    cout << "Sum of the values: " << sum << "\n";
}

void subtraction()
{
    int x, y;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;

    int result = x - y;
    cout << "Result of subtraction: " << result << "\n";
}

void multiplication()
{
    int x, y;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;

    int result = x * y;
    cout << "Result of multiplication: " << result << "\n";
}

void division()
{
    int x, y;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;

    if (y == 0)
    {
        cout << "Error: Division by zero is not allowed.\n";
        return;
    }

    float result = static_cast<float>(x) / y;
    cout << "Result of division: " << result << "\n";
}

void power()
{
    int base, exponent;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    cout << base << " raised to the power of " << exponent << " is: " << result << "\n";
}

void square()
{
    int x;
    cout << "Enter the number: ";
    cin >> x;

    int result = x * x;
    cout << "The square of " << x << " is: " << result << "\n";
}

void mod()
{
    int x, y;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;

    int result = x % y;
    cout << "The modulus of " << x << " and " << y << " is: " << result << "\n";
}

void expression()
{
    int choice = 0;
    do
    {
        cout << "\n-------------------------\n";
        cout << "|     Expression Menu    |\n";
        cout << "-------------------------\n";
        cout << "1. Evaluate with operators\n";
        cout << "2. Evaluate without operators\n";
        cout << "3. Return to main menu\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                // Evaluate expressions with operators
                cout << "Enter the expression (e.g. 3 + 4):\n";
                char op;
                int num1, num2;
                cin >> num1 >> op >> num2;

                switch (op)
                {
                    case '+':
                        cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
                        break;
                    case '-':
                        cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
                        break;
                    case '*':
                        cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
                        break;
                    case '/':
                        if (num2 == 0)
                            cout << "Error: Division by zero is not allowed.\n";
                        else
                            cout << num1 << " / " << num2 << " = " << static_cast<float>(num1) / num2 << "\n";
                        break;
                    case '%':
                        cout << num1 << " % " << num2 << " = " << num1 % num2 << "\n";
                        break;
                    case '^':
                        int result = 1;
                        for (int i = 0; i < num2; i++)
                            result *= num1;
                        cout << num1 << " ^ " << num2 << " = " << result << "\n";
                        break;
                    default:
                        cout << "Invalid operator.\n";
                        break;
                }
                break;

            case 2:
                // Evaluate expressions without operators
                cout << "Addition:\n";
                addition();

                cout << "Subtraction:\n";
                subtraction();

                cout << "Multiplication:\n";
                multiplication();

                cout << "Division:\n";
                division();

                cout << "Modulus:\n";
                mod();

                cout << "Power:\n";
                power();
                break;

            case 3:
                cout << "Returning to the main menu...\n";
                break;

            default:
                cout << "Invalid choice. Please choose again.\n";
                break;
        }
    } while (choice != 3);
}