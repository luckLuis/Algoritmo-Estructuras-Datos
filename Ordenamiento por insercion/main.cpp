#include <iostream>
using namespace std;

const int MAX = 25;
typedef int tArray[MAX];

void ingresar(tArray &arreglo, int tam);
void imprimir(const tArray arreglo, int tam);
void ordenar(tArray& arreglo, int tam);

int main()
{
	tArray arreglo;
	int tam, buscado;
	cout << "Ingrese el tamanio del arreglo: ";
	cin >> tam;
	ingresar(arreglo, tam);
	cout << "Antes de ordenar: " << endl;
	imprimir(arreglo, tam);
	cout << "Ordenado " << endl;
	ordenar(arreglo, tam);
	imprimir(arreglo, tam);
}

void ingresar(tArray& arreglo, int tam) {
	for (int i = 0; i < tam; i++) {
		cout << "Elemento " << i + 1 << " :";
		cin >> arreglo[i];
	}
}

void ordenar(tArray& arreglo, int tam) {
	int pos, aux;
	for (int i = 0; i < tam; i++) {
		pos = i;
		aux = arreglo[i];
		while ((pos > 0) && (arreglo[pos - 1] > aux)) {
			arreglo[pos] = arreglo[pos - 1];
			pos--;
		}
		arreglo[pos] = aux;
	}
}

void imprimir(const tArray arreglo, int tam) {
	for (int i = 0; i < tam; i++) {
		cout << arreglo[i] << " ";
	}
	cout << endl;
}
