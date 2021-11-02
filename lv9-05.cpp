#include <iostream>
#include<math.h>
using namespace std;
void Nhapmang(int arr[], int &n);
void Xuatmang(int arr[], int n);
void Kiemtra(int arr[], int n, int brr[], int &m);

#define Max_Size 100

int main() {
    int n,m;
    int A[Max_Size], B[Max_Size];
    Nhapmang(A,n);
    Kiemtra(A,n,B,m);
    Xuatmang(B,m);
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

void Kiemtra(int arr[], int n, int brr[], int &m){
    m = 0;
    for (int i = 0; i < n; i++){
    	int btn = 0;
        if (arr[i]*arr[i+1] < 0 || arr[i]*arr[i-1] < 0){
            btn = 1;
        }
        if (btn == 1){
            brr[m++] = arr[i];
        }
    }
}
