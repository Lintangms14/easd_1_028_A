// 1. karena algoritma lebih mudah untuk menyelesaikan masalah dan masalah lebih terpecahkan secara rinci
// 2. Prosedural dan Fungsi
// 3. waktu Pemilihan Data, wakru pengerjaan project
// 4. Bubble sort
// 5. Quadratic = yaitu sebagai code, loglinier = sebuah angka yang berurutan ke bawah
// 6. di bawah ini :
#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;


    int L[n1], R[n2];


    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];


    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }


    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }


    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {

        int m = l + (r - l) / 2;


        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

void insertsort() {
    int temp;
    int j;

    for (int i = 1; i < n; i++) {
        temp = arr[i];

        j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {
            arr[j + i] = arr[j];
            j--;
        }

        arr[j] = temp;

        cout << "\nStep" << i << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
    }
}