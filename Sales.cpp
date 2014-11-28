//
//  Sales.cpp
//  kid
//
//  Created by Jason on 14/11/26.
//  Copyright (c) 2014年 Jason. All rights reserved.
//

#include <stdio.h>
#include "SALES.h"
#include <iostream>
namespace SALES{
void setSales( SALES :: Sales &s,const double ar[],int n)
{     double sum=0;
    if (n!=4)
        for (int i=n; i<SALES::QUARTER; i++)
            s.sales[i]=0;
    s.min=s.max=ar[0];
    for (int i=0; i<n; i++){
        s.sales[i]=ar[i];
        sum+=ar[i];
        if (ar[i]>s.max)
            s.max=ar[i];
        
        else if(ar[i]<s.min)
            s.min=ar[i];
    }
    
    s.average=sum/SALES::QUARTER;
}
void showSales(const SALES::Sales &s)
{    using std::cout;
    cout<<"Here are sales: \n";
    for (int i=0; i<SALES::QUARTER;i++) {
        cout<<s.sales[i]<<"\t";
    }
    cout<<"\nmax sales is : "<<s.max<<std::endl;
    cout<<"min sales is : "<<s.min<<std::endl;
    cout<<"average sales is : "<<s.average;
    
    }


void setSales(SALES:: Sales &s){
    using namespace std;
     double sum=0;
    cout<<"Enter the sales:";
    for (int i=0; i<SALES::QUARTER; i++) {
       cin>>s.sales[i];
    cout<<"Enter the  next sales:";
        sum+=s.sales[i];
    }
    s.min=s.max=s.sales[0];
    for (int i=1; i<SALES::QUARTER; i++){
        if (s.sales[i]>s.max)
            s.max=s.sales[i];
        else if(s.sales[i]<s.min)
            s.min=s.sales[i];
    }
    s.average=sum/SALES::QUARTER;
    
}
}