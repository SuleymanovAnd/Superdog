#include <iostream>
#include <vector>
#include "dancing.h"
#include "counting.h"
#include "swimming.h"

class Dog {
std::string dogName;
int age;

std::vector <Talent*> talents;

public:
    Dog () {dogName = "Tuzik", age = 1 ; }
    Dog (std::string name) : dogName(name) {age = 1 ;}
    Dog (std::string name, int inAge) : dogName(name), age(inAge){};

    void addTalent (Talent *talent) {
       talents.push_back(talent) ;
    }

    void show_talents (){
        std::cout << "This is \""<< dogName <<"\" and it has some talents:\n";

        for (int i = 0; i < talents.size(); i++){
            std::cout << "It can : "<< talents[i]->getTalentName() << std::endl;
        }

        std::cout << std::endl;
    }

    ~Dog() = default;

};