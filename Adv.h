//
// Created by иван on 27.11.2022.
//

#ifndef KURSACH_ADV_H
#define KURSACH_ADV_H
#include <cstring>

class Adv {
private:
    char* name;//название
    char* date;//дата
    char* num;//номер
    int price;//цена
public:
    Adv();
    Adv(char*,char*,char*,int);
    Adv(Adv&);
    ~Adv();
};


#endif //KURSACH_ADV_H
