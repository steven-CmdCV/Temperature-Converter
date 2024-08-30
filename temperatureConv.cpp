#include <iostream>
using namespace std;

int main(){

float fahrenheit;
float celsius;
int option;
bool menu = true;

while (menu){

    cout << "TEMPERATURE CONVERTER PAGE\n";
    cout << "----------------------------\n";
    cout << "1. Fahrenheit(F) to Celsius(C)\n";
    cout << "2. Celsius(C) to Fahrenheit(F)\n";
    cout << "3. Exit\n\n";

    cout << "Choose the temperature you would like to convert: ";
    cin >> option;

    if (option == 1) {

        cout << "Introduce the Fahrenheit value: ";
        cin >> fahrenheit;
        cout << endl;
        cout << fahrenheit << " degrees Fahrenheit is equal to " << (fahrenheit - 32) *  5 / 9 << " degrees Celsius\n\n";
    }

    else if (option == 2) {

        cout << "Introduce the Celsius value: ";
        cin >> celsius;
        cout << endl;
        cout << celsius << " degrees Celsius is equal to " << (celsius * 9 / 5) + 32 << " degrees Fahrenheit\n\n";
        
    }

    else if (option == 3) {
        menu = false;
        cout << "\nYou have exited successfully.\n";
    }
 
}

    return 0;
}
