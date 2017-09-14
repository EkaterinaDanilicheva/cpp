/*
Сформировать массив из случайных целых чисел от 0 до 9 , в котором единиц от 3 до 5 и двоек больше троек.
*/

#include <stdlib.h> //для rand()
#include <ctime> //для time()
#include <iostream>
using namespace std;

int main() {
 int n, count_three=0, count=0;
 cout << "Введите число эл в массиве: ";
 cin >> n;
 int *arr = new int [n];
 for ( int i=0; i<n; i++ ) {
	if( count_three>=count && count_three!=0 ) { //если троек больше чем нужно
		do {
			//srand ( time(NULL) ); //инициализацию генератора случайных чисел rand
			arr[i]=rand()%5+1; //сл числ от 1 до 5 включительно
		}while( arr[i]==3 && arr[i]>=2 ); 
	} else {
		arr[i]=rand()%10;
	}
	if(arr[i]==3) {
		count_three++;
		continue;
	}
	if( arr[i]>=2 && arr[i]<=5 && arr[i]!=3 ) {
		count++;
	}
 }
 
 cout<<"Троек: "<< count_three<<"\n";
 cout<<"От 3 до 5 и двоек: "<< count<<"\n";
 for (int q=0; q<n; q++) {
	cout<<arr[q]<<", ";
 }
 cout << "\n";
 
 return 0;
}
