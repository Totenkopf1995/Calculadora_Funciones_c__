#include <iostream>
#include <iomanip>

using namespace std;


void suma(int a, int b);
void resta(int a, int b);
void multiplicacion(int a, int b);
void division(int a, int b);

int main() {
    int opcion, num1, num2;

    cout << endl;
    cout << "           =================" << endl;
    cout << "           |[ CALCULADORA ]|" << endl;
    cout << "           =================" << endl;

    cout << "\n^  Ingrese el primer número: ";
    cin >> num1;

    cout << "\n^  Ingrese el segundo número: ";
    cin >> num2;
    cout << endl;
    cout << endl;

    cout << "=============================================" << endl;
    cout << "|[    Seleccione la operación a realizar:  ]|\n";
    cout << "|[    1. Suma                              ]|\n";
    cout << "|[    2. Resta                             ]|\n";
    cout << "|[    3. Multiplicación                    ]|\n";
    cout << "|[    4. División                          ]|\n";
    cout << "=============================================" << endl;

    cout << endl;
    cout << "^  Opción: ";
    cin >> opcion;
    cout << endl;
    cout << endl;

    switch (opcion) {
        case 1:
            suma(num1, num2);
            break;
        case 2:
            resta(num1, num2);
            break;
        case 3:
            multiplicacion(num1, num2);
            break;
        case 4:
            division(num1, num2);
            break;
        default:
            cout << "Opción inválida." << endl;
            break;
    }

    return 0;
}
