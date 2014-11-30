//
//  list.cpp
//  kid
//
//  Created by Jason on 14/11/29.
//  Copyright (c) 2014年 Jason. All rights reserved.
//

#include <stdio.h>
#include "list.h"
#include <iostream>

List:: List(int i){
    C=new Item(i);
   
}
List::~List(){
}

bool List:: isempty(){
    return top==0;

}

bool List:: isfull(){
    return N==top;
}
void List:: add(Item const it){
    * (C++)=it;
    top++;

}

void List:: visit(void(*f)(Item &)){
    f(*C);
}


