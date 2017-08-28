/*
Заполнить массив заданной длины различными простыми числами. Натуральное число, большее единицы, называется простым, если оно делится только на себя и на единицу.
*/

#include <stdlib.h> 
#include <iostream>
using namespace std;

int simple(int i) { 
    int rez=0;
    for (int j=2; j<10; j++) {
	if( i%j==0 && i!=j ) {
		rez=1;
		break;	
	}
    }
    return rez;
}

int main() {
 int n, i, j=0;
 i=rand()%100+1; //сл числ от 1 до 100
 cout << "Введите число эл в массиве: ";
 cin >> n;
 int arr[n];
 while (j<n) {
	if( simple(i)!=1 ) {
		arr[j]=i;
		i=rand()%100+1;
		j++;
	} else {
		i=rand()%100+1;
	}
 }
 for (int q=0; q<n; q++) {
	cout<<arr[q]<<", ";
 }
 cout << "\n";
 
 return 0;
}
