#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct PhanSo{
	ll tu;
	ll mau;
};

ll lcm (ll a,ll b){
	return a/__gcd(a,b)*b;
}

void rutgon (PhanSo &a){
	ll g=__gcd(a.tu,a.mau);
	a.tu/=g;
	a.mau/=g;
}

void inPs (PhanSo a){
	cout << a.tu << "/" << a.mau;
}

PhanSo process (PhanSo A,PhanSo B){
	ll l=lcm(A.mau,B.mau);
	PhanSo tong;
	tong.tu=l/A.mau*A.tu+l/B.mau*B.tu;
	tong.mau=l;
	rutgon(tong);
	PhanSo C;
	C.tu=tong.tu*tong.tu;
	C.mau=tong.mau*tong.mau;
	PhanSo D;
	D.tu=A.tu*B.tu*C.tu;
	D.mau=A.mau*B.mau*C.mau;
	inPs(C);
	cout << " ";
	inPs(D);
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
