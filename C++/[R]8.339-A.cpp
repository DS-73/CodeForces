#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void merge(int arr[], int mid, int l, int r){
    int i, j, k;
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int *t1 = new int[n1], *t2 = new int[n2];
    for(int i = 0; i < mid + 1; i++){
        t1[i] = arr[l+i];
    }
    for(int j = 0; j < r; j++){
        t2[j] = arr[mid+1+i];
    }

    i = 0, j = 0, k = l;
    while(i < n1 && j < n2){
        if(t1[i] < t2[j]){
            arr[k] = t1[i];
            i++;
        }
        else{
            arr[k] = t2[j];
            j++;
        }

        k++;
    }

    while(i < n1){
        arr[k] = t1[i];
        i++;
        k++;
    }

    while(j < n2){
        arr[k] = t2[j];
        i++;
        k++;
    }


}

void mergesort(int arr[], int l, int r){
    if(l < r){
        // Mid point
        int mid = l + (r-l)/2;

        // Splitting
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);

        // Merging
        merge(arr,mid,l,r);
    }
}

int main(){
    string s;
    int arr[100], size = 0;
    cin >> s;
    for(int i = 0; i< s.length(); i += 2){
        arr[size] = s[i] - 48;
        size++;
    }

    // Soring the array
    mergesort(arr, 0, size - 1);
    
    for(int i = 0; i < size; i++){
        cout << arr[i] << '+';
    }

    return 0;
}
