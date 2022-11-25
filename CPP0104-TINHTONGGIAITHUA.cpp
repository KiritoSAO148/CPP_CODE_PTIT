#include <iostream>
using namespace std;

int main(){
	int n;
	long long s=0;
	long long gt=1;
	cin >> n;
	for (int i=1; i<=n; i++){
		gt*=i;
		s+=gt;
	}
	cout << s;
}
