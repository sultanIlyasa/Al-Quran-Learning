#include "surat.cpp"
#include <functional>

namespace queue {

    struct Queue{
        pNode head;
        pNode tail;
        int size;
    };

    Queue createQueue(){
        Queue q;
        q.head = nullptr;
        q.tail = nullptr;
        q.size = 0;
        return q;
    }

    bool isEmpty(Queue q){ 
        return q.head == nullptr; 
    }

    int size(Queue q){ 
        return q.size; 
    }

    void enqueue(Queue &q, pNode newNode){
      if (isEmpty(q)){
            q.head = newNode;
            q.tail = newNode;
        }else{
            newNode ->prev = q.tail;
            q.tail -> next = newNode;
            q.tail = newNode;
        }
        q.size++;
    }

    pNode findQueue(Queue q,int index){
        pNode pHelp = q.head;
        if (pHelp == nullptr)
        {
            return nullptr;
        }
        else
        {
            pNode temp = pHelp;
            pNode cari = nullptr;
            bool ketemu = false;
            while (temp != nullptr && !ketemu )
            {
                if (temp->data.index == index)
                {
                    cari = temp;
                    ketemu = true;
                }
                else{
                    temp = temp->next;
                }
            }
            return temp;    
        }
        
    }

    void erase_WithKey(Queue &q, int index){
        pNode cari = findQueue(q,index);
        if(cari == nullptr)
        {return;}
        else if(cari->data.index == q.head->data.index && q.head -> next == nullptr)
        {
            q.head = nullptr;
            cari = nullptr;
        }
        else if(cari->data.index == q.head->data.index && q.head -> next != nullptr)
        {
            q.head = q.head -> next;
            q.head -> prev = nullptr;
        }
        else
        {
            pNode temp = q.head;
            while (temp->data.index != cari->data.index)
            {
                temp = temp ->next;
            }
            if(temp->next == nullptr)
            {
                temp->prev->next = nullptr;
                temp->prev = nullptr;
            }else
            {
              temp -> prev -> next = temp -> next;
              temp -> next -> prev = temp -> prev;
              temp -> next = nullptr;
              temp -> prev =  nullptr;
            }   
            
        }
        q.size--;
    } 

    void traversal(Queue q)
    {
        if (isEmpty(q))
        {
            std :: cout << "antrian kosong!";
        }else{
        pNode temp = q.head;
        while (temp!= nullptr)
            {
                std :: cout << temp->data.index << "." << temp->data.nama << std :: endl;
                temp = temp->next;
            }
        }
        std :: cout << "\n\n";
    }
}