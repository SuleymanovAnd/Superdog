#include <iostream>
#pragma once
class Talent {

protected:
    std::string talentName;
    std::vector <std::string> talents;
    virtual void action () = 0;

public:
   virtual std::string getTalentName (){
        return talentName;
    }

    virtual void setNewTalent (std::string inTalent) = 0;

   void printTalents (){
       for (int i = 0; i , talents.size(); i++){
           std::cout << "It can : "<< talents[i] << std::endl;
       }
   }


};