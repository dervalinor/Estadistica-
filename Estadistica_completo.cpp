#include <iostream>
#include <math.h>

using namespace std;

void ask();
void ordenamiento(double arreglo[1000], int);
void contar(double arreglo[1000], int);
void frecuencia_r(double vektor[], double frecuencia[], int, int);
void porcentaje(double vektor[], double frecuencia[],int, int);
void diagrama_circular(double frecuencia_r[], double vektor[],int);

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
  double vektor[1000], frecuencia[1000];
  int m = 1, f = 0, a;//lo minimo que se puede repetir un element es una sola vez
  cout << "\n";
  for(int i = 1; i < n + 1; i ++){
     if(arreglo[i - 1] == arreglo[i]){
      m++;
    } else if(arreglo[i - 1] != arreglo[i]){//crear un contador para el vector de datos de frecuencia_r
      a = arreglo[i - 1];
      vektor[f] = a;
      frecuencia[f] = m;
      f++;
      cout << "Element " << arreglo[i - 1] << " se repite: " << m << endl;
      m = 1;
    }
  }  
  cout << "\n";
  cout << "Frecuencia de datos: " << endl;
  cout << "\n";
  frecuencia_r(vektor,frecuencia, n, f);
  cout << "\nPorcentaje de datos: " << endl;
  cout << "\n";
  porcentaje(vektor, frecuencia, n, f);
}

void frecuencia_r(double vektor[], double frecuencia[], int n, int f){
	double frecuencia_r[1000], c;
  for (int i = 0; i < f; ++i)
	{
		cout << "Frequency relative " << vektor[i] << ": " << frecuencia[i]/n << endl;
    c = frecuencia[i]/n;
    frecuencia_r[i] = c;
	}

  cout << "\nAngulos para el diagrama circular: " << endl;
  cout << "\n";
  diagrama_circular(frecuencia_r, vektor, f);
}

void porcentaje(double vektor[], double frecuencia[],int n, int f){
	for (int i = 0; i < f; ++i)
	{
		cout << "Percentage: " << vektor[i] << ": " << (frecuencia[i]*100)/n << endl;
	}
}

void diagrama_circular(double frecuencia_r[], double vektor[], int f){
  
  double angulo;
  
  for(int i = 0; i < f; i ++){
    angulo = frecuencia_r[i]*360;
    cout << "Angulo para el dato " << vektor[i] << " con la frecuencia relativa de " << frecuencia_r[i] << " es: " << angulo << endl; 
  }
}
