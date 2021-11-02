#include<iostream>
#include<math.h>
using namespace std;
void Nhapmang(int arr[], int &n);
void Xuatmang(int arr[], int n);
bool Lietke(int arr[], int n, int brr[], int m);
#define Max_Size 100

int main() {
    int n,m;
    int A[Max_Size], B[Max_Size];
    Nhapmang(A,n);
    Nhapmang(B,m);
    if (Lietke(A,n,B,m))
    	cout<<"Dung";
    else 
    	cout<<"Sai";
    return 0;
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

bool Lietke(int arr[], int n, int brr[], int m){
    for (int i = 0; i < n ; i++){
    	int count = 0;
    	for (int j = 0; j < m; j++){
    		if (arr[i] == brr[j]){
    				count = 1;
				}
			}
		if (count == 0){
			return false;
		}
    }
    return true;
}

