#ifndef DAILYPLANNER_STUDY_H
#define DAILYPLANNER_STUDY_H

#include <string>
#include "Homework.h"


class Study : public Homework {
protected:
    int nrCapitoleTotale{};
    int nrCapitoleParcurse{};
    std::string dificultate;

public:
    Study() = default;
    ~Study() override = default; // virtual pt ca o sa avem o mostenire in diamant
    Study(const std::string &_numeMaterie, int &_numarExercitii, int &_nrCapitoleTotale, int &_nrCapitoleParcurse,
          std::string &_dificultate);
    Study(const Study&) = default;
    Study &operator=(const Study&) = default;

    friend std::istream& operator>>(std::istream& in, Study& study); // citire
    friend std::ostream& operator<<(std::ostream& out, const Study& study);

    void read(std::istream& in) override;
    void print(std::ostream& out) const override; // const pt a

};


#endif //DAILYPLANNER_STUDY_H
