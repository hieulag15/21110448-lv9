#include<iostream>
void Nhapmang(float arr[], int &n);
void Xuatmang(float arr[], int n);
void Max_Second(float arr[], int n, float &kq);
void Xuat(float a);
using namespace std;

#define Max_Size 100

int main(){
    float A[Max_Size];
    int n;
    float kq;
    Nhapmang(A,n);
    Xuatmang(A,n);
    cout<<endl;
    Max_Second(A,n,kq);
    Xuat(kq);
    return 0;
}

void Nhapmang(float arr[], int &n) {
	do {
		cout<<"Nhap Do dai cua mang: ";
		cin>>n;	
	} while ((n < 1 ) or (n > Max_Size));
	for(int i = 0; i < n; i++){
		cin>> arr[i];
	}
}

void Xuatmang(float arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<"  ";
	}
}

void Max_Second(float arr[], int n, float &kq){
    int Max, Max2;
    if (arr[0] >= arr[1]){
        Max = arr[0];
        Max2 = arr[1];
    } else {
        Max = arr[1];
        Max2 = arr[0];
    }
    for (int i = 2; i < n; i++){
        if (arr[i] >= Max){
            Max2 = Max;
            Max = arr[i];
        } else{
            if (arr[i] > Max2){
                Max2 = arr[i];
            }
        }
    }
    kq = Max2;
}

void Xuat(float a){
    cout<<"So lon nhi la: "<<a<<endl;
}