
#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;

int main () {
  
  string str="";
  cout << "       Перевод в верхний регистр\n";
  cout << "Введите строку: ";
  cin >> str;
  
  for(int i=0; i<str.length(); i++) {

     str[i]=(char)(toupper(str[i]));
  }
 cout << str <<"\n";
  return 0;
}
