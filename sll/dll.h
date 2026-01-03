#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

using namespace std;

typedef string infotype;
typedef struct elmList *address;

struct elmList {
    infotype url;
    address next;
    address prev;
};

struct List {
    address first;
    address last;
};
void createList(List &L);
address createNewElm(infotype x);
void insertLast(List &L, infotype x);
address cariRiwayat(List L, infotype cari);
void hapusRiwayat(List &L, infotype dataHapus);
void Backward(List L, infotype target);
#endif // SLL_H_INCLUDED

