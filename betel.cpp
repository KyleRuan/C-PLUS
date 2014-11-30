//
//  betel.cpp
//  kid
//
//  Created by Jason on 14/11/29.
//  Copyright (c) 2014年 Jason. All rights reserved.
//

#include <stdio.h>
#include "betel.h"
#include <iostream>
Plorg:: Plorg(char *p,int I){
    strcpy(name, p);
    CI=I;
}



void Plorg:: setCI(const int a){
    CI=a;
}
void Plorg:: showPlorg() const{
    std::cout<<name<<"ci= "<<CI<<std::endl;
 
}