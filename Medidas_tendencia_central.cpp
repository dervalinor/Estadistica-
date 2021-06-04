#include <iostream>
#include <math.h>

using namespace std;

void ask();
void ordenamiento(double arreglo[1000], int);
double media(double arreglo[], int);
double mediana(double arreglo[], int);
double moda(double arreglo[], int);
bool numero_impar(int n);

int main(){

  ask();
  return 0;
}

void ask(){
  double arreglo[100];
  int n;

  for(int i = 0; i <= 0; i ++){
    cout << "Element " << i + 1 << ": "; cin >> arreglo[i];
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

  cout << "Arreglo ordenado: ";
  for(int i = 0; i < n; i ++){
    cout << arreglo[i] << " ";
  }

  cout << "\n";
  
  media(arreglo, n);
}


double media(double arreglo[100], int n){
  double med = 0, MED;

  for(int i = 0; i < n; i ++){
    med = med + arreglo[i];
  }
  
  MED = med/n;

  return MED;

}


double mediana(double arreglo[100], int n){//create a function for find the odd number
  double N = 0, D = 0;
  if(numero_impar(n) == true){
    N = (n - 1)/2
    D = arreglo[N + 1]
  } else {
    N = n/2;
    D = (arreglo[N] + arreglo[N + 1])/2;
  }

  return D;
}

double moda(double arreglo[100], int n){

}

bool numero_impar(int n){
  double band;
  for(int k = 0; k < 30; k ++){//make for number infinite of cases
    if(n == 2*n + 1){
      band = true;
    } else {
      band = false;
    }
  }

  return band;
}
