//
//  golf.cpp
//  kid
//
//  Created by Jason on 14/11/25.
//  Copyright (c) 2014年 Jason. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "golf.h"
#include <string>
void setgolf(golf &g, const char *name,int hc ){
    strcpy(g.fullname, name);
    g.handicap=hc;
}

int setgolf(golf &g){
    using namespace std;
    
cout<<"Enter the fullname :";
    cin.getline(g.fullname,Len);
    if (g.fullname[0]=='\0')
        return 0;
    cout<<"Enter the handicap:";
    cin>>g.handicap;
    cin.get();
        return 1;
        
}


void handicap(golf &g ,int hc){

    g.handicap=hc;
}

void showgolf(const golf & g){
    std::cout<<g.fullname<<" handicap "<<g.handicap<<std::endl;
}