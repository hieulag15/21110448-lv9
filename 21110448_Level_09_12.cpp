#include<iostream>

#define MAX 100
void NhapMang(int arr[MAX], int &n);
int TimMax(int arr[MAX], int n);
void Delete(int arr[MAX], int &n, int k);
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

int TimMax(int arr[MAX], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max) max = arr[i];
    return max;
}

void Delete(int arr[MAX], int &n, int k)
{
    for (int i = k; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;
}

void XuLi(int arr[MAX], int n)
{
    int max = TimMax(arr,n);
    for (int i = n - 1; i >= 0; i--)
        if (arr[i] == max)
            Delete(arr,n,i);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}


