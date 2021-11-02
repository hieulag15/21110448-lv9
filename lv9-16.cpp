#include<iostream>
#include<math.h>
using namespace std;
void Nhapmang(int arr[], int &n);
void Xuatmang(int arr[], int n);
void Xuli(int arr[], int nA, int brr[], int nB, int crr[], int nC, int drr[], int nD, int err[], int &nE);
#define Max_Size 100

int main() {
    int nA,nB,nC,nD,nE;
    int A[Max_Size], B[Max_Size], C[Max_Size], D[Max_Size], E[Max_Size];
    Nhapmang(A,nA);
    Xuatmang(A,nA);
    cout<<endl;
    Xuli(A,nA,B,nB,C,nC,D,nD,E,nE);
    Xuatmang(E,nE);
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

void Xuli(int arr[], int nA, int brr[], int nB, int crr[], int nC, int drr[], int nD, int err[], int &nE){
	nB = 0, nC = 0, nD = 0, nE = 0;
	for (int a = 0; a < nA; a++){
		if ((arr[a] % 2 == 0) && (arr[a] > 0)){
			brr[nB++] = arr[a];
		} else {
			if (arr[a] == 0){
				crr[nC++] = arr[a];
			} else {
				drr[nD++] = arr[a];
			}
		}
	}
	int iB = 0, iC = 0, iD = 0;
	while (iB < nB)
		err[nE++] = brr[iB++];
	while (iC < nC)
		err[nE++] = crr[iC++];
	while (iD < nD)
		err[nE++] = drr[iD++];
}

