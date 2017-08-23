/*
Сформировать убывающий массив из чисел, которые делятся на 3.
*/

#include <iostream>
using namespace std;

int main() {
 int n, i, j=1;
 cout << "Введите число эл в массиве: ";
 cin >> n;
 i=n-1;
 int arr[n];
 while (i>=0) {
//	cout<<i<<" | "<<j<<" "<<j%2<<"\n";
	if ( j%2==0 && j%3==0 ) {
		arr[i]=j;
		i--;
	}
 	j++;
 }
 for (int q=0; q<n; q++) {
	cout<<arr[q]<<", ";
 }
 cout << "\n";
 
 return 0;
}
