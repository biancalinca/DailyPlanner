
#include <iostream>
#include "../headers/ExamPrep.h"

ExamPrep::ExamPrep(const std::string &_numeMaterie, int &_numarExercitii, int &_nrCapitoleTotale,
                   int &_nrCapitoleParcurse, std::string &_dificultate, int &_nrZile) : Homework(_numeMaterie
                   , _numarExercitii), Study(_numeMaterie, _numarExercitii, _nrCapitoleTotale, _nrCapitoleParcurse, _dificultate) {

    this->nrZile = _nrZile;

}
std::istream &operator>>(std::istream &in, ExamPrep &examPrep) {
    examPrep.read( in);

    return in;
}

std::ostream &operator<<(std::ostream &out, const ExamPrep &examPrep) {
    examPrep.print( out);

    return out;
}

void ExamPrep::read(std::istream &in) {
    Study::read(in);

    std::cout << "Numar zile alocate pentru invatat: " << "\n";
    in >> nrZile;


}

void ExamPrep::print(std::ostream &out) const {
    Study::print(out);

    out << "Numar zile alocate pentru invatat: " <<  nrZile << "\n";

}

