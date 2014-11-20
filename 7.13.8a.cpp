//
//  7.13.8a.cpp
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
void fill(double *p);
void show(double *p);



int main(){
    double expenses[Seasons];
    fill(expenses);
    show(expenses);
    return 0;
}

void fill(double *p){
    for (int i=0; i<Seasons; i++) {
        cout<<"Enter "<<Snames[i]<<" expenses: ";
        cin>>*(p+i);
    }

}

void show(double *p){
    double total=0.0;
    cout<<"\nEXPENSES\n";
    for (int i=0; i<Seasons;i++)
    {
        cout<<Snames[i]<<" : $"<<*(p+i)<<endl;
        total+=*(p+i);
    }
    cout<<"Total Expense: $"<<total<<endl;
}
*/