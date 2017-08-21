
#include <iostream>
using namespace std;

int main() {
 int n, el=1;
 cout << "Введите число эл в массиве: ";
 cin >> n;
 int arr[n];
 for (int i=0; i<n; i++) {
	
	arr[i]=el;
	el = el+2;
 }
 for (int i=0; i<n; i++) {
	cout<<arr[i]<<", ";
 }
 cout << "\n";
 
 return 0;
}
