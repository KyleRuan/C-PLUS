//
//  MOVE.h
//  kid
//
//  Created by Jason on 14/11/29.
//  Copyright (c) 2014年 Jason. All rights reserved.
//

class Move{
private:
    double x;
    double y;
public:
    Move(double a=0,double b=0);
    void showmove();
    Move add(const Move &m) const;
    void reset(double a=0,double b=0);

};

