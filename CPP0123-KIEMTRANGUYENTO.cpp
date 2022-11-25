#include <bits/stdc++.h>
using namespace std;

/*int kiem_tra_nt (int n){
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0)
			return 0;
	}
	return n>1;
}*/

int kiem_tra_nt (int n){
	if (n<2) return 0;
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0) return 0;
	}
	return 1;
}

int main(){
	int n;
	cin >> n;
	if (kiem_tra_nt(n)==1){
		cout << "YES";
	}else{
		cout << "NO";
	}
	return 0;
}
