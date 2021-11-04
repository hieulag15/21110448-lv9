#include<iostream>
using namespace std;
#define Max_Size 100
void Nhapmang(float arr[], int &n, float brr[], int &m);
void Xuatmang(float arr[], int n);
void Gopmang(float A[], int nA, float B[], int nB, float C[], int &nC);

int main() {
	float A[Max_Size], B[Max_Size], C[2*Max_Size];
	int nA,nB,nC;
	Nhapmang(A,nA,B,nB);
	Gopmang(A,nA,B,nB,C,nC);
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

void Gopmang(float A[], int nA, float B[], int nB, float C[], int &nC){
	int iA = 0, iB = 0;
    nC = 0;
    while (iA < nA && iB < nB){
        C[nC++] = A[iA++];
        C[nC++] = B[iB++];
    }
    while (iA < nA){
        C[nC++] = A[iA++];
    }
    while (iB < nB){
        C[nC++] = B[iB++];
    }
}

