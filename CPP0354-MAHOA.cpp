#include <iostream>
#include <string.h>
using namespace std;

int decode (string s){
	int arr=s[0];
	int n=s.length();
	int dem=1;
	for (int i=0; i<n; i++){
		if (s[i]==s[i+1]){
			dem++;
		}else{
			cout << s[i] << dem;
			dem=1;
		}
	}
	return 0;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string arr;
		getline(cin,arr);
		decode(arr);
		cout << endl;
	}
}
