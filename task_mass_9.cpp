/*
Создать массив, каждый элемент которого равен квадрату своего номера.
*/

#include <math.h>
#include <iostream>
using namespace std;

int main() {
 int n;
 cout << "Введите число эл в массиве: ";
 cin >> n;
 int arr[n];
 for ( int i=0; i<n; i++ ) {
	arr[i]=pow(i,2);
 }
 for (int q=0; q<n; q++) {
	cout<<arr[q]<<", ";
 }
 cout << "\n";
 
 return 0;
}
