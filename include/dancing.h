#include "talent.h"
#include <iostream>


class Dancing : virtual public Talent {
public:
    Dancing () {
        talentName = "Dancing";
    }
    virtual void action () {

    }
    ~Dancing() = default;
};