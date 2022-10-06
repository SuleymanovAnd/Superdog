#include <iostream>
#include "dog.h"

int main() {
    //создаем собаку с именем "Изюм"
    Dog* frenchBulldog = new Dog ("Izume",true,false,true);

    frenchBulldog->show_talents();

    delete frenchBulldog;
}
