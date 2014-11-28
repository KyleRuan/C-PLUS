//
//  9.6.2.cpp
//  kid
//
//  Created by Jason on 14/11/25.
//  Copyright (c) 2014年 Jason. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <string>
void strcout(const std::string str);
int main(){
    using namespace std;
    string input;
    cout<<"Enter a line:\n";
    getline(cin, input);
    while (input!=" ") {  // blank
        strcout(input);
        cout<<"Enter next line(empty to quit):\n";
        getline(cin,input);
    }
    cout<<"Bye\n";

}
void strcout(const std::string str){

    using namespace std;
    static int total=0;
    int count=0;
    cout<<"\""<<str<<"\" contains ";
    for (int i=0;i<str.length(); i++) {
        if (str[i]!=' ') {
            count++;
        }
    }
    total +=count;
    cout<<count<<" characters \n";
    cout<<total<<" characters total \n";
}

*/
