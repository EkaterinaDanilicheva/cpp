/*
Определить, содержит ли массив данное число x
*/

#include <stdlib.h> //для rand()
#include <iostream>
using namespace std;

int main() {
 int n, x, q=0;

 cout << "Введите число эл в массиве: ";
 cin >> n;
 cout << "Введите число: ";
 cin >> x;
 
 int *arr = new int [n]; //выделяем память под массив
 for ( int i=0; i<n; i++ ) {
	arr[i]=rand()%100+1;
	cout <<arr[i]<<" ";
 }

 cout <<"\n";
 while ( q<n) {
	if( arr[q]==x ) {
		cout <<x<<" найден!!!"<<"\n";
		break;
	}
	if(q=n-1){
		cout <<x<<" не найден"<<"\n";
	}
	q++;
 }
 
 return 0;
}
