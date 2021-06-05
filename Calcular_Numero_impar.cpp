#include <iostream>
#include <math.h>

using namespace std;

void ask();
bool numero_impar(int n);

int main(){
  
  ask();
  return 0;
}

void ask(){
  int n;
  cout << "Give me number of 0 and 10: "; cin >> n;
  if (numero_impar(n) == true)
  {
  	cout << "The number is odd"; 
  }
  else {
  	cout << "The number is not odd";
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
