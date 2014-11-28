//
//  SALES.h
//  kid
//
//  Created by Jason on 14/11/26.
//  Copyright (c) 2014年 Jason. All rights reserved.
//

namespace SALES {
    const int QUARTER=4;
    struct Sales{
        double sales[QUARTER];
        double average;
        double max;
        double min;
    };
    void setSales(Sales &s,const double ar[],int n);
    void setSales(Sales &s);
    void showSales(const Sales &s);
}

class stock{
private:
    static const int ruan=12;
    double cost[ruan];

};