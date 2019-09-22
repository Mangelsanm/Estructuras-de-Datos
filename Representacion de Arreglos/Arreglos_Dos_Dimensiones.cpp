/* Declaracion de arreglos en dos dimensiones. */
/* 1. El arreglo se almacena en el Stack. */
/* 2. El arreglo se almacena parcialmente en Heap. */
/* 3. El arreglo se almacena por completo en el Heap. */

#include <iostream>
using namespace std;

int main() {
    /* 1. El arreglo se almacena en el Stack. */
    cout << "1. El arreglo se almacena en el Stack." << endl;
    /* La manera mas comun de declarar un arreglo, colocar el numero de renglones y columnas, */
    /* las cuales pueden inicializarse de la siguiente manera. Tomar en cuenta que con este */
    /* tipo de declaracion todo el arreglo se almacena en el stack. */
    int A[3][4] = {{1, 2, 3, 4}, {2, 4, 6, 8}, {3, 5, 7, 9}};

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << A[i][j] << "  " << flush;
        }
        cout << endl;
    }

    /* 2. El arreglo se almacena parcialmente en Heap. */
    cout << endl;
    cout << "2. El arreglo se almacena parcialmente en Heap." << endl;
    /* Se declara un arreglo de apuntadores a enteros el cual se almacena en el Stack, despues */
    /* declaramos los arreglos a los que apuntaran cada uno de punteros. */
    int *B[3];
    /* Cada uno de los siguientes arreglos se almacenaran en Heap */
    B[0] = new int[4];
    B[1] = new int[4];
    B[2] = new int[4];
    int auxiliar = 0;

    /* Inicializar el arreglo */
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            B[i][j] = auxiliar;
            auxiliar++;
        }
    }
    /* Imprimir el arreglo */
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << B[i][j] << "  " << flush;
        }
        cout << endl;
    }
    delete[] B[0];
    delete[] B[1];
    delete[] B[2];

    /* 3. El arreglo se almacena por completo en el Heap. */
    cout << endl;
    cout << "3. El arreglo se almacena por completo en el Heap." << endl;
    int **C;
    C = new int*[3];
    C[0] = new int[4];
    C[1] = new int[4];
    C[2] = new int[4];

    int auxiliar1 = 0;
    /* Inicializar el arreglo */
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            C[i][j] = auxiliar1;
            auxiliar1+=2;
        }
    }
    /* Imprimir el arreglo */
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << C[i][j] << "  " << flush;
        }
        cout << endl;
    }

    return 0;
}
