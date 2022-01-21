#include <iostream>
#include "../headers/Study.h"

Study::Study(const std::string &_numeMaterie, int &_numarExercitii, int &_nrCapitoleTotale, int &_nrCapitoleParcurse,
             std::string &_dificultate) : Homework(){
    this->nrCapitoleParcurse = _nrCapitoleParcurse;
    this->nrCapitoleTotale = _nrCapitoleTotale;
    this->dificultate = _dificultate;

}

std::istream &operator>>(std::istream &in, Study &study) {
    study.read( in);

    return in;

}

std::ostream &operator<<(std::ostream &out, const Study &study) {
    study.print( out);

    return out;
}

void Study::read(std::istream &in) {
    Homework::read(in);
    std::cout << "Numar capitole totale: ";
    in >> nrCapitoleTotale;

    std::cout << "Numar capitole parcurse: ";
    in >> nrCapitoleParcurse;

    std::cout << "Dificultate: ";
    in >> dificultate;
}

void Study::print(std::ostream &out) const {
    Homework::print(out);

    out << "Numar capitole totale: " << nrCapitoleTotale<< "\n";
    out << "Numar capitole parcurse: " << nrCapitoleParcurse << "\n";
    out << "Dificultate: " << dificultate << "\n";

}
