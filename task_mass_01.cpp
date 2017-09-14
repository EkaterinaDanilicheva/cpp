/*
Заполните массив случайным образом.
*/

#include <stdlib.h>
#include <iostream>
using namespace std;

int main() {
 int n;
 cout << "Введите число эл в массиве: ";
 cin >> n;
 int *arr = new int [n];
 int slchisl;
 for ( int i=0; i<n; i++ ) {
 	slchisl=rand()%n;
	while( arr[slchisl]!=0 ) {
		slchisl=rand()%n;
	}
	arr[slchisl]=i;
 }
 for (int q=0; q<n; q++) {
	cout<<arr[q]<<", ";
 }
 cout << "\n";
 
 return 0;
}
