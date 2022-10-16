#include <iostream>
#include "dog.h"

int main() {
    //создаем собаку с именем "Изюм"
    Swimming swimming;
    Dancing dancing;
    Dog frenchBulldog;

    frenchBulldog.addTalent(&swimming );
    frenchBulldog.addTalent(&dancing );
    frenchBulldog.show_talents();

}
