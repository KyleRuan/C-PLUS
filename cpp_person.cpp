//
//  cpp_person.cpp
//  kid
//
//  Created by Jason on 14/11/28.
//  Copyright (c) 2014年 Jason. All rights reserved.
//

#include <stdio.h>
#include "PERSON.h"
#include <iostream>

person::person(const std::string &ln,const char *fn){
    lname=ln;
    strcpy(fname, fn);
}
    
void  person:: show() const{
    std::cout<<fname<<" "<<lname<<std::endl;
}
void person::formalshow() const{
std::cout<<lname<<" "<<fname<<std::endl;
}
    
