#include <iostream>
using namespace std;

// Función para la suma de números pares o impares
int sumarParesImpares(int numero, bool sumarPares) {
    int suma = 0;
    for (int i = 1; i <= numero; i++) {
        if ((i % 2 == 0) == sumarPares) {
            suma += i;
        }
    }
    return suma;
}

// Función para calcular el factorial
int calcularFactorial(int n) {
    int factorial = 1;
    while (n > 0) {
        factorial *= n;
        n--;
    }
    return factorial;
}

// Función para contar dígitos
int contarDigitos(int numero) {
    int contador = 0;
    do {
        contador++;
        numero /= 10;
    } while (numero != 0);
    return contador;
}

// Función para ordenar tres números ascendentes
void ordenarAscendente(int& primero, int& segundo, int& tercero) {
    if (primero > segundo) swap(primero, segundo);
    if (segundo > tercero) swap(segundo, tercero);
    if (primero > segundo) swap(primero, segundo);
}

// Función para la suma de dígitos de un número
int sumaDeDigitos(int numero) {
    int suma = 0;
    while (numero != 0) {
        suma += numero % 10;
        numero /= 10;
    }
    return suma;
}

int main() {
    int opcion;
    int numero;

    do {
        // Menú
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "	Menu de Ejercicios	\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "1. Suma de Pares e Impares\n";
        cout << "2. Calculo de Factorial\n";
        cout << "3. Contador de Digitos\n";
        cout << "4. Ordenamiento Ascendente\n";
        cout << "5. Suma de Digitos de un Numero\n";
    	cout << "0. Salir\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "Ingrese su eleccion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
            	cout << "___________________________\n";
                cout << "Ingrese un numero: ";
                cin >> numero;
                cout << "Suma de pares hasta " << numero << ": " << sumarParesImpares(numero, true) << endl;
                cout << "Suma de impares hasta " << numero << ": " << sumarParesImpares(numero, false) << endl;
                cout << "__________________________\n";
                break;

            case 2:
            	cout << "___________________________________________________\n";
                cout << "Ingrese un numero para calcular el factorial: ";
                cin >> numero;
                cout << "Factorial de " << numero << ": " << calcularFactorial(numero) << endl;
                cout << "___________________________________________________\n";
                break;

            case 3:
            	cout << "___________________________________________________\n";
                cout << "Ingrese un numero: ";
                cin >> numero;
                cout << "Numero de digitos en " << numero << ": " << contarDigitos(numero) << endl;
                cout << "___________________________________________________\n";
                break;

            case 4:
            	cout << "___________________________________________________\n";
                cout << "Ingrese tres numeros separados por espacios: ";
                int primero, segundo, tercero;
                cin >> primero >> segundo >> tercero;
                ordenarAscendente(primero, segundo, tercero);
                cout << "Numeros ordenados: " << primero << " " << segundo << " " << tercero << endl;
                cout << "___________________________________________________\n";
                break;

            case 5:
            	cout << "___________________________________________________\n";
                cout << "Ingrese un numero: ";
                cin >> numero;
                cout << "Suma de digitos en " << numero << ": " << sumaDeDigitos(numero) << endl;
                cout << "___________________________________________________\n";
                break;

            case 0:
            	cout << "___________________________________________________\n";
                cout << "Saliendo del programa. \n";
                cout << "___________________________________________________\n";
                break;

            default:
            	cout << "________________________________________________________\n";
                cout << "Opcion no válida. Por favor, ingrese una opcion valida.\n";
                cout << "________________________________________________________\n";
        }
    } while (opcion != 0);

    return 0;
}