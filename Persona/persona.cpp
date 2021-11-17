#include "persona.h"
#include <iostream>
#include <string>
using namespace std;

Persona::Persona(){
    nome = "";
    cout << "Persona Vuota Creata" << endl;
};
Persona::Persona(string _nome){
    nome = _nome;
    cout << "Persona " << nome << " Creata" << endl;
};
Persona::~Persona(){
    cout << "Persona Eliminata" << endl;
};
ostream& operator<<(ostream& os, const Persona& p){
    return os << "Nome: " << p.nome << endl;
};