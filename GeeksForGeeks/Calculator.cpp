#include <bits/stdc++.h>   
using namespace std; // Use the standard namespace

class calculator {    // Define a class named "calculator"
public:               // Public access specifier
    int a;            // Declare integer variable a
    int b;            // Declare integer variable b

    //Constructor
    calculator() {    // Constructor for the calculator class
        a = 0;        // Initialize variable a to 0
        b = 0;        // Initialize variable b to 0
    }

    // Methods to set values of a and b for different operations
    void setadd(int x, int y) {
        a = x;
        b = y;
    }

    void setsub(int x, int y) {
        a = x;
        b = y;
    }

    void setmulti(int x, int y) {
        a = x;
        b = y;
    }

    void setdiv(int x, int y) {
        a = x;
        b = y;
    }

    // Methods to get results of different operations
    int getadd() {
        return a + b;
    }

    int getsub() {
        return a - b;
    }

    int getmulti() {
        return a * b;
    }

    int getdiv() {
        return a / b;
    }
};

int main() {
    calculator cal;    // Create an instance of the calculator class

    int x, y;          // Declare variables x and y to store numbers
    char choice;       // Declare variable choice to store operation choice

    // Display instructions for the user
    cout << "Enter what you want to calculate: " << endl;
    cout << "For Addition press + " << endl << "For Subtraction press - " << endl;
    cout << "For multiplication press * " << endl << "For Division press / " << endl;

    cin >> choice;     // Read user's choice

    // Using switch case to perform operations based on user's choice
    switch (choice) {
    case '+':
        cout << "Enter two numbers: " << endl;
        cin >> x >> y;
        cal.setadd(x, y);
        cout << "The Addition is: " << cal.getadd() << endl;
        break;
    case '-':
        cout << "Enter two numbers: " << endl;
        cin >> x >> y;
        cal.setsub(x, y);
        cout << "The subtraction is: " << cal.getsub() << endl;
        break;
    case '*':
        cout << "Enter two numbers: " << endl;
        cin >> x >> y;
        cal.setmulti(x, y);
        cout << "The multiplication is: " << cal.getmulti() << endl;
        break;
    case '/':
        cout << "Enter two numbers: " << endl;
        cin >> x >> y;
        if (y == 0) {
            cout << "Please Enter non Zero divisor." << endl;
            break;
        }
        cal.setdiv(x, y);
        cout << "The division is: " << cal.getdiv() << endl;
        break;
    default:
        cout << "Invalid Input" << endl;
    }

    return 0;  // Return 0 to indicate successful completion
}
