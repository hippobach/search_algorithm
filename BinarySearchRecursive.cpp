#include<bits/stdc++.h>
using namespace std;

int binarySearchRecursive(int a[], int l, int r, int x) {
	if(r >= l) {
		int mid = l+(r-1)/2;
		if(a[mid] == x) 
			return mid;
			
		if(a[mid] > x) {
			return binarySearchRecursive(a,l,mid-1,x);
		}
		return binarySearchRecursive(a,mid+1,r,x);
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
	int x; cout << "Nhap x = ";
	cin >> x;
	
	int ans = binarySearchRecursive(a, 0, size-1, x);
	if(ans == -1) {
		cout << "Not Found" << endl;
	} else {
		cout << "Found" << endl;
	}
	return 0;
}

