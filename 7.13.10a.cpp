//
//  7.13.10a.cpp
//  kid
//
//  Created by Jason on 14/11/20.
//  Copyright (c) 2014年 Jason. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>

double calculate(double x,double y,double (*p)(double,double));
double add(double,double);
double mines(double x,double y);
int main(){
    double x,y;
    while (std::cin>>x&&std::cin>>y) {
        std::cout<<"add return:"<<calculate(x, y, add)<<std::endl;
        std::cout<<"mines return:"<<calculate(x,y, mines)<<std::endl;
    }
}


double add(double x,double y){
    return x+y;
}

double mines(double x,double y){
    return x-y;
}

double calculate(double x,double y,double (*p)(double,double)){

    return p(x,y);
}
*/