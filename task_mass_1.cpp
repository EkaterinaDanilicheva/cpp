/*
Заполнить массив нулями, кроме первого и последнего элементов, которые должны быть равны единице.
*/

#include <iostream>
using namespace std;

int main() {
 int n;
 cout << "Введите число эл в массиве: ";
 cin >> n;
 int arr[n];
 for (int i=0; i<n; i++) {
	if(i==0 || i==n-1) {
		arr[i]=1;
	} else {
		arr[i]=0;
	}
 }
 for (int i=0; i<n; i++) {
	cout<<arr[i];
 }
 cout << "\n";
 
 return 0;
}
