//
//  SALES10.cpp
//  kid
//
//  Created by Jason on 14/11/29.
//  Copyright (c) 2014年 Jason. All rights reserved.
//

#include <stdio.h>
#include "SALES10.h"
#include <iostream>
namespace sales10_dd{
//using namespace sales10_dd;
    SALES10:: SALES10(double ar[],int n)
    {     double sum=0;
        if (n!=4)
            for (int i=n; i<QUARTER; i++)
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
        
        s.average=sum/QUARTER;
    }
    SALES10:: SALES10(){
        setSales();
    }
    
    
    void  SALES10:: showSales()const
    {    using std::cout;
        cout<<"Here are sales: \n";
        for (int i=0; i<SALES10::QUARTER;i++) {
            cout<<s.sales[i]<<"\t";
        }
        cout<<"\nmax sales is : "<<s.max<<std::endl;
        cout<<"min sales is : "<<s.min<<std::endl;
        cout<<"average sales is : "<<s.average<<std::endl;
        
    }
    
    
   void  SALES10:: setSales(){
        using namespace std;
        double sum=0;
        for (int i=0; i<SALES10::QUARTER; i++) {
            cout<<"Enter the  sales:";
            cin>>s.sales[i];
            sum+=s.sales[i];
        }
        s.min=s.max=s.sales[0];
        for (int i=1; i<SALES10::QUARTER; i++){
            if (s.sales[i]>s.max)
                s.max=s.sales[i];
            else if(s.sales[i]<s.min)
                s.min=s.sales[i];
        }
        s.average=sum/SALES10::QUARTER;
        
    }

}