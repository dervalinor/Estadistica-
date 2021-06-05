#include <iostream>
#include <math.h>

using namespace std;

void ask();
void ordenamiento(double arreglo[100], int);
double media(double arreglo[], int);
double mediana(double arreglo[], int);
void moda(double arreglo[], int);
bool numero_impar(int n);

int main(){

  ask();
  return 0;
}

void ask(){
  double arreglo[100];
  int n;
  
  cout << "Tamaño de los datos: "; cin >> n;
  for(int i = 0; i < n; i ++){
    cout << "Element " << i + 1 << ": "; cin >> arreglo[i];
  }

  ordenamiento(arreglo, n);

}

void ordenamiento(double arreglo[100], int n){

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
  
  cout << "\nMedia: " << endl;
  cout << media(arreglo, n) << endl;
  cout << "\nModa: " << endl;
  moda(arreglo, n);
  cout << "\nMediana: " << endl;
  cout << "Mediana: " << mediana(arreglo, n) << endl;

}


double media(double arreglo[100], int n){
  double med = 0, MED;

  for(int i = 0; i < n; i ++){
    med = med + arreglo[i];
    if(i == 0){
      cout << "media = ( ";
    }
    if(i == n - 1){
      cout << arreglo[i] << ")/" << n;
    }

    else {
      cout << arreglo[i] << " + ";
    }
  }
  
  cout << "\nmedia = " << med << "/" << n << " = ";
  MED = med/n;

  return MED;

}


double mediana(double arreglo[100], int n){//create a function for find the odd number
  int N = 0, D = 0;
  double J, K;
  if(numero_impar(n) == true){
    N = (n - 1)/2;
    D = arreglo[N];
  } else if (numero_impar(n) == false) {
    N = n/2;
    J = arreglo[N - 1];//remember count the position of zero, no one
    K = arreglo[N];
    D = (J + K)/2;
  }

  return D;
}

void moda(double arreglo[100], int n){
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

bool numero_impar(int n){
  bool band = false;
  for(int k = 0; k < 10; k ++){//make for number infinite of cases
    if(n == 2*k + 1){
      band = true;
    }
  }

  return band;
}
