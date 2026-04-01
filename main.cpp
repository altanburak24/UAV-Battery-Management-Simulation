#include <iostream>
using namespace std;

int main() {
    int anabatarya = 80;
    int yedekbatarya = 100;
    
    // Bizim "ana kablomuz" bu. Başta ana bataryaya takılı.
    int *aktifbataryaPtr = &anabatarya;

    for (int i = 80; i >= 0; i -= 20) { // Biraz hızlı düşsün diye 20'şer azalttım
        
        // DİKKAT: Burada i'yi değil, pointer'ın gösterdiği adresteki değeri güncelliyoruz
        *aktifbataryaPtr = i; 
        
        cout << "Su an aktif olan batarya seviyesi: %" << *aktifbataryaPtr << endl;

        if (i == 0) {
            cout << "--- KRITIK: Pil bitti! Yedek bataryaya geciliyor... ---" << endl;
            
            // Kabloyu çıkarıp yedek bataryaya takıyoruz
            aktifbataryaPtr = &yedekbatarya; 
            
            // Artık sistem otomatik olarak yedek bataryayı okumaya başlıyor
            cout << "Yedek batarya aktif! Seviye: %" << *aktifbataryaPtr << endl;
        }
    }
    return 0;
}
