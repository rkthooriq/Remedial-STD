#include <iostream>
#include <string>
#include "dll.h"

using namespace std;

void createList(List &L) {
    L.first = nullptr;
    L.last = nullptr;
}

address createNewElm(infotype x) {
    address p = new elmList;
    p->url = x;
    p->next = nullptr;
    p->prev = nullptr;
    return p;
}

void insertLast(List &L, infotype x) {
    address p;
    p = createNewElm(x);

    if (L.first == nullptr) {
        L.first = p;
        L.last = p;
    } else {
        p->prev = L.last;
        L.last->next = p;
        L.last = p;
    }
}

address cariRiwayat(List L, infotype cari) {
    address p = L.first;
    while (p != nullptr) {
        if (p->url == cari)
            return p;
        p = p->next;
    }
    return nullptr;
}

void hapusRiwayat(List &L, infotype dataHapus) {
    address P;
    P = cariRiwayat(L, dataHapus);
    if (P != nullptr) {
        if (L.first == L.last) {
            L.first = nullptr;
            L.last = nullptr;
        } else if (P == L.first) {
            L.first = P->next;
            L.first->prev = nullptr;
        } else if (P == L.last) {
            L.last = P->prev;
            L.last->next = nullptr;
        } else {
            P->prev->next = P->next;
            P->next->prev = P->prev;
        }
        P->next = nullptr;
        P->prev = nullptr;
    }
}

void Backward(List L, infotype target) {
    address p;
    address q;

    p = cariRiwayat(L, target);
    if (p == nullptr) {
        cout << "Proses backward gagal." << endl;
    } else {
        q = L.last;
        while (q != p->prev) {
            cout << q->url << endl;
            q = q->prev;
        }
    }
}
