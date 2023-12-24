#include "facility.hpp"

void menu_4(queue::Queue &q){

    refresh();
        std::cout << "[Cek surat yang belum selesai dihafal]\n\n";

        if (queue::isEmpty(q))
        {
            msg_info("Belum terdapat antrian surat.");
        }
        else
        {
            std::cout << "Surat yang BELUM selesai kamu hafal : \n";
            queue :: traversal(q);
            std::cout << "\n\n";
            std::cout << "Total Surat yang BELUM kamu hafal sebanyak : \n" << queue::size(q) << "\n\n";
            refresh();
        }
}