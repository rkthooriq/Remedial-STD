#include <iostream>
#include "dll.h"
using namespace std;

int main() {
    List L;
    createList(L);

    insertLast(L, "telkomuniversity.ac.id");
    insertLast(L, "igracias.telkomuniversity.ac.id");
    insertLast(L, "lms.telkomuniversity.ac.id");
    insertLast(L, "scholar.google.com");

    cout << "--- Simulasi Backward sampai LMS ---" << endl;
    Backward(L, "lms.telkomuniversity.ac.id");

    cout << "--- Menghapus riwayat iGracias ---" << endl;
    hapusRiwayat(L, "igracias.telkomuniversity.ac.id");

    cout <<  "--- Simulasi Backward sampai Beranda Tel-U ---" << endl;
    Backward(L, "telkomuniversity.ac.id");

    return 0;
}
