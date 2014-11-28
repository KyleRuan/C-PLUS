//
//  9.6.3.cpp
//  kid
//
//  Created by Jason on 14/11/26.
//  Copyright (c) 2014年 Jason. All rights reserved.
//
//location new
/*
#include <stdio.h>
#include <iostream>

struct chaff{
    char dross[20];
    int slag;
};

char buffer[512];
int main(){
    using namespace std;
    chaff *sc= new (buffer) chaff [2]; //method 1
   // chaff *sc2=new chaff [2];   //mehod 2
     char input[20];
    
    for (int i=0; i<2; i++) {
        cout<<"Enter the chaff's dross";
        cin.get(input,20).get();
        strcpy(sc[i].dross, input);
        cout<<"Enter a slag";
        cin>>sc[i].slag;
        cin.get();
    }
    for (int i=0; i<2; i++) {
        cout<<sc[i].dross<<"   "<<sc[i].slag<<endl;
    }
    
    cout<<(void *)buffer<<endl;
    cout<<sc;
}
*/