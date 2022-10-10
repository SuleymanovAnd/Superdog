#include "talent.h"
#include <iostream>


class Dancing : virtual public Talent {
public:
    Dancing () {
        talentName = "Dancing";
    }
    virtual void action () {

    }

    virtual void setNewTalent (std::string inTalent){
        if (inTalent == "Dancing"|| inTalent == "dancing") {
            talents.emplace_back("Dancing");
        }
    }
    ~Dancing() = default;
};