//
// Created by иван on 27.11.2022.
//

#include "Adv.h"
Adv::Adv() {
    char* name=new char[1];
    name[0]='\0';
    char* date=new char[1];
    date[0]='\0';
    char* num=new char[1];
    num[0]='\0';
    price=0;
}
Adv::Adv(char* a, char* b , char* c , int d) {
    price=d;

    int size=strlen(a);
    name=new char[size];
    for(int i=0;i<=size;i++){
        name[i]=a[i];
    }
    int size2=strlen(b);
    date=new char[size2];
    for(int i=0;i<=size;i++){
        date[i]=b[i];
    }
    int size3=strlen(c);
    num=new char[size3];
    for(int i=0;i<=size;i++){
        num[i]=c[i];
    }
}
Adv::Adv(Adv &A) {
    price=A.price;

    int size=strlen(A.name);
    name=new char[size];
    for(int i=0;i<=size;i++){
        name[i]=A.name[i];
    }
    int size2=strlen(A.date);
    date=new char[size2];
    for(int i=0;i<=size;i++){
        date[i]=A.date[i];
    }
    int size3=strlen(A.num);
    num=new char[size3];
    for(int i=0;i<=size;i++){
        num[i]=A.num[i];
    }
}
Adv::~Adv(){
    delete name;
    delete num;
    delete date;
}
