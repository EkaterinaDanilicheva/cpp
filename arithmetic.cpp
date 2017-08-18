
#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

float onefunc(float a, float b, float c, float d) {
 float rez;
 rez = (a/b)+(c/d);
 return rez;
}

int twofunc(int a, int b) {
 int rez;
 rez = (a+(4*b))*(a-(3*b))+pow(a,2);
 return rez;
}

float threefunc(float a) {
 float rez;
 rez =fabs(a) +pow(a,5);
 return rez;
}

float fourfunc(float a) {
 float rez;
 rez =pow(a+1,2)+3*(a+1);
 return rez;
}

float fivefunc(float a) {
 float rez, root=pow(a,2)+2014;
 if ( root > 0) {
	cout << root <<"\n";
	rez = ((fabs(a-5)-sin(a))/3)+( pow(root, 0.5)*cos(2*a) )-3;
 	return rez;
 } else {
	cout << "ERROR!!!\n";
	return 0;
 }
}
float sixfunc(float a) {
 float rez;
 if ( a != 0) {
	cout<< exp(a-2) <<"\n";
	rez = exp(a-2)+ fabs(sin(a))-(pow(a, 10)*cos(1/a));
 	return rez;
 } else {
	cout << "ERROR!!!\n";
	return 0;
 }
}
float sevenfunc(float a, float b, float x) {
 float rez, root=pow(x,2)+b;
 if ( x != 0 && root>0 ) {
	//cout<< exp(a-2) <<"\n";
	rez = pow(root, 1/5)-( (pow(b,2)*pow(sin(x+a),3))/x );
 	return rez;
 } else {
	cout << "ERROR!!!\n";
	return 0;
 }
}


int main() {
 int step;
 while (true) {
 
      cout << "Введите 1, 2, 3, 4, 5, 6, 7(продолжить) или 0(выйти) ";
      cin >> step;
 
      switch ( step ) {  
         case 1:
	    float a1, b1, c1, d1;
	    cout << "a= ";
	    cin >> a1;  
	    cout << "b= ";
	    cin >> b1;  
	    cout << "c= ";
	    cin >> c1;  
	    cout << "d= ";
	    cin >> d1;  
	    cout <<a1<<"/"<<b1<<"+"<<c1<<"/"<<d1<<"="<< onefunc(a1,b1,c1,d1)<<"\n";
	    break;
	 case 2:
	    int a2, b2;
	    cout << "a= ";
	    cin >> a2;  
	    cout << "b= ";
	    cin >> b2;  
	    cout <<"("<<a2<<"+ 4*"<<b2<<")*("<<a2<<"- 3*"<<b2<<")+"<<a2<<"^2 = "<< twofunc(a2,b2)<<"\n";
	    break;
	 case 3:
	    float a3;
	    cout << "a= ";
	    cin >> a3; 
	    cout <<"|"<<a3<<"| + "<<a3<<"^5 = "<< threefunc(a3)<<"\n";
	    break;
	 case 4:
	    float a4;
	    cout << "a= ";
	    cin >> a4; 
	    cout <<"("<<a4<<" + 1)^2 + 3*("<<a4<<"+1) = "<< fourfunc(a4)<<"\n";
	    break;
	 case 5:
	    float a5;
	    cout << "a= ";
	    cin >> a5; 
	    cout <<"((|"<<a5<<"-5|-sin"<<a5<<")/3) + ( (("<<a5<<"^2 + 2014)^(1/2))*cos(2*"<<a5<<") )-3 = "<< fivefunc(a5)<<"\n";
	    break;
	case 6:
	    float a6;
	    cout << "a= ";
	    cin >> a6; 
	    cout <<"e^("<<a6<<"-2)+|sin("<<a6<<")| - ( ("<<a6<<"^10)*cos(1/"<<a6<<") ) = "<< sixfunc(a6)<<"\n";
	    break;
	case 7:
	    float a7, b7, x7;
	    cout << "a= ";
	    cin >> a7; 
	    cout << "b= ";
	    cin >> b7;
	    cout << "x= ";
	    cin >> x7;
	    cout <<"rez = "<< sevenfunc(a7,b7,x7)<<"\n";
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
