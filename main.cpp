#include <iostream>


#include <string>


#include <iomanip> // Include this for setting precision


using namespace std;

int main() {
    string input;

    // Ask the user for input
    cout << "What do you want to calculate (if you want to calculate the pi number type: 'show me the pi number.' : " <<
            endl;
    getline(cin, input);

    // Check if input length is 21
    if (input.length() == 21) {
        float PiNumber = 3.14;
        cout << fixed << setprecision(2) << PiNumber << endl;
        char input2;
        cout << "Do you want To Calculate the Area and Periphery ( type y for yes and n for no)" << endl;
        cin >> input2;
        if (input2 == 'y') {
            float Pi = 3.14 ;
            float Radius, Area, Periphery;
            cout << "Enter radius to see the Area and Periphery: " << endl;
            cin >> Radius;
            Area = (Radius * Radius) * Pi;
            Periphery = (Radius * 2) * Pi;

            cout << "Area: " << Area << endl;
            cout << "Periphery: " << Periphery << endl;
        }
    }

    char secondCin;
    cout << "Anything more to calculate (y/n)? " << endl;
    cin >> secondCin;

    if (secondCin == 'y') {
        int x, y;
        cout << "Enter x to calculate the result: " << endl;
        cin >> x;
        cout << "Enter y to calculate the result: " << endl;
        cin >> y;

        if (y == 0) {
            cout << "Division by zero is not allowed!" << endl;
            return 1;
        }

        cout << "Addition: " << x + y << endl;
        cout << "Subtraction: " << x - y << endl;
        cout << "Multiplication: " << x * y << endl;
        cout << "Division: " << x / y << endl;
    } else {
        cout << "Ending the program. Goodbye!" << endl;
    }
    return 0;
}
