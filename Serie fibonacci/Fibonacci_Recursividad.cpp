#include <iostream>
using namespace std;

void fibonacci(int number, long long previus, long long next);

int main(){
	int a;
	cout << "Ingrese la cantidad de n�meros que quieres mostrar: ";
	cin >> a;
	cout << "La serie Fibonacci para los primeros " << a << " n�meros es: ";
	fibonacci(a, 0, 1);
	return 0;
}


void fibonacci(int number, long long previous = 0, long long next = 1){
	if (number == 0){
		return;
	} else {
		long long serie = previous +  next;
		cout <<  serie << ", ";
		fibonacci( (number - 1), next, serie);
	}
}
