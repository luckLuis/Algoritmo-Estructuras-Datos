#include <iostream>
using namespace std;

void agregar(int a[], int n);
void imprimir(int a[], int n);
void menor(int a[], int n);

int main()
{
int arreglo[]={3,7,4,2,9};

menor(arreglo, 5);
imprimir(arreglo, 5);

    return 0;
}

void agregar(int a[], int n)
{
    for (int i = 0; i < n ; i++)
    {
        cout << "Ingrese " << i + 1 << " valor: ";
        cin >> a[i];
    }
}

void imprimir(int arreglo[], int n)
{
    for (int i = 0; i < 5; i++)
    {
        cout << " => " << arreglo[i] << endl;
    }
}

void menor(int arreglo[], int n)
{
    int min, aux;
    for(int i = 0; i < 5; i++)
    {
        min = i;
        for(int j = i + 1; j < 5; j++)
        {
            if(arreglo[j] < arreglo[min])
            {
                min = j;
            }
        }
        aux = arreglo[i];
        arreglo[i] = arreglo[min];
        arreglo[min] = aux;
    }
}
