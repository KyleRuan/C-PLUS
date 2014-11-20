//
//  7.13.7.cpp
//  kid
//
//  Created by Jason on 14/11/19.
//  Copyright (c) 2014年 Jason. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
double * Fill_array(double*,double *);
void Show_array(double*,double *);
void Reverse_array(double*,double *);
const int Max=10;
int main(){
    using namespace std;
    double properties[Max];
    cout<<"Enter the number: ";
    double * p,*q,*end;
    p=properties;
    q=&properties[Max-1];
  end=Fill_array(p, q);
    Show_array(p,end);
    Reverse_array(p,end);
    Show_array(p,end);
    
}

double * Fill_array(double *begin,double *end){
    using namespace std;
    double *p;
    p=begin;
    while (cin>>(*begin))
        begin++;
    end=--begin;
    begin=p;
    return end;
    
}

void Show_array(double* begin,double * end){
    using namespace std;
    while (begin!=end) {
        cout<<*begin<<" ";
        begin++;
    }
    cout<<*end;
    cout<<endl;
    
    
}

void Reverse_array(double* begin,double * end){
    double temp;
    double *p=begin;
    using namespace std;
    
     for (;(begin!=end)&&(p!=end);begin++,end--) {
        temp=*begin;
        *begin=*end;
        *end=temp;
         p=begin;
    }

   {
    
    }
    
}
 */

