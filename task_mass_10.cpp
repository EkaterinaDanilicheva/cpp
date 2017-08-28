/*
Создать массив, на четных местах в котором стоят единицы, а на нечетных местах - числа, равные остатку от деления своего номера на 5.
*/

#include <iostream>
using namespace std;

int main() {
 int n;
 cout << "Введите число эл в массиве: ";
 cin >> n;
 int arr[n];
 for ( int i=1; i<=n; i++ ) {
	if (i%2==0) {
		arr[i]=1;
 	} else {
		arr[i]=i%5;
	//	cout << arr[i] <<"\n";
	}
 }
 for (int q=1; q<=n; q++) {
	cout<<arr[q]<<", ";
 }
 cout << "\n";
 
 return 0;
}
