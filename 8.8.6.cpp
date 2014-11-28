//
//  8.8.6.cpp
//  kid
//
//  Created by Jason on 14/11/25.
//  Copyright (c) 2014年 Jason. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <ctype.h>
template <class T>
T maxn(T arr[],int arrSize){
    T max=arr[0];
    for (int i=1; i<arrSize; i++)
        if (arr[i]>max)
            max=arr[i];
    return max;
}
template<>  char * maxn<char *>(char * arr[],int arrSize){
    char * max=arr[0];
    for (int i=1; i<arrSize; i++) {
        if (strlen(arr[i])>strlen(max))
            max=arr[i];
    }
    return max;
}

int main(){
    int arr_int[]{12,13,18,1,2,6};
    double arr_double[]{18.4,12.4,20.9,0.99};
const char * arr_char[]{"ni hao","wo de hao","shi de wo shtian cai","nima"};
    std::cout<<(void *) maxn(arr_char,sizeof(arr_char)/sizeof(arr_char[0]))<<std::endl;
    std::cout<<maxn(arr_int,sizeof(arr_int)/sizeof(arr_int[0]))<<std::endl;
    std::cout<<maxn(arr_double, sizeof(arr_double)/sizeof(arr_double[0]))<<std::endl;
}
 */
