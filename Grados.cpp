#include <iostream>
using namespace std;

void celsiusToFahrenheit(float celsius) {
    float fahrenheit = (celsius * 9 / 5) + 32;
    cout << celsius << " grados Celsius son " << fahrenheit << " grados Fahrenheit." << endl;
}

void fahrenheitToCelsius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5 / 9;
    cout << fahrenheit << " grados Fahrenheit son " << celsius << " grados Celsius." << endl;
}

int main() {
    int opcion;
    float grados;

    cout << "Conversor de temperatura" << endl;
    cout << "1. Convertir Celsius a Fahrenheit" << endl;
    cout << "2. Convertir Fahrenheit a Celsius" << endl;
    cout << "Selecciona una opción: ";
    cin >> opcion;

    if (opcion == 1) {
        cout << "Introduce la temperatura en grados Celsius: ";
        cin >> grados;
        celsiusToFahrenheit(grados);
    } else if (opcion == 2) {
        cout << "Introduce la temperatura en grados Fahrenheit: ";
        cin >> grados;
        fahrenheitToCelsius(grados);
    } else {
        cout << "Opción no válida." << endl;
    }

    return 0;
}
