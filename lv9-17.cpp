#include<iostream>
void Nhapmang(float arr[], int &n, int &k);
void Xuatmang(float arr[], int n);
void Dich_Trai_Xoay_Vong(float arr[], int n, int k);
using namespace std;

#define Max_Size 100

int main(){
    float A[Max_Size];
    int n,k;
    Nhapmang(A,n,k);
    Xuatmang(A,n);
    cout<<endl<<"Mang sau khi dich trai xoay vong "<<k<<" lan"<<endl;
    Dich_Trai_Xoay_Vong(A,n,k);
    Xuatmang(A,n);
    return 0;
}

void Nhapmang(float arr[], int &n, int &k) {
	do {
		cout<<"Nhap Do dai cua mang: ";
		cin>>n;	
	} while ((n < 1 ) or (n > Max_Size));
	for(int i = 0; i < n; i++){
		cin>> arr[i];
	}
	cout<<"Nhap k:";
    cin >> k;
}

void Xuatmang(float arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<"  ";
	}
}

void Dich_Trai_Xoay_Vong(float arr[], int n, int k){
    for (int i = 1; i <= k; i++){
        int tmp = arr[0];
        for (int j = 0; j < n - 1; j++){
            arr[j] = arr[j + 1];
        }
        arr[n-1] = tmp;
    }
}