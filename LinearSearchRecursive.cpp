#include<bits/stdc++.h>
using namespace std;

int linearSearchRecursive(int a[], int size, int key) {
	if(size == 0) 
		return -1;
	else if(a[size-1] == key) {
		return size - 1;
	} else {
		//Goi de quy
		int ans = linearSearchRecursive(a, size-1, key);
		return ans;
	}
}

int main() {
	int key; cout << "Nhap key = ";
	cin >> key;
	cout << endl;
	int a[20];
	int size; cout << "Nhap kich co cua mang: ";
	cin >> size;
	for(int i=0; i<size; i++) {
		cin >> a[i];
	} 
	int ans = linearSearchRecursive(a, size, key);
	if(ans == -1) {
		cout << "Not Found" << endl;
	} else {
		cout << "Found" << endl;
	}
	return 0;
}

