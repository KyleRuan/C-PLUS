//
//  7.13.8b.cpp
//  kid
//
//  Created by Jason on 14/11/19.
//  Copyright (c) 2014年 Jason. All rights reserved.
//
/*
#include <stdio.h>
#include <string>
#include<iostream>

const int Seasons=4;
using namespace std;
const char *Snames[Seasons]={"Spring","Summer","Fall","Winter"};


struct Cost{
     double expenses[Seasons];
    };

void fill(Cost *p);
void show(const Cost *p);

int main(){
    Cost *c1;
    fill(c1);
    show(c1);
    return 0;
}

void fill(Cost *p){
    for (int i=0; i<Seasons; i++) {
        cout<<"Enter "<<Snames[i]<<" expenses: ";
        cin>>p->expenses[i];
    }
    
}

void show(const Cost *p){
    double total=0.0;
    cout<<"\nEXPENSES\n";
    for (int i=0; i<Seasons;i++)
    {
        cout<<Snames[i]<<" : $"<<p->expenses[i]<<endl;
        total+=p->expenses[i];
    }
    cout<<"Total Expense: $"<<total<<endl;
}
 */
