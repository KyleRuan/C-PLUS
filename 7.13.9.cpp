//
//  7.13.9.cpp
//  kid
//
//  Created by Jason on 14/11/19.
//  Copyright (c) 2014年 Jason. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>

using namespace std;
const int SLEN=30;
struct student{
    char fullname[SLEN];
    char Hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[],int n);
void display1(student st);
void display2(const student *ps);
void display3(const student pa[],int n);

int main(){
cout<<"Enter class size:";
    int class_size;
    cin>>class_size;
    while (cin.get()!='\n') {
        continue;
    }
    student * ptr_stu=new student[class_size];
    int entered=getinfo(ptr_stu, class_size);
    for (int i=0; i<entered; i++) {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout<<"Done\n";
    return 0;
}
int getinfo(student p[],int arrSize){
    int i=0;
    cout<<"enter your fullname: ";
    for (;i<arrSize&&cin.get(p[i].fullname, SLEN); i++) {
        if (p[i].fullname[0]=='\n') {
            break;
        }
        cout<<"enter hobby and ooplevel";
        cin>>p[i].Hobby;
        cin>>p[i].ooplevel;
        cin.get();
         cout<<"enter your fullname: ";
    }
    return i;
}

void display1(student st){

    cout<<st.fullname<<" has hobby : "<<st.Hobby<<" and ooplevels: "<<st.ooplevel<<"display1"<<endl;

}
void display2(const student *ps){
    cout<<ps->fullname<<" has hobby : "<<ps->Hobby<<" and ooplevels: "<<ps->ooplevel<<"display2"<<endl;


}
void display3(const student pa[],int n){

    for (int i=0; i<n; i++) {
        cout<<pa[i].fullname<<" has hobby : "<<pa[i].Hobby<<" and ooplevels: "<<pa[i].ooplevel<<"display3"<<endl;
    }

}
*/
