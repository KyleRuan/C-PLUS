//
//  Stack.h
//  kid
//
//  Created by Jason on 14/11/29.
//  Copyright (c) 2014年 Jason. All rights reserved.
//
#include <iostream>

struct customer{
    char fullname[35];
    double payment;
};
class Stack{

    static const int len=10;
    int top;
    double total;
    customer gust[len];
 
    
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const customer  & m_gust);
    bool pull(/*customer & m_gust*/);
};