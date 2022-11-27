#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int l, int r, int x) {
	if(l <= r) {
		int mid = l+(r-1)/2;
		if(a[mid] == x) 
			return mid;
			
		if(a[mid] < x) {
			l = mid + 1;
		} else
			r = mid - 1;
	}
	return -1;
}

int main() {
	int a[20];
	int size; cout << "Nhap kich co cua mang: ";
	cin >> size;
	for(int i=0; i<size; i++) {
		cin >> a[i];
	} 
	cout << endl;
	int x; cout << "Nhap x = ";
	cin >> x;
	
	int ans = binarySearch(a, 0, size-1, x);
	if(ans == -1) {
		cout << "Not Found" << endl;
	} else {
		cout << "Found" << endl;
	}
	return 0;
}


