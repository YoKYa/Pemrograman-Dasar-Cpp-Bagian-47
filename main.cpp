//Preprocessing Directive Yaitu sebuah perintah yang menggunakan # 

#include <iostream> // Perintah yang digunakan untuk memanggil file iostream di cpp

// Macro Tulisan
#define BUKU "Kami Bukan Sarjana Kertas"
// Macro Angka 
#define NILAI 100
// Macro Fungsi
#define TAMBAH(X,Y) (X+Y)

#define NO 2

// Macro IF
#if NO == 1
    #define NAMA "Yogi Eka Prastiya"
#else NO == 2
    #define NAMA "TAK BERNAMA"
#endif

using namespace std;

int main(){
    cout << BUKU << endl; // Keunggulan tidak menggunakan memory dan hanya mengganti BUKU dengan yang di define kan
    cout << NILAI << endl;
    cout << TAMBAH(3,5) << endl;

    //undef 
    #undef BUKU
    #define BUKU "Kami Bukan Jongos Berdasi"
    cout << BUKU << endl;

    // Mengetes IF dalam macro
    cout << NAMA << endl;

    return 0;
}