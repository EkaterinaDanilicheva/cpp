/*
*/

#include <iostream>
using namespace std;

int fact(int n) {
	if(n==1) {
		return n;
	} else {
		return fact(n-1)*n;
	}
}

int main() {
 int n;
 cout << "Введите число: ";
 cin >> n;
 cout<<n<<"!="<<fact(n)<<"\n"; 
 return 0;
}
