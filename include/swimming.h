#include <iostream>
#include "talent.h"

class Swimming : virtual public Talent{
public:
    Swimming (){
        talentName = "Swimming";
    }
    virtual void action () {

    }

    virtual void setNewTalent (std::string inTalent){
        if (inTalent == "Swimming"|| inTalent == "swimming") {
            talents.emplace_back("Swimming");
        }
    }

    ~Swimming() = default;
};