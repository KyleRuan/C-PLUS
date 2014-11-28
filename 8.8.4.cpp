//
//  8.8.4.cpp
//  kid
//
//  Created by Jason on 14/11/25.
//  Copyright (c) 2014年 Jason. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
using namespace std;
#include <cstring>
struct stringy{
    char *str;
    int ct;
};
void set(stringy &s,char * testing );
void show(stringy,int n=1);
void show(const char[],int n=1);

int main(){
    stringy beany;
    char testing[]="Reality isn't what it used to be .";
    set(beany,testing);
    show(beany);
    show(beany,2);
    testing[0]='D';
    testing[1]='u';
    show(testing);
    show(testing,3);
    show("Done!");
    return 0;
    
}

void set(stringy &s,char * testing ){
    s.str=new char[strlen(testing)+1];
    s.str=testing;
    s.ct=strlen(testing);
}
void show( stringy const str,int n){
    for (int i=0; i<n; i++) {
        cout<<str.str<<" has merber of "<<str.ct<<endl;
    }
}
void show(const char ch[],int n){
    for (int i=0; i<n; i++) {
        cout<<ch<<" has merber of "<<strlen(ch)<<endl;
    }
}
*/