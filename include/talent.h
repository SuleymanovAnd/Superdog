#include <iostream>
#pragma once
class Talent {

protected:
    std::string talentName;

    virtual void action () = 0;

public:
   virtual std::string getTalentName (){
        return talentName;
    }

};