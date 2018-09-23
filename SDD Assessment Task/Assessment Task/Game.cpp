//
//  Game.cpp
//  Assessment Task
//
//  Created by  on 20/02/2017.
//  Copyright (c) 2017 Kyle Walker. All rights reserved.
//

#include "Game.h"
#include <iostream>
#include <stdio.h>
#include <iomanip>

//used for calculator sqrt() to find square root of a number
#include <math.h>

//used for random number generators (pretty sure no longer used)
#include <random>

//used to find the time (used to generate a random seed)
#include <time.h>
#include <ctime>

// used for rock game
#include <unistd.h>

//removes the need for "std::"
using namespace std;


int main(){
    int PLAY;
    
    cout << "Welcome to THE GAME \nWould you like to play? (Y/N)";
    cin >> PLAY;
    
    if (PLAY == 'Y') {
        cout << "1";
    }
    else {
        cout << "2";
    }
}
