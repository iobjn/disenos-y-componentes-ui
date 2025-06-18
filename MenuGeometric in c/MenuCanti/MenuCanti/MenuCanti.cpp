#include <iostream>

using namespace std;

const double PI = 3.14159;

//funcion para calcular el area del triangulo
double calcularAreaTriangulo(double base, double altura) {
	if (base <= 0 || altura <= 0) {
		cout << "Error: La base y ltura deben ser numeros positivos." << endl;
		return -1;      //indicamos si hubo error
	}
	return (base + altura) / 2;
}

//funcion para calcular el area de un cuadrado
double calcularAreaCuadrado(double lado) {
	if (lado <= 0) {
		cout << "Error : El lado del cuadrado debe ser numero positivo." << endl;
			return -1;
	}
	return lado * lado;
}

//funcion para calcular el area de un circulo 
double calcularAreaCirculo(double radio) {
	if (radio <= 0) {
		cout << "Error : El radio del circulo debe ser positivo." << endl;
	}
	return PI * radio * radio;
}

//funcion para calcular el area de un trapecio 
double calcularAreaTrapecio(double baseMayor, double baseMenor, double Altura) {
	if (baseMayor <= 0 || baseMenor <= 0 || Altura <= 0) {
		cout << "Error: Las bases y la altura deben ser nuemros positivos." << endl;
		return -1; // indicamos el error
	}
	return ((baseMayor + baseMenor) * Altura) / 2;
}

int main() {
	int opcion;
	double resultado;

	do {
		cout << "\nCalculadora de Areas de Figuras Geometricas\n";
		cout << "1. Triangulo\n";
		cout << "2. Cuadrado\n";
		cout << "3. Circulo\n";
		cout << "4. Trapecio\n";
		cout << "0. Salir\n";
		cout << "Ingrese su Opcion\n";
		cin >> opcion;

		switch (opcion) {
		case 1: {
			double base, altura;
			cout << "Ingrese la base del Triangulo: ";
			cin >> base;
			cout << "Ingrese la altura del triangulo: ";
			cin >> altura;
			resultado = calcularAreaTriangulo(base, altura);
			break;
		}

		case 2: {
			double lado;
			cout << "Ingrese el lado del Cuadrado: ";
			cin >> lado;
			resultado = calcularAreaCuadrado(lado);
			break;
		}

		case 3: {
			double radio;
			cout << "Ingrese el radio del Circulo: ";
			cin >> radio;
			resultado = calcularAreaCirculo(radio);
			break;
		}

		case 4: {
			double baseMayor, baseMenor, altura;
			cout << "Ingrese la base MAYOR del trapecio";
			cin >> baseMayor;
			cout << "Mayor debe ser mayor que menor";
			cout << "Ingrese la base MENOR del trapecio";
			cin >> baseMenor;   
			cout << "Ingrese la Altura del trapecio";
			cin >> altura;
			resultado = calcularAreaTrapecio(baseMayor, baseMenor, altura);
			break;
		}
		case 0:
			  cout << "Saliendo......\n";
			  break;
		 default:
			  cout << "Opcion invalida.\n";
		}

		if (opcion >= 1 && opcion <= 4 && resultado != -1) {
			cout << "El area es: " << resultado << endl;
		}
	} while (opcion != 0);

	return 0;
}
