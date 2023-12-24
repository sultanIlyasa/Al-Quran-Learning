#include "facility.hpp"
#include <string>

void menu_1(queue::Queue &q){

    refresh();
    int jawab;
    bool tanda = false;
    do {
        std::cout << "\n[Input Surat]\n"
                << "*Input 0 untuk kembali ke menu utama*\n\n";
        traverse(list);
        std::cout << "\n[Input]\n" << "[78-114]\n\n>>> "; std :: cin >> jawab;
        if (jawab == 0)
        {
            tanda = true;
            refresh();
            break;
        }
        else if (jawab >= 78 && jawab <=114)
        {
            pNode isi = queue::findQueue(q, jawab);
            if (isi != nullptr){
                msg_error("Silahkan masukkan surat yang berbeda.");
            } 
            else {
                tanda = true;
                pNode baru;
                pNode cari = searchBykey(list,jawab);
                createNode(baru,cari->data.nama,cari->data.index);
                queue::enqueue(q,baru); 
                deleteKey(list,jawab);
                msg_info("Surat berhasil dimasukkan kedalam antrian");
            }
        }
        else 
        {
            msg_error("Tidak terdapat nomor tersebut");
        }
        
    } while (!tanda);
}