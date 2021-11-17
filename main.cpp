#include <iostream>
#include <set>
#include "Persona/persona.h"
#include "Gruppo/gruppo.h"
using namespace std;

int main() {
    /*
    set<Persona> sp;
    sp.insert(Persona("Mario"));
    Persona p("Giovanna");
    sp.insert(p);
    cout << sp << endl;
    */
    Gruppo g;
    Persona p1("Mario");
    Persona p2("Giovanna");
    g.addPersona1(p1);
    g.addPersona2(p2);
    g.addPersona3("Luca");
    cout << g << endl;
} 