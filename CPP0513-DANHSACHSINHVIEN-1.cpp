#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
	string msv,ten,lop,ns;
	float gpa;
};

void nhap (SinhVien a[],int N){
	for (int i=0; i<N; i++){
		a[i].msv="B20DCCN";
		string s = to_string(i+1);
		while (s.size()<3) s="0"+s;
		a[i].msv+=s;
		cin.ignore();
		getline(cin,a[i].ten);
		cin >> a[i].lop >> a[i].ns >> a[i].gpa;
		if (a[i].ns[1]=='/') a[i].ns="0"+a[i].ns;
		if (a[i].ns[4]=='/') a[i].ns=a[i].ns.insert(3,"0");
	}
}

void in (SinhVien a[],int N){
	for (int i=0; i<N; i++){
		cout << a[i].msv << " " << a[i].ten << " " << a[i].lop << " " << a[i].ns << " " << fixed << setprecision(2) << a[i].gpa << endl;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
