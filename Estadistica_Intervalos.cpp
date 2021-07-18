//Tabla de frecuencias para datos agrupados
#include <iostream>
#include <math.h>

using namespace std;

void ask();
<<<<<<< HEAD
void Ordenar(double vektor[], int n);
void Intervalos(double vektor[], int n);
=======
void Intervalos(double vektor[], int n);
void Ordenar(double vektor[], int n);
>>>>>>> 3b4c42c4af09eec24b904d6e0ce2d9630d8cab40
double Redondear(double);
void frecuencia(double vektor[], double inicial[], double finall[], int k, int n);
void numero_intervalo(double vektor[], int n);

int main(){

  ask();
  return 0;
}

void ask(){

  double vektor[1000];
  int n;

  cout << "Numero de datos: "; cin >> n;
  cout << "\nDatos: " << endl;
  cout << "\n";

  for(int i = 0; i < n; i ++){
    cout << "Dato " << i + 1 << " : "; cin >> vektor[i];
  }
  
  Ordenar(vektor, n);
}

<<<<<<< HEAD
void Ordenar(double vektor[], int n){
  int N; 
  double aux;
=======
void Intervalos(){
  //first ordered the array and after calculate the range
}

void Ordenar(double vektor[], int n){
  int N, t = 0; 
  double aux, a, b;
>>>>>>> 3b4c42c4af09eec24b904d6e0ce2d9630d8cab40
  N = n - 1;
  for(int i = 0; i < N; i ++){
    for(int j = 0; j < N; j ++){
      if(vektor[j] > vektor[j + 1]){
        aux = vektor[j];
        vektor[j] = vektor[j + 1];
        vektor[j + 1] = aux; 
      }
    }
  }
  
  cout << "\nDatos ordenados" << endl;
  cout << "\n";
  
  for(int i = 0; i < n; i ++){
    cout << vektor[i] << " ";
  }


  cout << "\n";

  Intervalos(vektor, n);
}

void Intervalos(double vektor[], int n){
  double range, k, A, first, end, inicial[100], finall[100];
  
  range = vektor[n - 1] - vektor[0];//se cuenta desde cero y no desde 1
  
  cout << "\n";

  cout << "Rango: " << range << endl;

  //ya que log M = log(M, e) --> log(M, 10) = log(M, e)/log(10, e), con esto
  //cambiamos de base del logaritmo de base e a base 10
  k = 1 + 3.322*log(n)/log(10);//redondear ya que indica el numero de intervalos

  cout << "Numero de intervalos: " << k << " = " << Redondear(k) << endl;

  k = Redondear(k);

  A = range/k;//recomendable redondear la cifra


  cout << "Amplitud: " << A << " = " << Redondear(A) << endl;

  A = Redondear(A);

  cout << "\nIntervalos: " << endl;

  first = vektor[0];
  end = vektor[0] + A;

  for(int i = 0; i < k; i ++){//k numero de intervalos, el intervalo se cuenta de vektor[0]
    //guardar first en un vector y end en otro vector para luego calcular
    //frecuencias 
    inicial[i] = first;
    finall[i] = end;
    cout << "Intervalo " << i + 1 << " : [" << first <<" - " << end << "]" << endl;
    first = end;
    end = end + A;
  }
  
  cout << "\n";

  frecuencia(vektor, inicial, finall, k, n);
}

double Redondear(double n){
  double a;
  for(int i = 0; i < 100; i ++){
    a = n - i;
    if(a >= 0 and a <= 0.5){
      n = i;
    } else if(a > 0.5 and a < 1){
      n = i + 1;
    }
  } 
  return n;
}

void frecuencia(double vektor[], double inicial[], double finall[], int k, int n){

  double m = 0;

  for(int i = 0; i <= k; i ++){
    for(int j = 0;  j < n; j++){
      if(vektor[j] >= inicial[i] and vektor[j] < finall[i]){//No cuenta bien la frecuencia de los ultimos elementos
        m ++;
      } else {
        if(m != 0){
          cout << "Frecuencia en el intervalo " << i + 1 << " : " << m  << endl;
        }
        m = 0;
      }
    }
  }

<<<<<<< HEAD
  numero_intervalo(vektor, n);
}

void numero_intervalo(double vektor[], int n){

  int opt = 1, l = 0, a, b;

  while(opt != 2){
    cout << "\nCalcular numero de elementos en un intervalo: 1.si 2.No "; cin >> opt;
    cout << "Valor inicial: "; cin >> a;
    cout << "Valor final: "; cin >> b;
    for(int i = 0; i < n; i ++){
      if(vektor[i] >= a and vektor[i] < b){
        l ++;
      }
    }
    cout << "Frecuencia en el intervalo " << a << " - " << b << " : " << l << endl;
  }
=======
}

void numero_intervalo(double vektor[], int n){
 int opt;

  while(opt == 1) 
 
>>>>>>> 3b4c42c4af09eec24b904d6e0ce2d9630d8cab40
}
