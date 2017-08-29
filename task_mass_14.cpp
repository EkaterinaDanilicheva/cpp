/*
Заполните массив случайным образом нулями и единицами так, чтобы количество единиц было больше количества нулей.
*/

#include <stdlib.h> //для rand()
#include <iostream>
using namespace std;

int diff(int arr[], int n) {
	int one=0;
	for(int i=0; i<n; i++) {
		if(arr[i]==1) {
			one++;
		}
	}
	if( (n/2)<one ){
		return 0;
	} else {

		return ((n/2)-one)+1;
	}
}

int main() {
 int n, slchisl, m;
 cout << "Введите число эл в массиве: ";
 cin >> n;
 m=n;
 int *arr = new int [n];
 while( diff(arr,n)!=0 ){
	 for ( int i=0; i<m; i++ ) {
 		slchisl=rand()%n;
		while( arr[slchisl]!=0 ) {
			slchisl=rand()%n;
		}
		arr[slchisl]=rand()%2;
	}
 	m=diff(arr,n);
 }
 for (int q=0; q<n; q++) {
	cout<<arr[q]<<", ";
 }
 cout << "\n";
 
 return 0;
}
