#include <iostream>
#include <fstream>

using namespace std;

int mitad(int a[], int pInicial, int pFinal);
void ordenar(int a[], int pInicial, int pFinal);

int main()
{
    ofstream archivo;
    archivo.open("quick.txt", ios::app);
    int num;
    cout << "Tamanio del arreglo: ";
    cin >> num;
    int a[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Ingrese el " << i + 1 << " numero: ";
        cin >> a[i];
    }
    cout << "Arreglo antes" << endl;
    archivo << "Arreglo antes" << endl;
    for (int i = 0; i < num; i++)
    {

        cout << "|" << a[i] << "|" << " ";
        archivo << "|" << a[i] << "|" << " ";
    }
    cout << endl;
    archivo << endl;
    cout << "Arreglo despues" << endl;
    archivo << "Arreglo despues" << endl;
    ordenar(a, 0, num);
    for (int i = 0; i < num; i++)
    {

        cout << "|" << a[i] << "|" << " ";
        archivo << "|" << a[i] << "|" << " ";
    }
    archivo << endl;
    archivo.close();

    return 0;
}

int mitad(int a[], int pInicial, int pFinal)
{
    return a[(pInicial + pFinal) / 2];
}

void ordenar(int a[], int pInicial, int pFinal)
{

    int i = pInicial;
    int j = pFinal;
    int temp;
    int piv = mitad(a, pInicial, pFinal);

    do{
        while(a[i] < piv)
        {
            i++;
        }while(a[j] > piv)
        {
            j--;
        }
        if (i <= j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    } while (i <= j);
    if (pInicial < j)
        ordenar(a, pInicial, j);
    if (i < pFinal)
        ordenar(a, i, pFinal);
}
