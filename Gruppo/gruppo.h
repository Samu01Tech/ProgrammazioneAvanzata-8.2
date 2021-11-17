#ifndef __GRUPPO_H__
#define __GRUPPO_H__
#include <iostream>
#include <set>
#include "../Persona/persona.h"
using namespace std;

class Gruppo{
    private:
        set<Persona> sp; //composizione
        set<Persona*> spp; //aggregazione
    public:
        Gruppo();
        ~Gruppo();
        void addPersona1(Persona p){
            sp.insert(p);
        };
        void addPersona2(const Persona& p){
            sp.insert(p);
        };
        void addPersona3(string _nome){
            //sp.insert(_nome);//senza explicit nel metodo Persona()
            sp.insert(Persona(_nome));
        };
        void addPersona(Persona* pp){
            spp.insert(pp);
        };
        friend ostream& operator<<(ostream& os, const Gruppo& g);
};
ostream& operator<<(ostream& os, const Gruppo& g);
#endif