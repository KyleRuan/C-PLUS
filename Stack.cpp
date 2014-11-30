//
//  Stack.cpp
//  kid
//
//  Created by Jason on 14/11/29.
//  Copyright (c) 2014年 Jason. All rights reserved.
//

#include <stdio.h>
#include "Stack.h"
Stack:: Stack(){
    total=top=0;
    gust[top]={"no name",0};
}
bool Stack:: isempty() const{
    return top==0;

}
bool Stack::isfull() const{
  return top==len;
}


bool Stack::push(const  customer & m_gust){
    if (isfull())
        return 0;
    else
    gust[top++]=m_gust;
    return 1;
}
bool Stack:: pull(/*customer & m_gust*/){
    if (isempty()) {
        return 0;
    }
    else
        total+=gust[--top].payment;
    std::cout<<"total="<<total<<std::endl;
    return 1;

}
