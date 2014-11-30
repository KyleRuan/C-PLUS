//
//  PERSON.h
//  kid
//
//  Created by Jason on 14/11/28.
//  Copyright (c) 2014年 Jason. All rights reserved.
//
#include <string>
class person{
private :
    static const int LIMIT=25;
    std::string  lname;
    char fname[LIMIT];
public:
    person(){lname=" ";fname[0]='\0';}
    person(const std::string &ln,const char *fn="Hey you");
    void show() const;
    void formalshow() const;

};