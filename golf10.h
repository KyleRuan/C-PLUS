//
//  golf10.h
//  kid
//
//  Created by Jason on 14/11/29.
//  Copyright (c) 2014年 Jason. All rights reserved.
//

class golf10{

    
   static const int Len=40;
    struct golf{
        char fullname[Len];
        int handicap;
    } player;
public:
    golf10();
    golf10(char *p,int n);
    int setgolf();
    void handicap(int hc);
    void showgolf() const;
};