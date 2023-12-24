#include "facility.hpp"

void menu_2(queue::Queue &q, stack::Stack &s){

    refresh();
    int index,jawab;
    bool pNentu = false;
    do {
        std::cout << "[List surat] : \n";
        queue :: traversal(q);
        std::cout << "\n[Input Surat yang Sudah Dihafal]\n"
                    << "*Input 0 untuk kembali ke menu utama*\n\n"
                    << "[Input]\n"
                    << ">> ";
        std::cin >> jawab;
        pNode isi = queue::findQueue(q, jawab);
        if (isi != nullptr){
            pNentu = true;
            pNode baru;

            createNode(baru, isi->data.nama,isi ->data.index);
            stack::push(s, baru);
            queue::erase_WithKey(q, jawab);
            msg_info("Memasukan nama surat yang sudah dihafal\nUpdate antrian...");
        } else if (jawab = 0){
            pNentu = true;
            refresh();
            break;
        }
        else {
            pNentu = true;
            msg_error("Tidak ada nama surat yang terdaftar");
        }
    } while (!pNentu);
}