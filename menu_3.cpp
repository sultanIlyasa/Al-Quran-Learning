#include "facility.hpp"

void menu_3(stack::Stack &s, queue::Queue &q){
    
    refresh();
        std::cout << "[Cek Surat yang Telah Dihafal]\n\n";

        if (stack::isEmpty(s)){
            msg_info("Belum terdapat list surat.");
        }
        else {
            std::cout << "Surat yang TELAH kamu hafal : \n";
            int count = 1;
            stack::traversal(s, [&count](Surat srt) {
                    std::cout << "  " <<  count << ". " << srt.nama << "\n";
                    count++;
            });
            std::cout << "\n\n";
            std::cout << "Total Surat yang TELAH kamu hafal sebanyak : \n" << stack::size(s) << "\n\n";
            std::cout << "NOTE : \nMasih ada " << queue::size(q) << " surat yang perlu dihafal!\n\n";
            refresh();
        }
}