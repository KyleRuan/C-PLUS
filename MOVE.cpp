//
//  MOVE.cpp
//  kid
//
//  Created by Jason on 14/11/29.
//  Copyright (c) 2014年 Jason. All rights reserved.
//

#include <stdio.h>
#include "MOVE.h"
#include <iostream>
Move:: Move(double a,double b){
    x=a;
    y=b;
}
void Move::showmove(){
    std::cout<<"(x,y)=("<<x<<","<<y<<")"<<std::endl;

}
Move Move ::add(const Move &m) const{
    return Move(x+m.x,y+m.y);
    
}
void Move:: reset(double a,double b){
    x=a;
    y=b;
}