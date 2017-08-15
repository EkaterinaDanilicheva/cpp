
#include <iostream>
using namespace std;

int Wfunc() {
 int strn, eln, sr1, sr2;
 char symbol;
 cout << "Строки ";
 cin >>strn;
 cout << "Столбцы ";
 cin >>eln;
 cout << "Символ ";
 cin >> symbol;

 if(eln%2) {
        sr1=sr2=eln/2;
 } else {
        sr1=eln/2;
        sr2=(eln/2)-1;
 }

 for (int str=0; str<strn; str++) {

        for(int el=0; el<eln; el++) {
                if( el==str || el==eln-1-str || el==sr1+str || el==sr2-str ) {
                        cout << symbol;
                } else {

                        cout << " ";

                }
        }
        cout << "\n";
 }
 return 0;
}

int main() {
 int step;
 while (true) {
 
      cout << "Введите 1(продолжить) или 0(выйти) ";
      cin >> step;
 
      switch ( step ) {  
         case 1:  
	    Wfunc();
            break;
	 case 0:    
            return false;
	    break;  
         default:  
            cout<<"ERROR!!!\n";
	    break;  
      }
 }
 return 0;
}
