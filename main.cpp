#include <iostream>
#include <iomanip>
#include "facility.cpp"
#include "menu_1.cpp"
#include "menu_2.cpp"
#include "menu_3.cpp"
#include "menu_4.cpp"

int main(){

    int choice;
    queue::Queue q = queue::createQueue();
    stack::Stack surah = stack::createStack();
    createlistSurat();
    do{
        std::cout << "\n[Program Penghafal Juz Amma]\n"
                    <<"\n[Surat yang baru selesai dihafalkan]\t: ";
        if (stack::isEmpty(surah)){
            std::cout << "-\n";
        }
        else{
            Surat top;
            top.nama = stack::peek(surah);
            std::cout << top.nama << '\n';
        }
        std::cout << "[Surat yang ingin dihafalkan]\t\t: ";
        std::cout << queue::size(q) << "\n\n";
        std::cout << "[Menu]\n\n"
                << "1. Input surat yang ingin dihafal\n"
                << "2. Input surat yang sudah dihafalkan\n"
                << "3. Cek surat yang telah di hafalkan\n"
                << "4. Cek surat yang belum selesai dihafalkan\n"
                << "5. Exit\n"
                << "\nPilihan >> "; std::cin >> choice;
            
            switch (choice){
            case 1:
                menu_1(q);
                break;

            case 2:
                menu_2(q, surah);
                break;

            case 3:
                menu_3(surah, q);
                break;

            case 4:
                menu_4(q);
                break;

            case 5:
                msg_info("Terima kasih! sampai berjumpa lagi :D");
                break;

            default:
                msg_error("Pilihan tidak tersedia");
                break;
            }
    } while (choice != 5);
}