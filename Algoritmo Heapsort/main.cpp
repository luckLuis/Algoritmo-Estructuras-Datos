 #include <iostream>
 using namespace std;
#include "uno.h"
#include "dos.h"
#include "heapsort.h"

using namespace datos;

const int MAX = 20;
typedef int tArray[MAX];

int main()
{
    int b[100];
    int tam;
    cout << "Ingrese el tamanio: ";
    cin >> tam;
    insertarElementos(b, tam);
    cout << endl;
    heapSort(b, tam);
    mostrarElementos(b, tam);
    return 0;
}

