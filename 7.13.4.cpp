//
//  7.13.4.cpp
//  kid
//
//  Created by Jason on 14/11/18.
//  Copyright (c) 2014年 Jason. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
long double probalility(unsigned field_numbers,unsigned picks1,unsigned specil_number);
int main(){
    using namespace std;
    double total,choices,specil;
    cout<<"Enter field numbers and  field picks,then specil numbers:";
    while ((cin>>total>>choices>>specil)&&choices<=total) {
        cout<<"you have one choice in";
        cout<<probalility(total, choices,specil);
        cout<<" of winning.\n";
        cout<<"next two number";
    }
    cout<<"Bye\n";

}


long double probalility(unsigned field_numbers,unsigned picks,unsigned specil_number){
    long double result=1.0;
    long double n;
    unsigned p;
    for (n=field_numbers,p=picks;p>0;n--,p--)
        result=result*n/p;
    
        return result/specil_number;
}

*/