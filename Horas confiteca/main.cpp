#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int horas, horasT = 0;
	double costo;	
	for(int i = 1; i <= 5; i++){
	cout << "Ingrese las horas trabajadas: ";
	cin >> horas;
	horasT = horasT + horas;
}
	cout << "-----------------------------" << endl;
	cout << "Ingrese el costo por hora: ";
	cin >> costo;
	cout << "-----------------------------" << endl;
	cout << "Las horas totales trabajadas son: " << horasT << endl;
	cout << "El costo por hora es: " << costo << endl;
	cout << "El sueldo a recibir es de: $ " << horasT * costo;
	return 0;
}
