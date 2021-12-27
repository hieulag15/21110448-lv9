#include<iostream>
#include<algorithm>

#define MAX 100

void NhapMang(int arr[MAX], int &n);
void XuLi(int arr[MAX], int n);
using namespace std;

int main()
{
    int n;
    int arr[MAX];
    NhapMang(arr,n);
    XuLi(arr,n);
    return 0;
}

void NhapMang(int arr[MAX], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

void XuLi(int arr[MAX], int n)
{
    sort(arr, arr + n);
    int dem = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            cout << arr[i] <<" Xuat hien: " << dem << endl;
            dem = 1;
        }
        else
            dem++;
    }
}
