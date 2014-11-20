//
//  7.19.cpp
//  kid
//
//  Created by Jason on 14/11/20.
//  Copyright (c) 2014年 Jason. All rights reserved.
//
//程序清单7.19
/*
#include <stdio.h>
#include <iostream>

const double * f1(const double ar[],int n);
const double * f2(const double [],int);
const double * f3(const double *,int);

int main(){
    using namespace std;
    double av[3]={1112.3,1542.6,2227.6};
    //指针函数
    const double *(*p1)(const double *,int)=f1;//一个指向函数的指针
    auto p2=f2;//两个等价
    cout<<"using pointers to fuctions:\n";
    cout<<"address value\n";
    cout<<(*p1)(av,3)<<":"<<*(*p1)(av,3)<<endl;
    cout<<p2(av,3)<<":"<<*p2(av,3)<<endl;
    
    //函数指针数组
    const double *(*pa[3])(const double [],int)={f1,f2,f3};
    cout<<"\nUsing an array of pointers\n";
    cout<<"address value\n";
    for (int i=0; i<3; i++) {
        cout<<pa[i](av,3)<<":"<<*pa[i](av,3)<<endl;
    }
    //指向函数指针的指针
     cout<<"\nUsing a pointer to pointers\n";
      cout<<"address value\n";
    for (int i=0; i<3; i++) {
        cout<<pa[i](av,3)<<":"<<*pa[i](av,3)<<endl;
        //一个指向函数指针数组的指针
        cout<<"\nUsing a pointer to array of pointers\n";
        cout<<"address value\n";
        //auto pc=&pa;
        const double * (*(*pc)[3])(const double [],int)=&pa;
        for (int i=0; i<3; i++)
            cout<<(*pc)[i](av,3)<<":"<<*((*pc)[i](av,3))<<endl;
    
    }
}

const double * f1(const double ar[],int n){
    return ar;
}
const double * f2(const double ar[],int){
    return ar+1;
}
const double * f3(const double *ar,int){
    return ar+2;
}

*/