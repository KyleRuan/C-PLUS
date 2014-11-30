
//  bankaccount.h
//  kid
//
//  Created by Jason on 14/11/28.
//  Copyright (c) 2014年 Jason. All rights reserved.
//
#define BANK_ACCOUNT


class bank_account{
private:
    char name[40];
    char account[40];
    double saving;
public:
    bank_account();
    bank_account(char *p,char *a,double d=0);
   void showBank()const;
  void  deposit(double m);
    void withdraw(double m);
};
