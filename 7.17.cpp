//
//  subdivide.cpp
//  kid
//
//  Created by Jason on 14/11/18.
//  Copyright (c) 2014年 Jason. All rights reserved.
//

#include <stdio.h>
//
//  Kidd.cpp
//  kid
//
//  Created by Jason on 14/11/5.
//  Copyright (c) 2014年 Jason. All rights reserved.

//程序清单7.17

#include<iostream>
//const int len=66;
//const int divs=6;
void subdivide(char[],int,int,int);

/*int main(){
    using namespace std;
    char arr[len];
    arr[0]=arr[len-2]='|';
    arr[len-1]='\0';
    for (int i=1; i<len-3; i++) {
        arr[i]=' ';
    }
    int count=0;
    subdivide(arr, 0, len-2, 6);
    
    for (int i=0; i<len; i++) {
        cout<<arr[i];
        if (arr[i]=='|') {
            count++;
        }
    }
    
    cout<<count;
}*/


void subdivide(char arr1[],int begin,int end,int levels){
    if (levels==0) {
        return;
    }
    int mid= (begin+end)/2;
    arr1[mid]='|';
    subdivide(arr1,begin,mid,levels-1);
    subdivide(arr1,mid,end,levels-1);
    
}
