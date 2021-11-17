#include <iostream>
#include <set>
#include "Persona/persona.h"
#include "Gruppo/gruppo.h"
using namespace std;

int main() {
    set<Persona> sp;
    sp.insert(Persona("Mario"));
    Persona p("Giovanna");
    sp.insert(p);
    cout << sp << endl;
} 