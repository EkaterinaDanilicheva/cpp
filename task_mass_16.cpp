/*
Создайте массив, в котором количество отрицательных чисел равно количеству положительных и положительные числа расположены на случайных местах в массиве.
*/

#include <stdlib.h> //для rand()
#include <iostream>
using namespace std;

int main() {
 int n, slchisl;
 do {
 	cout << "Введите четное число эл в массиве: ";
 	cin >> n;
 } while( n%2>0 );
 
 int *arr = new int [n]; //выделяем память под массив
 for (int j=0; j<2; j++) {
 	for ( int i=0; i<n/2; i++ ) {
 		slchisl=rand()%n;
		while( arr[slchisl]!=0 ) {
			slchisl=rand()%n;
		}
		if(j==0){
			arr[slchisl]=rand()%100+1;
		} else {
			arr[slchisl]=(rand()%100+1)*(-1);
		}
	
	 }
 }

 for (int q=0; q<n; q++) {
	cout<<arr[q]<<", ";
 }
 cout << "\n";
 
 return 0;
}
