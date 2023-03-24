// Insertion_sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int arr[20];            // Membuat Array dengan panjang data 20
int n;                  // Membuat Variable inputan n

void input() {
    while (true)
    {
        cout << "Masukkan Jumlah Data pada Array : ";  //Mambuat Inputan jumlah element Array
        cin >> n;                                      //memanggil variable inputan n

        if (n <= 20) {
            break;                                   //membuat kondisi n tida lebih dari 20
        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 20 Element. \n"; // Menampilkan pesan jika data lebih dari 20
        }
    }
    cout << endl;
    cout << "======================" << endl;     // Mmbuat jarak per baris program
    cout << "Masukkan Element Array" << endl;    // Membuat tampilan susunan data element array
    cout << "======================" << endl; 

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ":";   //Menggunakan perulangan for untuk menyimpan sata pada 
        cin >> arr[i];                          // Menyimpan nilai data n kedalam array arr
    }

} 

void insertionsort() {    // Procedure Insertionsort
     
    int temp;              // Membuat variable data temporary atau penimpanan sementara 
    int j;                 // Membuat variable j sebaji pananda

    for (int i = 1; i < n; i++) {  //1. Looping dengan i dimulai dari i hingga n-1
        temp = arr[i];              // 2. simpan silia arr[i] ke variable sementara temp
        j = i - 1;              // setting nilia j sama dengan i - 1
        while (j >= 0 && arr[j] > temp) // 4. Looping while dimana nilia j libeh besar sama dengan o dan
        { 
            arr[j + 1] = arr[j];           // 4a. simpan arr[j] ke dalam variable arr[j+1]
            j--;                          // 4b. decriment nilai j by 1 


        }
                                                // arr[j] lebih besar daripada temp
    }

     
}




int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
