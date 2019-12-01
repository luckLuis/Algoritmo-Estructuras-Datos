#include <iostream>
void ingresar(int a[], int n);
void burbujar(int a[], int n);
void imprimir(int a[], int n);
using namespace std;
int main()
{
    int arreglo[5];
    ingresar(arreglo, 6);
    burbujar(arreglo, 6);
    imprimir(arreglo, 6);





    return 0;
}


void ingresar(int a[], int n)
{
    for (int i= 0; i < n; i++)
    {
        cout << "Ingrese valores: ";
        cin >> a[i];
    }

}
void burbujar(int a[], int n)
{
    for (int i=0; i < n; i++)
    {
        for (int j=i+1; j <= n-1; j++)
        {
            if ( a[j] < a[i])
            {
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }

        }
    }

}
void imprimir(int a[], int n)
{
    cout << "Ordenado: " << endl;
     for (int i = 0; i < n ; i++)
    {

        cout <<  a[i] << endl;
    }
    cout << "--------------------------" << endl;
}
