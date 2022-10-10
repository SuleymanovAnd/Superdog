#include <iostream>
#include "talent.h"



class Counting : virtual public Talent {
public:
    Counting (){
        talentName = "Counting";
    }


    virtual void action () {

    }

    virtual void setNewTalent (std::string inTalent){
        if (inTalent == "Counting"||inTalent == "counting") {
            talents.emplace_back("Counting");
        }
    }
    ~Counting() = default;
};