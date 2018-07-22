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

int Knuths(int x, int y, int z);

int main() {
    int firstop, arrows, secondop;
    cout << "Enter first operand, number of arrow operators, and second operand" << endl;
    cin >> firstop >> arrows >> secondop;
    cout << "Your Knuths output is " << Knuths(firstop, arrows, secondop) << endl;
}

// Knuths using base case and recursion
int Knuths(int x, int y, int z){
    if(y==1){
        return pow(x,z);
    }
    else{
        return pow(x,Knuths(x, y-1, z));
    }
}

