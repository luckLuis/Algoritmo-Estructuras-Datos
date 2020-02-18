#include <iostream>

using namespace std;

//Plantilla del nodo
struct Nodo
{
    int dato;
    Nodo *derecho;
    Nodo *izquierdo;
};

//Nodos listos para ser insertados en el arbol
Nodo *crearNodoPadresHijos(int n);

//Arbol listo para ser usados
Nodo *arbolbinario = NULL;



void insertarNodosenArbolBinario(Nodo *&arbolbinario, int n);

void mostrarArbolBinario(Nodo *&arbolbinario, int separator);

//RECORRIDO EN PREORDEN
//R-I-D
void preOrden(Nodo *&arbolbinario);

//RECORRIDO EN INORDEN
//I-R-D
void inOrden(Nodo *&arbolbinario);

//RECORRIDO EN POSORDEN
//I-D-R
void posOrden(Nodo *&arbolbinario);

int main()
{
    int n;

   for (int i = 0; i < 9; i++)
   {void mostrarArbolBinario(Nodo *&arbolbinario, int separator);
       cout << "Insertar nodos: ";
       cin >> n;
       insertarNodosenArbolBinario(arbolbinario, n);
   }
   mostrarArbolBinario(arbolbinario, 0);
   cout << "RECORRIDO PRE-ORDEN (R-I-D)" << endl;
   preOrden(arbolbinario);
   cout << endl;
   cout << "RECORRIDO POS-ORDEN (I-D-R)" << endl;
   posOrden(arbolbinario);
   cout << endl;
   cout << "RECORRIDO IN-ORDEN (I-R-D)" << endl;
   inOrden(arbolbinario);
    return 0;
}

Nodo *crearNodoPadresHijos(int n)
{
    //Inciali EL ARBOL COMO LOS NODOS
    Nodo *nuevo = new Nodo();
    //Asignar los valores al nodo creado(instanciado)
    nuevo -> dato = n;
    nuevo -> derecho = NULL;
    nuevo -> izquierdo = NULL;
    return nuevo;
}

void insertarNodosenArbolBinario(Nodo *&arbolbinario, int n)
{
    if(arbolbinario == NULL)
    {
        Nodo *nuevo = crearNodoPadresHijos(n);
        arbolbinario = nuevo;
    }
    else
    {
        //Insertar nodo raiz
        int datoRaiz = arbolbinario->dato;
        if (n < datoRaiz)
        {
            //Insertar el siguiente nodo en el sub-izquierdo
            insertarNodosenArbolBinario(arbolbinario->izquierdo, n);
        }
        else
        {
            //Insertar el siguiente nodo en el sub-derecho
            insertarNodosenArbolBinario(arbolbinario->derecho, n);
        }
    }
}

void mostrarArbolBinario(Nodo *&arbolbinario, int separator)
{
    if(arbolbinario == NULL)
    {
        return;
    }
    else
    {
        mostrarArbolBinario(arbolbinario->derecho, separator+1);
        for (int i= 0; i < separator; i++)
        {
            cout << "  ";
        }
        cout << arbolbinario->dato << endl;

        mostrarArbolBinario(arbolbinario->izquierdo, separator+1);
    }
}

void preOrden(Nodo *&arbolbinario){
    if(arbolbinario == NULL){
        return;
    }
    else{
        //R
        cout << arbolbinario->dato << "-";
        //I
        preOrden(arbolbinario->izquierdo);
        //D
        preOrden(arbolbinario->derecho);
    }
}

void inOrden(Nodo *&arbolbinario){
    if(arbolbinario == NULL){
        return;
    }
    else{
        //I
        inOrden(arbolbinario->izquierdo);
        //R
        cout << arbolbinario->dato << "-";
        //D
        inOrden(arbolbinario->derecho);
    }
}

//I-D-R
void posOrden(Nodo *&arbolbinario){
    if(arbolbinario == NULL){
        return;
    }
    else{

        //I
        posOrden(arbolbinario->izquierdo);
        //D
        posOrden(arbolbinario->derecho);
        //R
        cout << arbolbinario->dato << "-";
    }
}


