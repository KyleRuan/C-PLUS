//
//  Kidd.cpp
//  kid
//
//  Created by Jason on 14/11/5.
//  Copyright (c) 2014年 Jason. All rights reserved.

//5.9.5
#include<iostream>
int main()
{ using namespace std;
    const char* months[12] = { "January", "February", "March", "April",
        "May", "June", "July", "August","September", "October", "November", "December"};

    int salesnumber[3][12], sum[3] = {0};
    for (int j=0; j<=2; j++) {
         cout << "the "<<j+1<<" year\n";
        for (int i = 0; i < 12; i++)
        {
            cout << "Please input the " << *(months + i) << " sales numbers:"<< endl;
            cin >> salesnumber[j][i];
            cin.get();
            sum[j] += salesnumber[j][i];
        }
        
            }
    
    for (x:sum) {
        cout << "The total sales number of this year is " << x<< endl;
    }
    

    cout<<"the total sales number of three years:"<<sum[0]+sum[2]+sum[1];
    
}

