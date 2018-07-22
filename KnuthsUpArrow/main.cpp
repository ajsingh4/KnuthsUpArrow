//
//  main.cpp
//  KnuthsUpArrow
//
//  Created by Aj Gill on 7/22/18.
//  Copyright © 2018 Aj Gill. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

//class Knuths{
//private:
//    int firstop, arrows, secondop;
//protected:
//public:
//    Knuths(int x, int y, int z){}
//
//    void setFirstOp(int x){
//        firstop = x;
//    }
//    void setArrows(int y){
//        arrows = y;
//    }
//    void setSecondOp(int z){
//        secondop = z;
//    }
//    int getFirstOp(){
//        return firstop;
//    }
//    int getArrows(){
//        return arrows;
//    }
//    int getSecondOp(){
//        return secondop;
//    }
//};

double Knuths(int x, int y, int z);

int main() {
    int firstop, arrows, secondop;
    cout << "Enter first operand, number of arrow operators, and second operand" << endl;
    cin >> firstop >> arrows >> secondop;
    cout << "Your Knuths output is " << Knuths(firstop, arrows, secondop) << endl;
}

// Basic implementation of 1 and 2 arrows
double Knuths(int x, int y, int z){
    if(y==1){
        return pow(x,z);
    }
    if(y==2){
        return pow(x,pow(x,z));
    }
    return 0;
}

