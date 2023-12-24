#pragma once
#include <iostream>
#include <string>

struct Surat
{
    std::string nama;
    int index;
};


struct Node {
    Surat data;
    Node *prev;
    Node *next;
};

typedef Node *pNode;
typedef pNode linkedlist;
linkedlist list = nullptr;
pNode pNew;

void createNode(pNode& newNode, std :: string nama, int index){
    newNode = new Node;
    newNode -> data.nama = nama;
    newNode -> data.index = index;
    newNode -> next = nullptr;
    newNode -> prev = nullptr;
}
void insertSurat(pNode& head, pNode newNode)
{
    if (head == nullptr)
  { 
    head = newNode;
  } 
  else
  { 
    pNode temp = head;
    while (temp -> next != nullptr)
    {
      temp = temp->next;
    }
    temp-> next = newNode;
    newNode -> prev = temp;
  }
}

pNode searchBykey(pNode head,int index)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    else
    {
        int ketemu = 0;
        pNode temp = head;
        pNode cari = nullptr;
        while (temp != nullptr && !ketemu)
        {
            if (temp->data.index == index)
            {
                ketemu = 1;
                cari = temp;
            }else{
                temp = temp->next;
            }

        }
        return cari;
        
    }
}
void traverse(linkedlist list)
{
    if (list == nullptr)
    {
        std :: cout << "list kosong!!";
    }
    else{
        pNode temp = list;
        while(temp != nullptr)
        {
            std :: cout << temp->data.index <<"." << temp -> data.nama << std :: endl;
            temp = temp-> next;
        }
    }

}

void deleteKey(pNode& head, int index)
{
   pNode pDelete = searchBykey(head,index);
   if (head == nullptr || pDelete == nullptr) { // list kosong
    std::cout << "Node tidak ditemukan!\n";
  } else {
    if (pDelete == head) { // pDelete di awal
      head = head->next;
      pDelete->next = nullptr;
    } else if (pDelete->next == nullptr) { // pDelete di akhir
      pDelete->prev->next = nullptr;
      pDelete->prev = nullptr;
    } else {
      pDelete->prev->next = pDelete->next;
      pDelete->next->prev = pDelete->prev;
      pDelete->next = nullptr;
      pDelete->prev = nullptr;
    }
    delete pDelete;
  }

}

void createlistSurat()
{

  createNode(pNew,"An-Naba",78);
  insertSurat(list,pNew);
  
  createNode(pNew,"An-Nazi'at",79);
  insertSurat(list,pNew);

  createNode(pNew,"'Abasa",80);
  insertSurat(list,pNew);

  createNode(pNew,"At-Takwir",81);
  insertSurat(list,pNew);
  
  createNode(pNew,"Al-infithar",82);
  insertSurat(list,pNew);

  createNode(pNew,"'Al-Muthaffifin",83);
  insertSurat(list,pNew);

  createNode(pNew,"Al-Insyiqaq",84);
  insertSurat(list,pNew);
  
  createNode(pNew,"Al-Buruj",85);
  insertSurat(list,pNew);

  createNode(pNew,"Ath-Thariq",86);
  insertSurat(list,pNew);

  createNode(pNew,"Al-A'la",87);
  insertSurat(list,pNew);
  
  createNode(pNew,"Al-Ghasyiyah",88);
  insertSurat(list,pNew);

  createNode(pNew,"Al-Fajr",89);
  insertSurat(list,pNew);

   createNode(pNew,"Al-Balad",90);
  insertSurat(list,pNew);
  
  createNode(pNew,"Asy-Syams",91);
  insertSurat(list,pNew);

  createNode(pNew,"Al-Lail",92);
  insertSurat(list,pNew);

  createNode(pNew,"Ad-Dhuha",93);
  insertSurat(list,pNew);
  
  createNode(pNew,"Al-Insyirah",94);
  insertSurat(list,pNew);

  createNode(pNew,"'At-Tin",95);
  insertSurat(list,pNew);

  createNode(pNew,"Al-Alaq",96);
  insertSurat(list,pNew);
  
  createNode(pNew,"Al-Qadr",97);
  insertSurat(list,pNew);

  createNode(pNew,"Al-Bayyinah",98);
  insertSurat(list,pNew);

  createNode(pNew,"Az-Zalzalah",99);
  insertSurat(list,pNew);
  
  createNode(pNew,"Al-'Adiyat",100);
  insertSurat(list,pNew);

  createNode(pNew,"'Al-Qari'ah",101);
  insertSurat(list,pNew);

  createNode(pNew,"At-Takasur",102);
  insertSurat(list,pNew);

  createNode(pNew,"'Al-Ashr",103);
  insertSurat(list,pNew);

  createNode(pNew,"Al-Humazah",104);
  insertSurat(list,pNew);
  
  createNode(pNew,"Al-Fil",105);
  insertSurat(list,pNew);

  createNode(pNew,"Quraisy",106);
  insertSurat(list,pNew);

  createNode(pNew,"Al-Maun",107);
  insertSurat(list,pNew);
  
  createNode(pNew,"Al-Kautsar",108);
  insertSurat(list,pNew);

  createNode(pNew,"Al-Kafirun",109);
  insertSurat(list,pNew);

   createNode(pNew,"An-Nashr",110);
  insertSurat(list,pNew);

  createNode(pNew,"Al-Lahab",111);
  insertSurat(list,pNew);

  createNode(pNew,"Al-Ikhlas",112);
  insertSurat(list,pNew);

  createNode(pNew,"'Al-Falaq",113);
  insertSurat(list,pNew);

  createNode(pNew,"An-Nas",114);
  insertSurat(list,pNew);
  

}
