/*
Создать массив из n первых чисел Фибоначчи.
*/

#include <iostream>
using namespace std;

int main() {
 int n;
 cout << "Введите число эл в массиве: ";
 cin >> n;
 int arr[n];
 for (int i=0; i<n; i++) {
//	cout<<i<<" | "<<j<<" "<<j%2<<"\n";
	if(i==0 || i==1) {
		arr[0]=0;
		arr[1]=1;
	} else {
		arr[i]=arr[i-2]+arr[i-1];
	}
 }
 for (int q=0; q<n; q++) {
	cout<<arr[q]<<", ";
 }
 cout << "\n";
 
 return 0;
}
