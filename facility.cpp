#include "facility.hpp"
#include <string>

void refresh(){
    system("pause");
    system("cls");
}

void msg_info(std::string text){
    std::cout << "\n//INFO\n";
    std::cout << text << '\n';
    refresh();
}

void msg_error(std::string text){
    std::cout << "\n//ERROR\n";
    std::cout << text << '\n';
    refresh();
}

