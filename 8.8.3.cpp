//
//  8.8.3.cpp
//  kid
//
//  Created by Jason on 11/22/14.
//  Copyright (c) 2014 Jason. All rights reserved.
//
/*
#include <stdio.h>
#include<iostream>
#include <string>
#include <cctype>
void to_upper(std::string & str);
int main(){
    using std::cout;
    cout<<"Enter a string (q to quit)";
    std::string str;
    using std::cin;
    while (getline(cin,str)&&str!="q") {
        to_upper(str);
         std::cout<<str<<"\n";
         cout<<"Next string (q to quit)";
    }
    
}

void to_upper(std::string & str){
    std::string temp;
    for (int i=0; i<str.length(); i++) {
       temp+=toupper(str[i]);//字符处理，函数
    }
    str=temp;
}
*/