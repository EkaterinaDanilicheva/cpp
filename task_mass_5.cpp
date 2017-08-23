/*
Сформировать возрастающий массив из четных чисел.
*/

#include <iostream>
using namespace std;

int main() {
 int n, i=0, j=1;
 cout << "Введите число эл в массиве: ";
 cin >> n;
 int arr[n];
 while (i<n) {
	if (j%2==0) {
		arr[i]=j;
		i++;
	}
 	j++;
 }
 for (int i=0; i<n; i++) {
	cout<<arr[i]<<", ";
 }
 cout << "\n";
 
 return 0;
}
