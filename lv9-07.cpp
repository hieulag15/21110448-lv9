#include <iostream>
#include<math.h>
using namespace std;
void Nhapmang(int arr[], int &n);
void Xuatmang(int arr[], int n);
void Lietke(int arr[], int n);

#define Max_Size 100

int main() {
    int n,m;
    int A[Max_Size], B[Max_Size];
    Nhapmang(A,n);
    Lietke(A,n);
}

void Nhapmang(int arr[], int &n){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
}

void Xuatmang(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<"  ";
    }
}

void Lietke(int arr[], int n){
    for (int i = 1; i < n - 1; i++){
    	int count = 0;
    	for (int j = 0; j < n; j++){
    		if (arr[i] == arr[j]){
    				count++;
				}
			}
		if (count != 0){
			cout<<arr[i]<<" Xuat hien "<<count<<" lan"<<endl;
		}
    }
}
