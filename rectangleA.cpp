
#include <iostream>
using namespace std;

int main() {
 for (int str=0; str<5; str++) {
	cout << "|";
	for(int el=0; el<8; el++) {
		cout << "A";
	}
	cout << "|\n";
 }
 return 0;
}
