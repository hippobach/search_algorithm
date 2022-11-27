#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
//ap dung cho mang,vector duoc sap xep
int main() {
	int n, x;
	cin >> n >> x;
	int a[n];
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	
	auto it = upper_bound(a,a+n,x);
	if(it == (a+n)) {
		cout << "Khong co phan tu nao > " << x << endl;
	} else {
		cout << *it << endl;
		cout << it-a << endl;
	}
	return 0;
}

