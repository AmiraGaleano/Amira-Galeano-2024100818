#include <iostream>

using namespace std;

int main() {
    char vocal;

    do {
        cout << "Ingresa un caracter: ";
        cin >> vocal;

        if (vocal != 'a' && vocal != 'e' && vocal != 'i' && vocal != 'o' && vocal != 'u') {
            cout << "No es una vocal minuscula. Intente de nuevo.\n";
        }
    } while (vocal != 'a' && vocal != 'e' && vocal != 'i' && vocal != 'o' && vocal != 'u');

    cout << "\n¡Correcto! Has ingresado la vocal minuscula: " << letra << endl;

    return 0;
}