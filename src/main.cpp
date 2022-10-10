#include <iostream>
#include "dog.h"

int main() {
    //создаем собаку с именем "Изюм"
    Dog frenchBulldog ("Izume");

    frenchBulldog.addTalent("Swimming","Dancing","counting");

    frenchBulldog.show_talents();



}
