#include <iostream>
using namespace std;

int main() {

 int a, b, f;
 cout<< "       Математическое выражение\n";
 cout<<"Введите a: ";
 cin>>a;
 cout<<"Введите b: ";
 cin>>b;
 cout<<"Введите f: ";
 cin>>f;

 cout<<"x=(a + b - f / a) + f * a * a - (a + b)="<<(a + b - f / a) + f * a * a - (a + b) <<"\n";

 return 0;
}

