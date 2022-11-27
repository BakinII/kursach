//
// Created by иван on 27.11.2022.
//

#ifndef KURSACH_TABLE_H
#define KURSACH_TABLE_H
#include <cstring>
#include "Adv.h"

class Table{
    friend class Adv;
private:
    Adv obj;
    int id;
    Table* left, *right;
public:
    Table();
    Table(Adv);
    Table(Table&);
    ~Table();
    void push(Table**,Adv);
    void dell(Table**);
    void sort();

};
#endif //KURSACH_TABLE_H
