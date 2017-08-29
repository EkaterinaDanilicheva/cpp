/*
Сформировать массив из случайных целых чисел от 0 до 9 , в котором единиц от 3 до 5 и двоек больше троек.
*/

#include <stdlib.h> //для rand()
#include <iostream>
using namespace std;

int main() {
 int n, slchisl;
 cout << "Введите число эл в массиве: ";
 cin >> n;
 int *arr = new int [n];
 for ( int i=0; i<rand()%n+(n/2); i++ ) {
 	slchisl=rand()%n;
	while( arr[slchisl]!=0 ) {
		slchisl=rand()%n;
	}
	arr[slchisl]=1;
 }

 for (int q=0; q<n; q++) {
	cout<<arr[q]<<", ";
 }
 cout << "\n";
 
 return 0;
}
