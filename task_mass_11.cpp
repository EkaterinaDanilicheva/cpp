/*
Создать массив, состоящий из троек подряд идущих одинаковых элементов.
*/

#include <stdlib.h>
#include <iostream>
using namespace std;

int main() {
 int n;
 cout << "Введите число эл в массиве: ";
 cin >> n;
 int arr[n];
 for ( int i=0; i<n; i=i+3 ) {
	//cout<<i<<"\n";	
	arr[i]=arr[i+1]=arr[i+2]=rand()%100+1;
 }
 for (int q=0; q<n; q++) {
	cout<<arr[q]<<", ";
 }
 cout << "\n";
 
 return 0;
}
