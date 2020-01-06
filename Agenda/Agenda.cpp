#include <iostream>
#include<stdlib.h>
#include<string>
using namespace std;
#include<fstream>

int menu();
void ingresarDatos();
void leerDatos();

int main()
{
	cout << endl;
	int x = menu();
	while (x != 3)
	{
		switch (x)
		{
		case 1:
			ingresarDatos();
			cout << endl;
			break;
		case 2:
			leerDatos();
			cout << endl;
			break;
		}
		x = menu();
	}
	return 0;
}

int menu() {

	int op = -1;

	while (op < 1 || op > 3)
	{
		cout << " 1. Ingresar datos al archivo. " << endl;
		cout << " 2. Leer datos del archivo. " << endl;
		cout << " 3. Salir. " << endl;
		cout << "  Opcion: ";
		cin >> op;
		cin.ignore();
	}
	cout << endl;
	return op;

}

void ingresarDatos()
{
	string nombre;
	string apellido;
	int edad;
	char opcion;
	string nombreArchivo;
	ofstream archivoAgenda;

	cout << "Ingrese el nombre del archivo (contactos.txt): "; // contactos.txt
	getline(cin, nombreArchivo);
	archivoAgenda.open(nombreArchivo.c_str(), ios::out);
	do
	{
		cout << "\tIngrese el nombre: ";
		getline(cin, nombre, '\n');
		cout << "\tIngrese el apellido: ";
		getline(cin, apellido, '\n');
		cout << "\tIngrese la edad: ";
		cin >> edad;
		archivoAgenda << nombre << " " << apellido << " " << edad << endl;
		cout << "DESEA INGRESAR OTRO CONTACTO s/n: ";
		cin >> opcion;
		cin.ignore(); //IGNORA EL ENTER
	} while (opcion == 's');
	archivoAgenda.close();
}

void leerDatos()
{
	string nombre;
	string apellido;
	int edad;
	ifstream archivolectura("contactos.txt");
	string texto;
	while (!archivolectura.eof())
	{
		archivolectura >> nombre >> apellido >> edad;
		if (!archivolectura.eof())
		{
			getline(archivolectura, texto);
			cout << "El nombre es: " << nombre << endl;
			cout << "El apellido es: " << apellido << endl;
			cout << "La edad es: " << edad << endl << endl;
		}
	}
	archivolectura.close();
}
