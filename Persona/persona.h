#ifndef __PERSONA_H__
#define __PERSONA_H__
#include <iostream>
#include <string>
#include <set>
using namespace std;

class Persona{
    private:
        string nome;
    public:
        Persona();
        explicit Persona(string _nome);
        Persona(const Persona& p);
        ~Persona();
        friend ostream& operator<<(ostream& os, const Persona& p);
        bool operator <(const Persona& p) const;
};
ostream& operator<<(ostream& os, const Persona& p);
ostream& operator<<(ostream& os, const set<Persona>& sp);
#endif