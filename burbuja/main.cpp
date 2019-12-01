#include <iostream>

using namespace std;
int main()
{
    int arreglo1[]= {4,1,2,3,5};
    for (int i=0; i < 5; i++)
    {
        for (int j=i+1; j <= 4; j++)
        {
            if ( arreglo1[j] < arreglo1[i])
            {
                int aux = arreglo1[i];
                arreglo1[i] = arreglo1[j];
                arreglo1[j] = aux;
            }

        }
    }
    for (int i = 0; i < 5 ; i++)
    {
        cout << arreglo1[i];
    }


    return 0;
}
