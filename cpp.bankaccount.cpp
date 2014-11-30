//
//  cpp.bankaccount.cpp
//  kid
//
//  Created by Jason on 14/11/28.
//  Copyright (c) 2014年 Jason. All rights reserved.
//

#include <stdio.h>
#include "bankaccount.h"
#include <iostream>

bank_account::bank_account(){
    strcpy(name, "NO Name");
    strcpy(account, "XXX");
     saving=0;

}

bank_account:: bank_account(char *p,char *a,double d){
    strcpy(name, p);
    strcpy(account,a);
    saving=d;
    

}
void bank_account::showBank()const{
    std::cout<<name<<"'s  account:"<<std::endl;
    std::cout<<"saving :"<<saving<<std::endl;
}
void bank_account:: deposit(double m){
    saving+=m;

}
void bank_account:: withdraw(double m){
    saving-=m;
}