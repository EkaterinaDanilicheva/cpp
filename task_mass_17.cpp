/*
Заполните массив случайным образом нулями, единицами и двойками так, чтобы первая двойка в массиве встречалась раньше первой единицы, количество единиц было в точности равно суммарному количеству нулей и двоек.
*/

#include <stdlib.h> //для rand()
#include <iostream>
using namespace std;

int main() {
 int n, i=0, first_2=0, count_1=0 ;
 do { //n должно быть четным
	 cout << "Введите четное число эл в массиве: ";
	 cin >> n;
 } while(n%2!=0);
 
 int *arr = new int [n]; //выделяем память под массив
 for ( i=0; i<n; i++ ) {
	if(first_2!=0) {
		arr[i]=rand()%3;
	} else {
		do {
			arr[i]=rand()%3;
		} while( arr[i]==1 );
		if (arr[i]==2) {
			first_2=i;
		}
	}
	
	if(arr[i]==1) {
		count_1++;
	}

 }
 if(count_1!=n/2) { // если кол-во 1 не равно половине массива
	do {
		i=rand()%n+1;
		if( arr[i]!=1 && i>first_2 ){
			arr[i]=1;
			count_1++;
		}
	} while(count_1!=n/2);
 } 

 for (int q=0; q<n; q++) {
	cout<<arr[q]<<", ";
 }
 cout << "\n";
 cout <<count_1<<"\n";
 
 return 0;
}
