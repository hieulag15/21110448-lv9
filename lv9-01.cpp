#include<iostream>
using namespace std;

#define Max_Size 100
void Nhapmang(int arr[], int &n);
void Xuatmang(int arr[], int n);
void Tachmang(int A[], int nA, int B[], int &nB, int C[], int &nC);

int main() {
	int A[Max_Size], B[Max_Size], C[Max_Size];
	int nA,nB,nC;
	Nhapmang(A,nA);
	Tachmang(A,nA,B,nB,C,nC);
	Xuatmang(B,nB);
	cout<<endl;
	Xuatmang(C,nC);
	return 0;
}

void Nhapmang(int arr[], int &n) {
	do {
		cout<<"Nhap Do dai cua mang: ";
		cin>>n;	
	} while ((n < 1 ) or (n > Max_Size));
	for(int i = 0; i < n; i++){
		cin>> arr[i];
	}
}

void Xuatmang(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<"  ";
	}
}

void Tachmang(int A[], int nA, int B[], int &nB, int C[], int &nC){
	nB = 0;
	nC = 0;
	for (int i = 0; i < nA; i++){
		if (A[i] >= 0)
			B[nB++] = A[i];
		else 
			C[nC++] = A[i];
		
	}
}
