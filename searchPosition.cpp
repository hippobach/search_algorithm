#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int first_pos(int a[], int n, int x) {
	int l = 0, r = n-1;
	int res = -1;
	while(l <= r) {
		int m = (l+r)/2;
		if(a[m] == x) {
			res = m;
			r = m-1;
		}
		else if(a[m] < x) {
			l = m+1;
		} else {
			r = m-1;
		}
	}
	return res;
}

int last_pos(int a[], int n, int x) {
	int flag = -1;
	int l =0, r=n-1;
	while(l <= r) {
		int m = (l+r)/2;
		if(a[m] == x) {
			flag = m;
			l = m+1;
		} else if(a[m] < x) {
			l = m+1;
		} else {
			r = m-1;
		}
	}
	return flag;
}

int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a) {
		cin >> x;
	}
	int x; cin >> x;
	cout << "First Index: " << first_pos(a,n,x) << " " << "Last Index: " << last_pos(a,n,x);
	return 0;
}

