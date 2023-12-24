#include "surat.cpp"

namespace stack {

    typedef pNode Stack;

    pNode createStack(){
        return nullptr;
    }

    bool isEmpty(Stack s){ 
        return s == nullptr; 
    }

    std :: string peek(Stack s){ 
        return s -> data.nama;
    }

    int size(Stack s){
        pNode pHelp = s;
        int counter = 0;
        do {
            pHelp -> data;
            pHelp = pHelp -> next;
            counter++;
        } while (pHelp != nullptr);
        return counter;
    }

    void push(Stack &s, pNode newNode){
        if (isEmpty(s)){
            s = newNode;
        }
        else {
            newNode -> next = s;
            s -> prev = newNode;
            s = newNode;
        }
    }

    void traversal(Stack s, std::function<void(const Surat &)> func){
        pNode pHelp = s;
        if(isEmpty(s)){
            std::cout << "Masih kosong\n";
        }
        else {  
            do {
                func(pHelp -> data);
                pHelp = pHelp -> next;
            } while (pHelp != nullptr);
        }
    }
}

