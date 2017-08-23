/*
Сформировать массив из элементов арифметической прогрессии с заданным первым элементом x и разностью d.
*/

#include <iostream>
using namespace std;

int main() {
 float d;
 int n;
 cout << "Введите разность арифметической прогрессии: ";
 cin >> d;
 cout << "Введите кол-во элементов арифметической прогрессии: ";
 cin >> n;

 int arr[n];
 for (int i=0; i<n; i++) {
	
	arr[i]=i+d;
 }
 for (int i=0; i<n; i++) {
	cout<<arr[i]<<", ";
 }
 cout << "\n";
 
 return 0;
}
