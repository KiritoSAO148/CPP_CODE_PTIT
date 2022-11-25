#include <bits/stdc++.h>
using namespace std;

int cnt=0;
struct SinhVien{
	string msv,ten,lop;
	double diem1,diem2,diem3;
};

void nhap (SinhVien &a){
	cin >> a.msv;
	cin.ignore();
	getline(cin,a.ten);
	cin >> a.lop >> a.diem1 >> a.diem2 >> a.diem3;
}

void in_ds (SinhVien a[],int n){
	for (int i=0; i<n; i++){
		++cnt;
		cout << cnt << " " << a[i].msv << " " << a[i].ten << " " << a[i].lop << " " << fixed << setprecision(1) << a[i].diem1 << " " << a[i].diem2 << " " << a[i].diem3 << endl;
	}
}

bool cmp (SinhVien a,SinhVien b){
	return a.msv < b.msv;
}

void sap_xep(SinhVien a[], int n){
	sort (a,a+n,cmp);
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
