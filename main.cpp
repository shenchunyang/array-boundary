//
//  main.cpp
//  array boundary
//
//  Created by ry耷拉拉星球 on 15/12/3.
//  Copyright (c) 2015年 ry耷拉拉星球. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[4];
    int b[5];
    a[0]=12;
    a[1]=15;
    a[2]=25;
    a[3]=55;
    b[0]=2;
    b[1]=3;
    b[2]=4;
    b[3]=5;
    b[4]=6;
    printf(" a[0]=%d b[0]=%d a[1]=%d b[1]=%d a[2]=%d b[2]=%d  a[3]=%d b[3]=%d ",a[0],b[0],a[1],b[1],a[2],b[2],a[3],b[3]);
    printf("&a[0]=%x &a[1]=%x &a[2]=%x &a[3]=%x &b[0]=%x &b[1]=%x &b[2]=%x &b[3]=%x &b[4]=%x\n",&a[0],&a[1],&a[2],&a[3],&b[0],&b[1],&b[2],&b[3],&b[4]);
    
           
    return 0;
}
