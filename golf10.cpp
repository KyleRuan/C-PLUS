//
//  golf10.cpp
//  kid
//
//  Created by Jason on 14/11/29.
//  Copyright (c) 2014年 Jason. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "golf10.h"
#include <string>

golf10::golf10(){
    setgolf();
}
golf10:: golf10(char *p,int n){
    strcpy(player.fullname, p);
    player.handicap=n;
}

int golf10::setgolf(){
    using namespace std;
    cout<<"Enter the fullname :";
    cin.getline(player.fullname,Len);
    if (player.fullname[0]=='\0')
        return 0;
    cout<<"Enter the handicap:";
    cin>>player.handicap;
    cin.get();
    return 1;
}

void golf10:: handicap(int hc){
       player.handicap=hc;
}

void golf10:: showgolf()const{
    std::cout<<player.fullname<<" handicap "<<player.handicap<<std::endl;
}
