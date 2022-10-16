#include <iostream>
#include "talent.h"



class Counting : virtual public Talent {
public:
    Counting (){
        talentName = "Counting";
    }

    virtual void action () {
    }
    ~Counting() = default;
};