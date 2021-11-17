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
    cout << "Persona " << nome << " Creata (by value)" << endl;
};
Persona::Persona(const Persona& p){
    nome = p.nome;
    cout << "Persona " << nome << " Copiata (by ref)" << endl;
};
Persona::~Persona(){
    cout << "Persona " << nome << " Eliminata" << endl;
};
ostream& operator<<(ostream& os, const Persona& p){
    return os << "Nome: " << p.nome;
};
bool Persona::operator <(const Persona& p) const{
    return nome < p.nome;
};
ostream& operator<<(ostream& os, const set<Persona>& sp){
    for(const auto& p : sp) os << p << " | ";
    return os;
}