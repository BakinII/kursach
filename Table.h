//
// Created by иван on 27.11.2022.
//

#ifndef KURSACH_TABLE_H
#define KURSACH_TABLE_H
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

class Table{
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
