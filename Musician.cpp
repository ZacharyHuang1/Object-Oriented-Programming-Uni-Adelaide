#include "Musician.h"

Musician::Musician() {
    instrument = "null";
    experience = 0;
}

Musician::Musician(std::string inst, int exp) {
    instrument = inst;
    experience = exp;
}

std::string Musician::get_instrument() {
    return instrument;
}

int Musician::get_experience() {
    return experience;
}