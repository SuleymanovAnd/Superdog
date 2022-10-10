#include <iostream>
#include <vector>
#include "dancing.h"
#include "counting.h"
#include "swimming.h"

class Dog {
std::string dogName;
int age;


Talent * talentsDog;
public:
    Dog () {dogName = "Tuzik", age = 1 ; }
    Dog (std::string name) : dogName(name) { age = 1 ;}
    Dog (std::string name, int inAge) : dogName(name), age(inAge){};

    void addTalent (std::string inTalent) {
        talentsDog->setNewTalent(std::move(inTalent));
    }

    void addTalent (std::string inTalent, std::string inSecondTalent) {
        talentsDog->setNewTalent(std::move(inTalent));
        talentsDog->setNewTalent(std::move(inSecondTalent));
    }

    void addTalent (std::string inTalent, std::string inSecondTalent, std::string iThirdTalent) {
        talentsDog->setNewTalent(std::move(inTalent));
        talentsDog->setNewTalent(std::move(inSecondTalent));
        talentsDog->setNewTalent(std::move(iThirdTalent));
    }

    void show_talents (){
        std::cout << "This is \""<< dogName <<"\" and it has some talents:\n";
        talentsDog->printTalents();
        std::cout << std::endl;
    }

    ~Dog() = default;

};