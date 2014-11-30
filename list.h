//
//  list.h
//  kid
//
//  Created by Jason on 14/11/29.
//  Copyright (c) 2014年 Jason. All rights reserved.
//

#include <iostream>
typedef double Item;
class List{
     static const int N=10;
    int top;
    Item *C;
public:
    List(int n=0);
    ~List();
    bool isempty();
    bool isfull();
   void add(Item const it);
    void visit(void(*f)(Item &));
};
