//
//  SALES10.h
//  kid
//
//  Created by Jason on 14/11/29.
//  Copyright (c) 2014年 Jason. All rights reserved.
//

namespace sales10_dd {
    class SALES10{
        static const int QUARTER=4;
        struct Sales{
            double sales[QUARTER];
            double average;
            double max;
            double min;
        }s;
    public:
        SALES10();
        SALES10(double ar[],int n);
        //void setSales(Sales &s,const double ar[],int n);
         void setSales();
        void showSales() const;
    };
    
}
