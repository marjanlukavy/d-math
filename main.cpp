//
//  main.cpp
//  learn cpp
//
//  Created by Marjan Lukavyi on 9/14/19.
//  Copyright © 2019 Marjan Lukavyi. All rights reserved.
//
#include <iostream>
using namespace std;

int main() {
    
    int x,y,z,first,second,third,fourth,fifth;
    cout << "Enter x value \n";
        cin >> x;
 
    cout << "Enter y value \n";
        cin >> y;

    cout << "Enter z value \n";
        cin >> z;
   
    if(x+z+y <= 3 && x+z+y >=0) {
        if(x == 1 && y == 0) {
            first = 0;
    //        if(z == 0) {
    //            fourth = 0;
    //        } else {
    //            fourth = 1;
    //        }
        } else {
            first = 1;
        }
        if(y == 1 && z == 0) {
            second = 0;
    //        if(x == 1) {
    //            fourth = 0;
    //        } else {
    //            fourth = 1;
    //        }
        } else {
            second = 1;
        }
        if(second == first ) {
            third = 1;
        } else {
            third = 0;
        }
        
        if(x == 1 && z == 0) {
            fourth = 0;
        } else {
            fourth = 1;
        }
        
        if(third == 1 && second == 0) {
            fifth = 0;
        } else {
            fifth = 1;
        }
        cout << "x" << ' ' << "y" << ' ' << "z" << ' ' << (1) << ' ' << (2) << ' ' << (3) << ' ' << (4) << ' ' << (5) <<"\n";
        
        cout << x << ' ' << y << ' ' << z << ' ' << first << ' ' << second << ' ' << third << ' ' << fourth << ' ' << fifth <<"\n";
    } else {
        cout << "Only 1 or 0\n";
    }

    return 0;
}
    
