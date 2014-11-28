//
//  golf.h
//  kid
//
//  Created by Jason on 14/11/25.
//  Copyright (c) 2014年 Jason. All rights reserved.
//

const int Len=40;
struct golf{
    char fullname[Len];
    int handicap;
};

void setgolf(golf &g, const char *name,int hc );

int setgolf(golf &g);


void handicap(golf &g ,int hc);

void showgolf(const golf & g);
