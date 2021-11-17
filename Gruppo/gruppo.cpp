#include <iostream>
#include "gruppo.h"
using namespace std;

Gruppo::Gruppo(){
    sp.clear(); //inutile
    cout << "Creato Gruppo Vuoto" << endl;
};

Gruppo::~Gruppo(){
    cout << "Gruppo Eliminato" << endl;
};

ostream& operator<<(ostream& os, const Gruppo& g){
    os << g.sp << endl;
    for (const  auto& i : g.spp) os << *i << endl;
    return os;
};

