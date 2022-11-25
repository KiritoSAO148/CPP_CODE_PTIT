#include <bits/stdc++.h>
using namespace std;

struct ThiSinh{
	string name;
	string date;
	float diem1;
	float diem2;
	float diem3;
	float sum;
};

void nhap (ThiSinh &A){
	getline(cin,A.name);
	cin >> A.date;
	cin >> A.diem1 >> A.diem2 >> A.diem3;
}

void in (ThiSinh A){
	cout << A.name << " " << A.date << " " << fixed << setprecision(1) << A.diem1+A.diem2+A.diem3;
}

int main(){
	struct ThiSinh A;
	nhap(A);
	in(A);
	return 0;
}
