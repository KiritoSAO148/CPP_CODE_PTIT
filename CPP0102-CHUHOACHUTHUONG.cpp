#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		char c;
		cin >> c;
		if (c>=97 && c<=122){
			c=c-32;
			cout << c;
			cout << "\n";
		}else if (c>=65 && c<=90){
			c=c+32;
			cout << c;
			cout << "\n";
		}
	}
}
