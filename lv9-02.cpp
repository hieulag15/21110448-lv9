#include<iostream>
using namespace std;
#define Max_Size 100
void Nhapmang(float arr[], int &n, float brr[], int &m);
void Xuatmang(float arr[], int n);
void Xuat(float A[], int nA, float B[], int nB, float C[], int &nC);

int main() {
	float A[Max_Size], B[Max_Size], C[Max_Size];
	int nA,nB,nC;
	Nhapmang(A,nA,B,nB);
	Xuat(A,nA,B,nB,C,nC);
	Xuatmang(C,nC);
	return 0;
}

void Nhapmang(float arr[], int &n, float brr[], int &m) {
	do {
		cout<<"Nhap Do dai cua mang: ";
		cin>>n;	
	} while ((n < 1 ) or (n > Max_Size));
	for(int i = 0; i < n; i++){
		cin>> arr[i];
	}
	do {
		cout<<"Nhap Do dai cua mang: ";
		cin>>m;	
	} while ((m < 1 ) or (m > Max_Size));
	for(int j = 0; j < m; j++){
		cin>> brr[j];
	}
}

void Xuatmang(float arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<"  ";
	}
}

void Xuat(float A[], int nA, float B[], int nB, float C[], int &nC){
	nC = 0;
	for (int i = 0; i < nA; i++){
		int btn = 0;
		for (int j = 0; j < nB; j++){
			if (A[i] == B[j]){
				btn = 1;
			}		
		}
		if (btn == 0){
			C[nC++] = A[i];
		}
	}
}

