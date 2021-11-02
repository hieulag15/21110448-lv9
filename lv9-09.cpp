#include<iostream>
#include<math.h>
using namespace std;
void Nhapmang(int arr[], int &n);
void Xuatmang(int arr[], int n);
void Lietke(int arr[], int n, int brr[], int m,int &k);
void Xuat(int a);
#define Max_Size 100

int main() {
    int n,m,k;
    int A[Max_Size], B[Max_Size];
    Nhapmang(A,n);
    Nhapmang(B,m);
    Lietke(A,n,B,m,k);
    Xuat(k);
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

void Lietke(int arr[], int n, int brr[], int m, int &k){
	k = 0;
    for (int i = 0; i < n ; i++){
    	int count = 0;
    	for (int j = 0; j < m; j++){
    		if (arr[i] == brr[j]){
    				count = 1;
				}
			}
		if (count == 0){
			k++;
		}
    }
    for (int a = 0; a < m; a++){
    	int count = 0;
    	for (int b = 0; b < n; b++){
    		if (brr[a] == arr[b]){
    				count = 1;
				}
			}
		if (count == 0){
			k++;
		}
    }
}

void Xuat(int a){
	cout<<"Co tat ca la: "<<a;
}
