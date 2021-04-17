//crear un programa que cuente los elementos que mas se repiten los elementos
  //de este
#include <iostream>
#include <math.h>

using namespace std;

//primero ordenar los elementos y luego aplicar la condicion element[i-1] ==
//element[i] e imprimir el valor con su respectivo contador y reiniciar el
//contacontador
void ask();
void ordenamiento(double arreglo[1000], int);
void contar(double arreglo[1000], int);

int main(){

  ask();
  return 0;
}

void ask(){

  double arreglo[1000];
  int n;

  cout << "Numero de elementos: "; cin >> n;
  cout << "Elementos del arreglo: " << endl;
  cout << "\n";
  for(int i = 0; i < n; i ++){
    cout<< "Elemento " << i << " : "; cin >> arreglo[i];
  }

  ordenamiento(arreglo, n);
}

void ordenamiento(double arreglo[1000], int n){

  double aux;

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1; j++) {
      if (arreglo[j] > arreglo[j+1]) {
        aux = arreglo[j];
        arreglo[j] = arreglo[j+1];
        arreglo[j+1] = aux;
      }
    }
  }


  for (int i = n - 1; i >= 0; i--) {
    cout << arreglo[i] << " ";
  }
  contar(arreglo, n);
}


void contar(double arreglo[1000], int n){
  int m = 1;//lo minimo que se puede repetir un element es una sola vez
  cout << "\n";
  for(int i = 1; i < n + 1; i ++){
     if(arreglo[i - 1] == arreglo[i]){
      m++;
    } else if(arreglo[i - 1] != arreglo[i]){
      cout << "Element " << arreglo[i - 1] << " se repite: " << m << endl;
      m = 1;
    }
  }  
}
