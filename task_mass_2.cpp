/*
Заполнить массив нулями и единицами, при этом данные значения чередуются, начиная с нуля.
*/

#include <iostream>
using namespace std;

int main() {
 int n, el=0;
 cout << "Введите число эл в массиве: ";
 cin >> n;
 int arr[n];
 for (int i=0; i<n; i++) {
	arr[i]=el;
	if(el==0) {
		el=1;
	} else {
		el=0;
	}
 }
 for (int i=0; i<n; i++) {
	cout<<arr[i];
 }
 cout << "\n";
 
 return 0;
}
