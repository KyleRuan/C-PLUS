//
//  8.8.7.cpp
//  kid
//
//  Created by Jason on 14/11/25.
//  Copyright (c) 2014年 Jason. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
template <typename T>
void ShowArray(T arr[],int n);
 
template <typename T>
void ShowArray(T * arr[],int n);

template <typename T>
void SumArray(T * arr[],int n);

 template <typename T>
void SumArray(T arr[],int n);

struct debts{
    char name[10];
    double amount;
};
int main(){
    using namespace std;
    int things[6]={13,31,103,301,310,130};
    struct debts mr_E[3]{
        {"ma wolfe",2400.0},
        {"ma1 wole2",1300.0},
        {"ma3 wol3",1800.0}
    };
    double *pd[3];
    for (int i=0; i<3; i++)
        pd[i]=& mr_E[i].amount;
    ShowArray(things, 6);
    ShowArray(pd, 3);
    SumArray(things, 6);
    SumArray(pd,3);
    return 0;
}

template <typename T>
void ShowArray(T arr[],int n){
    using namespace std;
    cout<<"template A";
    for (int i=0; i<n; i++)
        cout<<arr[i]<<' ';
        cout<<endl;
}
template <typename T>
void ShowArray(T * arr[],int n){
    using namespace std;
    cout<<"template B";
    for (int i=0; i<n; i++)
        cout<<*arr[i]<<' ';
        cout<<endl;
}

template <typename T>
void SumArray(T * arr[],int n){
    using namespace std;
    T Temp=*arr[0];
    cout<<"template B";
    for (int i=1; i<n; i++)
        Temp+=*arr[i];
        cout<<"sum of array: "<<Temp<<endl;
}
 
template <typename T>
void SumArray(T arr[],int n){
    using namespace std;
    T Temp=arr[0];
    cout<<"template A";
    for (int i=1; i<n; i++)
        Temp+=arr[i];
    cout<<"sum of array: "<<Temp<<endl;
}
*/
