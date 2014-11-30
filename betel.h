//
//  betel.h
//  kid
//
//  Created by Jason on 14/11/29.
//  Copyright (c) 2014年 Jason. All rights reserved.
//

class Plorg{
    char name[19];
    int  CI;
public:
    Plorg(char p[]=(char *)"Plorga",int I=50);
    void setCI(const int a);
    void showPlorg() const;
};