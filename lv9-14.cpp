#include<iostream>
#include<math.h>
using namespace std;
void Nhapmang(int arr[], int &n);
void Xuatmang(int arr[], int n);
void Delete(int arr[], int &n);
#define Max_Size 100

int main() {
    int n;
    int A[Max_Size];
    Nhapmang(A,n);
    Xuatmang(A,n);
    cout<<endl;
    Delete(A,n);
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


void Delete(int arr[], int &n){
	int count = 0;
	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n ; j++){
			if (arr[i] == arr[j]){
				for (int z = j; z < n; z++) {
                    arr[j] = arr[j + 1];
				}
				count++;
			}
		}
		n -= count;
		count = 0;
	}
}

