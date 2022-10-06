#include <iostream>
#include "talent.h"

class Swimming : virtual public Talent{
public:
    Swimming (){
        talentName = "Swimming";
    }
    virtual void action () {

    }
};