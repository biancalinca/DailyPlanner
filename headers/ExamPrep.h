#ifndef DAILYPLANNER_EXAMPREP_H
#define DAILYPLANNER_EXAMPREP_H
#include "Homework.h"
#include "Study.h"

class ExamPrep : public Homework, public Study {
private:
    int nrZile{};

public:

    ExamPrep() = default;
    ~ExamPrep() override = default;
    ExamPrep(const std::string &_numeMaterie, int &_numarExercitii, int &_nrCapitoleTotale, int &_nrCapitoleParcurse,
             std::string &_dificultate, int &_nrZile);
    ExamPrep(const ExamPrep&) = default;
    ExamPrep &operator=(const ExamPrep&) = default;

    friend std::istream& operator>>(std::istream& in, ExamPrep& examPrep); // citire
    friend std::ostream& operator<<(std::ostream& out, const ExamPrep& examPrep); // afisare

    void read(std::istream &in) override;
    void print(std::ostream &out) const override;


};

#endif //DAILYPLANNER_EXAMPREP_H
