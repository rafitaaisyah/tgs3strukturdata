#include <iostream>
#include <conio.h>
using namespace std;
int data[100];
int n;



void masukkanData();
void tampilkanData();
void sortingAsc();
void sortingDsc();
void tukar(int *a, int *b);




int main()
{
  char pl;
  cout << "Masukkan jumlah data (maksimal 100): ";
  cin >> n; // Mengatur jumlah data di sini
  if (n > 100) n = 100; // Batasi jumlah data maksimal 100

  do
  {
    
    system("cls");
    cout << "Aplikasi sorting bubble" << "\n";
    cout << "1. masukkan data" << "\n";
    cout << "2. tampilkan data" << "\n";
    cout << "3. sorting asc" << "\n";
    cout << "4. sorting dsc" << "\n";
    cout << "5. Exit" << "\n";
    cout << "Masukan angka :";
    pl = getch();
    
    switch (pl)
    {
    case '1':
      /* code */
      masukkanData();
      break;
    case '2':
      tampilkanData();
      /* code */
      break;
    case '3':
      sortingAsc();
      /* code */
      break;
    case '4':
      sortingDsc();
      /* code */
      break;
    case '5':
       cout << "Terima kasih.\n";
      /* code */
      break;

    default:
      system("cls");
      cout << "Pilihan Tidak Tersedia";
      getch();
      break;
    }
} while (pl != '5');
  return 0;
}


void tukar(int *a,int *b){
int t=*a;
*a=*b;
*b=t;
}