// Preprocessor directives

#include <iostream>

// Namespace declaration

using namespace std;

// Function declarations, functions are in separate files that compile together

int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);
int modulo(int x, int y);

int main() {
    int x, y, choice, result;
    
    while(choice != 0) {
        cout << "Welcome to the Calculator!\n" "Please enter your choice for operation:\n" <<
                 "1: ---------------------------------- addition\n" <<
                 "2: ---------------------------------- subtraction\n" <<
                 "3: ---------------------------------- multiplication\n" <<
                 "4: ---------------------------------- division\n" << 
                 "5: ---------------------------------- modulo\n" <<
                 "0: ---------------------------------- exit the calculator\nEnter your choice: ";
        cin >> choice;

        if (choice == 0) break;

        cout << "Please enter the first number you would like to calculate: ";
        cin >> x;
        cout << "Please enter the second number you would like to calculate: ";
        cin >> y;
        cout << "\n\n\n";
        cout << "------------------------------------------------------------------------------\n";
        
        switch(choice) {
            case 1:
                result = add(x, y);
                cout << "The result of " << x << " + " << y << " is " << result << endl;
                break;
            case 2: 
                result = subtract(x, y);
                cout << "The result of " << x << " - " << y << " is " << result << endl;
                break;
            case 3: 
                result = multiply(x, y);
                cout << "The result of " << x << " x " << y << " is " << result << endl;
                break;
            case 4: 
                result = divide(x, y);
                cout << "The result of " << x << " / " << y << " is " << result << endl;
                break;
            case 5: 
                result = modulo(x, y);
                cout << "The result of " << x << " % " << y << " is " << result << endl;
                break;
        }
                cout << "------------------------------------------------------------------------------";
                cout << "\n\n\n";


    }

    return 0;
    
}