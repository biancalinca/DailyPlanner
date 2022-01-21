#include <iostream>
#include "../headers/Homework.h"
#include <typeindex>

Homework::Homework(const std::string &_numeMaterie, int &_numarExercitii) {
    this->numeMaterie = _numeMaterie;
    this->numarExercitii = _numarExercitii;


}

std::istream &operator>>(std::istream &in, Homework &homework) {
    homework.read( in);

    return in;

}

std::ostream &operator<<(std::ostream &out, const Homework &homework) {
    homework.print( out);

    return out;
}

void Homework::read(std::istream &in) {
    std::cout <<  "Nume materie: ";
    in >> numeMaterie;

    std::cout << " Numar exercitii: ";
    in >> numarExercitii;


}

void Homework::print(std::ostream &out) const {
    out << "Nume materie: " <<  numeMaterie << "\n";
    out << "Numar exercitii: " <<  numarExercitii << "\n";


}

virtual Type type() const {
    return Type::Persoana;