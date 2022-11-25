#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int d=n%10;
		if (d==0 || d==6 || d==8){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}
