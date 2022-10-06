#include <iostream>
#include <vector>
#include "dancing.h"
#include "counting.h"
#include "swimming.h"

class Dog {
std::string dogName;
int age;
std::vector <std::string> talents;
Dancing * dancingTalent;
Counting * countingTalent;
Swimming * swimmingTalent;

public:
    Dog () {dogName = "Tuzik", age = 1;}
    Dog (std::string name) : dogName(name) { age = 1 ;}
    Dog (std::string name, int inAge) : dogName(name), age(inAge){};
    Dog (std::string name, bool haveDancing, bool haveSwimming, bool haveCounting):dogName(name)
    {
        age = 1;
        if (haveDancing) {
            dancingTalent = new Dancing ();
            talents.push_back (dancingTalent->getTalentName());
        }
        if (haveSwimming){
            swimmingTalent = new Swimming ();
            talents.push_back (swimmingTalent->getTalentName());
        }
        if (haveCounting) {
            countingTalent = new Counting ();
            talents.push_back (countingTalent->getTalentName());
        }
    }

    void show_talents (){
        std::cout << "This is \""<< dogName <<"\" and it has some talents:\n";
        for (int i =0; i < talents.size(); i++){
            std::cout <<  "It can \" "<<talents [i] << "\".\n";
        }
        std::cout << std::endl;
    }

    ~Dog() = default;

};