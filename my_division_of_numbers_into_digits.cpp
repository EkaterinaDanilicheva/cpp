#include <iostream>
using namespace std;

int main() {

 int a, i, num=1;
 cout<< "	Деление числа на разряды\n";
 cout<<"Введите пятизначное число: ";
 cin>>a;
 for( i=10000; i>0; i=i/10 ) {
 	cout<< num <<" цифра равна "<< a/i << endl ;
	num++;
	a=a%i;
 }

 return 0;
}
