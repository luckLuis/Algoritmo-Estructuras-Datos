#include <iostream>
#include <fstream>
using namespace std;

void ingresar(int arreglo[], int valor);
void buscar(int arreglo[], int buscado, int valor);
void imprimir(int arreglo[], int valor);

int main()
{
    setlocale(LC_CTYPE, "Spanish");
    int valor, buscado;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> valor;
    int arreglo[valor];
    ingresar(arreglo, valor);
    cout << "Elementos del arreglo son: " << endl;
    imprimir(arreglo, valor);
    cout << "Ingrese el elemento a buscar: ";
    cin >> buscado;
    buscar(arreglo, buscado, valor);

    return 0;
}

void ingresar(int arreglo[], int valor)
    {
    for(int i = 0; i < valor; i++)
        {
        cout << i + 1 << ".- Valor: ";
        cin >> arreglo[i];
        }
    }

void buscar(int arreglo[], int buscado, int valor)
    {
    string contacto;
    ofstream archivo;
    cout << "Ingrese el nombre del archivo: ";
    cin.sync();
    getline(cin, contacto);
    archivo.open(contacto.c_str(),ios::app);
    bool c = false;
    cout << endl;
    archivo << "ELEMENTOS DEL ARREGLO " << endl;
    for (int i = 0; i < valor; i++)
        {
        archivo << " |" << arreglo[i] << " |" ;
        }
    archivo << endl;

    for(int i=0; i < valor; i++)
        {
        if(arreglo[i]== buscado)
            {
            cout << "ELEMENTO ENCONTRADO EN LA POSICIÓN " << i + 1 << endl;
            archivo << "ELEMENTO ENCONTRADO EN LA POSICIÓN " << i + 1 << endl;
            c = true;
            }
        }
        if (c == false)
            {
            cout << "ELEMENTO NO ENCONTRADO" << endl;
            archivo << "ELEMENTO NO ENCONTRADO" << endl;
            }
        archivo << endl;
    archivo.close();
    }

void imprimir(int arreglo[], int valor)
    {
    for(int i = 0; i < valor; i++)
        {
        cout << " | " << arreglo[i] << " | ";
        }
    cout << endl;
    }

