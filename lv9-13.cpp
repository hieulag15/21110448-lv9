#include<iostream>
#include<math.h>
using namespace std;
void Nhapmang(int arr[], int &n);
void Xuatmang(int arr[], int n);
bool Kiemtra(int n);
void Delete(int arr[], int &n);
#define Max_Size 100

int main() {
    int n;
    int A[Max_Size];
    Nhapmang(A,n);
    Xuatmang(A,n);
    Delete(A,n);
    cout<<endl;
    Xuatmang(A,n);
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

bool Kiemtra(int n){
	if (n < 4) return false;
	int sqr = sqrt(n);
	if (sqr*sqr == n)
		return true;
	return false;
}

void Delete(int arr[], int &n){
	for (int i = 0; i < n; i++){
		if (Kiemtra(arr[i])){
			for (int j = i; j < n-1; j++){
				arr[j] = arr[j+1];
			}
			n--;
		}
	}
}

