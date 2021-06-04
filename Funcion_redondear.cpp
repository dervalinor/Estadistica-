//crear una funcion de redondear numeros
#include <iostream>
#include <math.h>

using namespace std;

void ask();
void redondear(double);

int main(){
  
  ask();
  return 0;
}

void ask(){
  double n;
  cout << "Dame un numero: "; cin >> n;
  redondear(n);
}

void redondear(double n){
  double a;
  for(int i = 0; i < 100; i ++){
    a = n - i;
    if(a > 0 and a < 0.5){
      cout << "Redondeo: " << i << endl;
      break;
    } else if(a > 0.5 and a < 1){
      cout << "Redondeo: " << i + 1 << endl;
      break;
    }
  }
}
