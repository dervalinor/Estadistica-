#include <iostream>
#include <math.h>

using namespace std;

void data_enter();
void frecuencia_r(double vektor[], int, double N);
void porcentaje(double vektor[], int, double N);

int n;
double vektor[100], N = 0;

int main(int argc, char const *argv[])
{
	data_enter();
	return 0;
}

void data_enter(){
	cout << "Number of the data: "; cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cout << "Frequency " << i << ": "; cin >> vektor[i];
	}

	for (int i = 0; i < n; ++i)
	{
		N = N + vektor[i];
	}
	cout << "Total frequency: " << N << endl;
	cout << "\n";
	cout << "Frequency relative: " << endl;
	frecuencia_r(vektor, n, N);

	cout << "\n";

	cout << "Percentage: " << endl;
	porcentaje(vektor, n, N);
}

void frecuencia_r(double vektor[], int n, double N){
	for (int i = 0; i < n; ++i)
	{
		cout << "Frequency relative: " << i << ": " << vektor[i]/N << endl;
	}
}

void porcentaje(double vektor[], int n, double N){
	for (int i = 0; i < n; ++i)
	{
		cout << "Percentage: " << i << ": " << (vektor[i]*100)/N << endl;
	}
}
