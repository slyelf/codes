//
//  main.cpp
//  Assessment Task
//
//  Created by Kyle Walker on 20/07/2016.
//  Copyright (c) 2016. All rights reserved.
//



/*
 Information regarding Assessment task
 
 
 *23/7/2016*
 This program is a combination of 6 subprograms referred to through the use of SUBROUTINES. BOOLEAN EXPRESSIONS are used throughout the program in order to find the users input and perform calculations on it. ITERATION is used through WHILE statements which are used to test if the user wishes a part of the program to run. ITERATION is mostly used for navigation through the SUBROUTINES through the form of testing if the user wishes to stay in a certain SUB PROGRAM.
 
 At this time ARRAYS are the only PRACTICAL REQUIRMENT missing.
 This could be easily solved by changing various variables to be arrays that serve the same purpose. This however I find to not be as exciting and interesting.
 */





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



// ************
// MAIN PROGRAM
// ************

// INCLUDES
// a: Calculator
// b: Income Calculator for Wage Earners
// c: BMI
// d: Compond Interest Calc
// e: Mulitplication tables
// f: Die roller
int main() {
    //Declaring subroutines
    void calc();
    void income();
    void bmi();
    void compound();
    void multiply();
    void die();
    void memes();
    void rockgame();
    void rockpaperscissors(int*q, int*w, int*t, int*l);
    void bodies();
    void pay();
    void restraunt();
    
    //Setting SCORE for Rock paper scissors to 0
    int PLAYED = 0;
    int WINS = 0, TIES = 0, LOSES = 0;
    
    //Declaring run as a variable which is used to test if the user wants the program to run
    char run;
    //Tests to see if user wishes to use program. Also used to return to the selection
    cout << "*** RUN PROGRAM *** y/n: ";
    
    cin >> run;
    
    cout << endl;
    
    //First use of a PRE-TEST LOOP
    while (run == 'y') {
        char ch;
        
        //Selection of programs for the user
        cout << "What would you like to do?";
        cout << endl;
        cout << "╔═══╦═══════════════════╦═══╦═══════════════════════╦═══╦═════════════════╗" << endl << "║ a ╠═Calculator        ║ b ╠═Income                ║ c ╠═bmi             ║" << endl << "║ d ╠═Compound Interest ║ e ╠═Multiplication tables ║ f ╠═die roller      ║" << endl << "║ g ╠═RockPaperScissors ║ h ╠═Rock Game             ║ i ╠═Wage Calculator ║" << endl << "╚═══╩═══════════════════╩═══╩═══════════════════════╩═══╩═════════════════╝\n\n";
        cout << endl << "Secrets:\n╔═══╦═══════════════════╦═══╦═══════════════════════╗" << endl << "║ y ╠═Restraunt         ║ z ╠═Bodies                ║" << endl << "╚═══╩═══════════════════╩═══╩═══════════════════════╝\n\n";
        
        
        cout << "╔═══ Enter letter corresponding to desired program" << endl << "╚═ ";
        
        cin >> ch;
        
        
        //First use of BOOLEAN EXPRESSIONS [IF] (excluding while)
        //Send user to desired program through subroutines
        if (ch == 'a') {
            cout << endl;
            calc();
        }
        
        if (ch ==  'b') {
            cout << endl;
            income();
        }
        
        if (ch == 'c') {
            cout << endl;
            bmi();
        }
        
        if (ch == 'd') {
            cout << endl;
            compound();
        }
        
        if (ch == 'e') {
            cout << endl;
            multiply();
        }
        
        if (ch == 'f') {
            cout << endl;
            die();
        }
        if (ch == 'g') {
            cout << endl;
            rockpaperscissors(&PLAYED, &WINS, &TIES, &LOSES);
        }
        if (ch == 'h') {
            cout << endl;
            rockgame();
        }
        if (ch == 'i') {
            cout << endl;
            pay();
        }
        if (ch == 'y') {
            cout << endl;
            restraunt();
        }
        //secret
        if (ch == 'z') {
            cout << endl;
            bodies();
        }
        //ERROR if unsupported letter is not pressed
        else {
            cout << "\n*******************\nERROR: Unsupported\n*******************\n\n";
            continue;
        }
        
        cout << endl;
        // Retests to see if user still wishes to use Program
        cout << "*** RUN PROGRAM *** y/n: ";
        
        cin >> run;
        
        cout << endl;
        
        //sends to top of WHILE loop
        continue;
    }
    while (run != 'y') {
        main();
    }
    
    return 0;
}



// **********
// CALCULATOR
// **********

// CAN CALCULATE
// * Multiplication
// / Division
// + Addition
// - Subtraction
// ^ Powers
// % Square Root
void calc() {
    
    //declared variables (use of array)
    int num[2], ans;
    char op;
    
    // Gather information from user to calculate
    // It's worth noting that the equation can be entered in one line
    // Also if a larger equation is entered it only calculates the first and second number
    // Negatives also work however decimals and scientific notation do not
    cout << endl;
    cout << "Enter your first number: ";
    cin >> num[0];
    cout << "Enter opertator: ";
    cin >> op;
    cout << "Enter your second number: ";
    cin >> num[1];
    
    // Addition
    if (op == '+') {
        ans = num[0] + num[1];
        cout << endl;
        cout << "answer: " << ans;
        cout << endl;
        cout << endl;
    }
    
    // Subtraction
    if (op == '-') {
        ans = num[0] - num[1];
        cout << endl;
        cout << "answer: " << ans;
        cout << endl;
        cout << endl;
        
    }
    
    // Division
    if (op == '/') {
        ans = num[0] / num[1];
        cout << endl;
        cout << "answer: " << ans;
        cout << endl;
        cout << endl;
    }
    
    // Multiplication
    if (op == '*') {
        ans = num[0] * num[1];
        cout << endl;
        cout << "answer: " << ans;
        cout << endl;
        cout << endl;
    }
    
    // Multiplication
    if (op == 'x') {
        ans = num[0] * num[1];
        cout << endl;
        cout << "answer: " << ans;
        cout << endl;
        cout << endl;
    }
    
    // Indicies
    if (op == '^') {
        int ans = 1;
        while (num[1]) {
            if (num[1] & 1)
                ans *= num[0];
            num[1] >>= 1;
            num[0] *= num[0];
        }
        cout << endl;
        cout << "answer: " << ans;
        cout << endl;
        cout << endl;
    }
    
    // Roots
    if (op == '%') {
        ans = sqrt(num[0]);
        cout << endl;
        cout << "answer: " << ans;
        cout << endl;
        cout << endl;
    }
    else {
        main();
    }
}



// ******
// INCOME
// ******

// Works out wage earners income by multiplying hourly rate by hours worked
// If worked more than what earns more than 18000 a year (worthy of a tax)
// A 10% deduction is reduced from the income and displayed
void income() {
    //declaring variables
    int RATE, HOURS, INCOME, TAX, TAXABLE;
    
    // Just like calculator, the equation can be done in one line by using spaces
    // Also like the calculator decimals and scientific notation do not work unlike negatives which do
    cout << endl;
    cout << "Enter your hourly rate: ";
    cin >> RATE;
    cout << "Enter the amount of hours worked (weekly): ";
    cin >> HOURS;
    //Setting income to be the net income and tax to 0
    INCOME = HOURS * RATE;
    TAX = 0;
    TAXABLE = 0;
    
    
    // Calculates whether or not to apply tax
    
    // The tax is based on Australian Resident Tax Rates 2014-2015/2016/2017
    // Each wage bracket is divided by 52 to make it weekly
    // Each dollar is rounded up in order to get a rebate
    
    // $18201 - $37000 a year  | 19c for each dollar over $18200
    if (INCOME >= 350 && INCOME < 712) {
        TAXABLE = INCOME - 350;
        TAX = TAXABLE * 0.19;
    }
    // $37001 - $80000 a year  | 32.5c for each dollar over $37000 + $3572
    if (INCOME >= 712 && INCOME < 1539) {
        TAXABLE = INCOME - 712;
        TAX = TAXABLE * 0.325 + 69;
    }
    // $80001 - $180000 a year | 37c for each dollar over $80000 + $17547
    if (INCOME >= 1539 && INCOME < 3462) {
        TAXABLE = INCOME - 1539;
        TAX = TAXABLE * 0.37 + 338;
    }
    //     $180001 + a year    | 45c for each dollar over $180000 + $54547
    if (INCOME >= 3462) {
        TAXABLE = INCOME - 3462;
        TAX = TAXABLE * 0.45 + 1049;
    }
    
    
    cout << endl;
    
    // GROSS INCOME Without Tax
    cout << "Total Gross Income ($): " << INCOME << endl;
    // NET INCOME With Tax
    cout << "Total Net Income ($): " << INCOME - TAX << endl;
    // Tax
    cout << "Total Tax applied ($): " << TAX << endl;
    
    cout << endl;
    cout << endl;
}

// ***
// BMI
// ***

// Body Mass Index
// Used to find what category a person fits into in terms of their body mass
// The equation is weight (kg) ÷ height (m) ÷ height (m)

// The equation may look confusing here but this is only to avoid using decimals thus everything is multiplied by 10
void bmi() {
    int HEIGHT, WEIGHT, BMI;
    cout << "Enter your heigh in cm: ";
    cin >> HEIGHT;
    cout << "Enter your weight in kg: ";
    cin >> WEIGHT;
    
    // Divided by 10 instead of 100 in order to avoid decimals thus weight is multiplied by 10
    HEIGHT = HEIGHT / 10;
    WEIGHT = WEIGHT * 10;
    
    // BMI is multiplied by 10 before dividing again to avoid decimals also doubles up as a form of rounding down
    BMI = WEIGHT / HEIGHT;
    BMI = BMI * 10;
    BMI = BMI / HEIGHT;
    
    
    // BMI is grouped into 4 categories
    // Below 18.5 : Underweight
    // 18.5 - 24.9 : Average
    // 25.0 - 29.9 : Overweight
    // 30 and above : Obese
    
    cout << ::endl;
    cout << "Your BMI is: " << BMI << endl << endl;
    cout << "How to read your BMI: " << endl;
    cout << "Below 18.5 : Underweight" << endl;
    cout << "18.5 - 24.9 : Average" << endl;
    cout << "25.0 - 29.9 : Overweight" << endl;
    cout << "30 and above : Obese" << endl << endl;
    
    main();
}


// ****************************
// COMPOUNG INTEREST CALCULATOR
// ****************************

// Compound interest is used to save money
// Compound interest unlike simple interest because it increases the amount gained each time due to the increase of money
void compound() {
    // First use of double which is used to allow decimals
    double PRINCIPAL;
    double INTEREST_RATE;
    double COMPOUND_AMOUNT;
    
    
    cout << "What is your savings account balance?: " << endl;
    cin >> PRINCIPAL;
    cout << "What is your annual interest rate? (in %): " << endl;
    cin >> INTEREST_RATE;
    // INTEREST_RATE is divided by 100 to make it into a decimal
    INTEREST_RATE /= 100;
    cout << "How many times has your interest been compounded?: " << endl;
    cin >> COMPOUND_AMOUNT;
    
    // By creating the double here as well as performing the calculation saves on code and hardware usage although that won't make a difference in this case
    double amt1 = 1 + (INTEREST_RATE);
    double AMOUNT = PRINCIPAL * pow(amt1, COMPOUND_AMOUNT);
    
    // Outputs the interest to the user
    cout << "Interest Rate (%): " << INTEREST_RATE * 100 << endl;
    cout << "Times Compounded: " << COMPOUND_AMOUNT << endl;
    cout << "Principal ($): " << PRINCIPAL << endl;
    cout << "Interest ($): " << AMOUNT - PRINCIPAL << endl;
    cout << "Amount ($): " << AMOUNT << endl << endl;
    
    main();
}

// *********************
// MULTIPLICATION TABLES
// *********************

// Simple program used to find multiples
// Probably should've and could've been integrated into calculator
void multiply() {
    int NUMBER1, NUMBER2, VARIABLE;
    cout << "Enter the number which you wish to Multiply: ";
    cin >> NUMBER1;
    cout << "Enter how many you wish to multiply to: ";
    cin >> VARIABLE;
    // VARIABLE increased by 1 so the number won't stop before the desired number due to the < sign in the for loop
    VARIABLE += 1;
    for (NUMBER2=1;NUMBER2<VARIABLE;NUMBER2++) {
        cout << NUMBER2 << " : " << NUMBER1 * NUMBER2 << endl;
    }
    
    main();
}



// **********
// DIE ROLLER
// **********

// Can get a random number between choice of user and 1
// Is able to roll as many dice as user chooses.
void die() {
    //declare variables
    char ROLL;
    int DICE, TOTAL, COUNT, FINAL, FACES;
    TOTAL = 0;
    cout << endl << "Do you wish to Roll a dice?: y/n: ";
    cin >> ROLL;
    
    //While user wants to roll a dice
    while (ROLL == 'y') {
        cout << "How many side on each die?: ";
        cin >> FACES;
        
        //While is used twice so the sides is only asked once
        while (ROLL == 'y') {
            cout << "How many dice do you wish to roll?: (0 to stop)";
            TOTAL = 0;
            cin >> DICE;
            
            //If no dice user doesn't want to roll dice anymore
            if (DICE == 0) {
                ROLL = 'n';
                die();
            }
            
            
            // Sets the ability to generate numbers
            //#include <time.h> & <ctime> needed
            // Only an error because it believes another integer "time_t" is better than time which is not better for what I'm using time for.
            srand(time(NULL));
            
            
            
            for (COUNT=0; COUNT<DICE; COUNT++) {
                //Generates a number between users choice (FACES) and stores it (FINAL)
                FINAL = rand() %FACES + 1;
                
                //Adds the random number to the final in order to quickly add all dice
                TOTAL = TOTAL + FINAL;
                cout << FINAL << " " << COUNT + 1 << endl;
            }
            cout << "The total is: " << TOTAL << endl << endl;
        }
        
        //If roll anything but Y return to main program
        if (ROLL != 'y') {
            main();
        }
    }
}


// ********
// ROCKGAME
// ********

void rockgame() {
    char GAME;
    int CHOICE;
    //cout << endl << "Would you like to place the rock game? y/n: " << endl;
    //cin >> GAME;
    
    // test if user wants to play
    //if (GAME == 'y') {
    cout << "Stone is making movments";
    usleep(500000);
    
    
    
    cout << "\n\nNOTE: " << endl << "Left = 1" << endl << "Middle = 2" << endl << "Right = 3" << endl << endl;
    // Randoms STONE location
    srand(time(NULL));
    int STONE = rand() %3 + 1;
    
    
    // If stone under the first(1) cup
    if (STONE == 1) {
        srand(time(NULL));
        int MOVEMENT = rand() %2;
        
        
        // Stone Left to Left
        if (MOVEMENT == 0) {
            STONE = 1;
            
            // Correct or Wrong LEFT
            cout << "Make your selection: " << endl;
            cin >> CHOICE;
            
            if (CHOICE == '1' or CHOICE == 2) {
                cout << "Correct. Good Job" << endl;
                cout << "The stone was located under cup: " << STONE << endl;
                main();
            }
            
            else {
                cout << "Incorrect. Bad Luck" << endl;
                cout << "The stone was located under cup: " << STONE << endl;
                main();
            }
        }
        
        
        // Stone Left to Middle
        if (MOVEMENT == 1) {
            STONE = 2;
            
            // Correct or Wrong MIDDLE
            cout << "Make your selection: " << endl;
            cin >> CHOICE;
            
            if (CHOICE == '2' or CHOICE == 2) {
                cout << "Correct. Good Job" << endl;
                cout << "The stone was located under cup: " << STONE << endl;
                main();
            }
            
            else {
                cout << "Incorrect. Bad Luck" << endl;
                cout << "The stone was located under cup: " << STONE << endl;
                main();
            }
        }
    }
    
    // Second(2) Cup
    if (STONE == 2) {
        srand(time(NULL));
        int MOVEMENT = rand() %3;
        
        // Stone Middle to Middle
        if (MOVEMENT == 0) {
            STONE = 2;
            
            // Correct or Wrong MIDDLE
            cout << "Make your selection: " << endl;
            cin >> CHOICE;
            
            if (CHOICE == '2' or CHOICE == 2) {
                cout << "Correct. Good Job" << endl;
                cout << "The stone was located under cup: " << STONE << endl;
                main();
            }
            
            else {
                cout << "Incorrect. Bad Luck" << endl;
                cout << "The stone was located under cup: " << STONE << endl;
                main();
            }
        }
        
        // Stone Middle to Right
        if (MOVEMENT == 1) {
            STONE = 3;
            
            // Correct or Wrong RIGHT
            cout << "Make your selection: " << endl;
            cin >> CHOICE;
            
            if (CHOICE == '3' or CHOICE == 3) {
                cout << "Correct. Good Job" << endl;
                cout << "The stone was located under cup: " << STONE << endl;
                main();
            }
            
            else {
                cout << "Incorrect. Bad Luck" << endl;
                cout << "The stone was located under cup: " << STONE << endl;
                main();
            }
        }
        
        // Stone Middle to Left
        if (MOVEMENT == 2) {
            STONE = 1;
            
            // Correct or Wrong LEFT
            cout << "Make your selection: " << endl;
            cin >> CHOICE;
            
            if (CHOICE == '1' or CHOICE == 1) {
                cout << "Correct. Good Job" << endl;
                cout << "The stone was located under cup: " << STONE << endl;
                main();
            }
            
            else {
                cout << "Incorrect. Bad Luck" << endl;
                cout << "The stone was located under cup: " << STONE << endl;
                main();
            }
        }
    }
    
    // Third(3) Cup
    if (STONE == 3) {
        srand(time(NULL));
        int MOVEMENT = rand() %2;
        
        // Stone Right to Right
        if (MOVEMENT == 0) {
            STONE = 3;
            
            // Correct or Wrong RIGHT
            cout << "Make your selection: " << endl;
            cin >> CHOICE;
            
            if (CHOICE == '3' or CHOICE == 3) {
                cout << "Correct. Good Job" << endl;
                cout << "The stone was located under cup: " << STONE << endl;
                main();
            }
            
            else {
                cout << "Incorrect. Bad Luck" << endl;
                cout << "The stone was located under cup: " << STONE << endl;
                main();
            }
        }
        
        // Stone Right to Middle
        if (MOVEMENT == 1) {
            STONE = 2;
            
            // Correct or Wrong MIDDLE
            cout << "Make your selection: " << endl;
            cin >> CHOICE;
            
            if (CHOICE == '2' or CHOICE == 2) {
                cout << "Correct. Good Job" << endl;
                cout << "The stone was located under cup: " << STONE << endl;
                main();
            }
            
            else {
                cout << "Incorrect. Bad Luck" << endl;
                cout << "The stone was located under cup: " << STONE << endl;
                main();
            }
        }
    }
    //}
}

// *******************
// ROCK PAPER SCISSORS
// *******************

void rockpaperscissors(int*q, int*w, int*t, int*l) {
    char CHOICE, AGAIN;
    int PLAYED;
    int WINS, TIES, LOSES;
    
    PLAYED = *q;
    
    if (PLAYED == 0) {
        WINS = 0;
        TIES = 0;
        LOSES = 0;
    }
    
    if (PLAYED == 1) {
        WINS = *w;
        TIES = *t;
        LOSES = *l;
    }
    
    cout << "Welcome to Rock Paper Scissors: " << endl;
    cout << "Please make your selection" << endl << "(r)ock, (p)aper, (s)cissors" << endl;
    cin >> CHOICE;
    
    srand(time(NULL));
    int CPU = rand() %3 + 1;
    // 1 = ROCK
    // 2 = PAPER
    // 3 == SCISSORS
    
    
    // PLAYER ROCK
    if (CHOICE == 'r') {
        
        // CPU ROCK
        if (CPU == 1) {
            cout << endl;
            cout << "CPU Chose: ROCK" << endl;
            cout << "It's a draw" << endl;
            TIES += 1;
            cout << endl << "WINS: " << WINS << endl << "TIES: " << TIES << endl << "LOSES: " << LOSES << endl << endl;
            
            // Does USER want to play again
            cout << endl << "Do you want to play again? y/n: " << endl;
            cin >> AGAIN;
            
            // YES
            if (AGAIN == 'y') {
                int PLAYED = 1;
                rockpaperscissors(&PLAYED, &WINS, &TIES, &LOSES);
            }
            
            // NO
            else {
                PLAYED = 1;
                main();
            }
        }
        // CPU PAPER
        if (CPU == 2) {
            cout << endl;
            cout << "CPU Chose: PAPER" << endl;
            cout << "You lose" << endl;
            LOSES += 1;
            cout << endl << "WINS: " << WINS << endl << "TIES: " << TIES << endl << "LOSES: " << LOSES << endl << endl;
            
            // Does USER want to play again
            cout << endl << "Do you want to play again? y/n: " << endl;
            cin >> AGAIN;
            
            // YES
            if (AGAIN == 'y') {
                int PLAYED = 1;
                rockpaperscissors(&PLAYED, &WINS, &TIES, &LOSES);
            }
            
            // NO
            else {
                PLAYED = 1;
                main();
            }
        }
        // CPU SCISSORS
        if (CPU == 3) {
            cout << endl;
            cout << "CPU Chose: SCISSORS" << endl;
            cout << "You win" << endl;
            WINS += 1;
            cout << endl << "WINS: " << WINS << endl << "TIES: " << TIES << endl << "LOSES: " << LOSES << endl << endl;
            
            // Does USER want to play again
            cout << endl << "Do you want to play again? y/n: " << endl;
            cin >> AGAIN;
            
            // YES
            if (AGAIN == 'y') {
                PLAYED = 1;
                rockpaperscissors(&PLAYED, &WINS, &TIES, &LOSES);
            }
            
            // NO
            else {
                PLAYED = 1;
                main();
            }
        }
    }
    
    // PLAYER PAPER
    if (CHOICE == 'p') {
        
        // CPU ROCK
        if (CPU == 1) {
            cout << endl;
            cout << "CPU Chose: ROCK" << endl;
            cout << "You WIN" << endl;
            WINS += 1;
            cout << endl << "WINS: " << WINS << endl << "TIES: " << TIES << endl << "LOSES: " << LOSES << endl << endl;
            
            // Does USER want to play again
            cout << endl << "Do you want to play again? y/n: " << endl;
            cin >> AGAIN;
            
            // YES
            if (AGAIN == 'y') {
                PLAYED = 1;
                rockpaperscissors(&PLAYED, &WINS, &TIES, &LOSES);
            }
            
            // NO
            else {
                PLAYED = 1;
                main();
            }
            
        }
        // CPU PAPER
        if (CPU == 2) {
            cout << endl;
            cout << "CPU Chose: PAPER" << endl;
            cout << "It's a draw" << endl;
            TIES += 1;
            cout << endl << "WINS: " << WINS << endl << "TIES: " << TIES << endl << "LOSES: " << LOSES << endl << endl;
            
            // Does USER want to play again
            cout << endl << "Do you want to play again? y/n: " << endl;
            cin >> AGAIN;
            
            // YES
            if (AGAIN == 'y') {
                PLAYED = 1;
                rockpaperscissors(&PLAYED, &WINS, &TIES, &LOSES);
            }
            
            // NO
            else {
                PLAYED = 1;
                main();
            }
        }
        // CPU SCISSORS
        if (CPU == 3) {
            cout << endl;
            cout << "CPU Chose: SCISSORS" << endl;
            cout << "You LOSE" << endl;
            LOSES += 1;
            cout << endl << "WINS: " << WINS << endl << "TIES: " << TIES << endl << "LOSES: " << LOSES << endl << endl;
            
            // Does USER want to play again
            cout << endl << "Do you want to play again? y/n: " << endl;
            cin >> AGAIN;
            
            // YES
            if (AGAIN == 'y') {
                PLAYED = 1;
                rockpaperscissors(&PLAYED, &WINS, &TIES, &LOSES);
            }
            
            // NO
            else {
                PLAYED = 1;
                main();
            }
        }
    }
    
    // PLAYER SCISSORS
    if (CHOICE == 's') {
        
        // CPU ROCK
        if (CPU == 1) {
            cout << endl;
            cout << "CPU Chose: ROCK" << endl;
            cout << "You LOSE" << endl;
            LOSES += 1;
            cout << endl << "WINS: " << WINS << endl << "TIES: " << TIES << endl << "LOSES: " << LOSES << endl << endl;
            
            // Does USER want to play again
            cout << endl << "Do you want to play again? y/n: " << endl;
            cin >> AGAIN;
            
            // YES
            if (AGAIN == 'y') {
                PLAYED = 1;
                rockpaperscissors(&PLAYED, &WINS, &TIES, &LOSES);
            }
            
            // NO
            else {
                PLAYED = 1;
                main();
            }
            
        }
        // CPU PAPER
        if (CPU == 2) {
            cout << endl;
            cout << "CPU Chose: PAPER" << endl;
            cout << "You WIN" << endl;
            WINS += 1;
            cout << endl << "WINS: " << WINS << endl << "TIES: " << TIES << endl << "LOSES: " << LOSES << endl << endl;
            
            // Does USER want to play again
            cout << endl << "Do you want to play again? y/n: " << endl;
            cin >> AGAIN;
            
            // YES
            if (AGAIN == 'y') {
                PLAYED = 1;
                rockpaperscissors(&PLAYED, &WINS, &TIES, &LOSES);
            }
            
            // NO
            else {
                PLAYED = 1;
                main();
            }
        }
        // CPU SCISSORS
        if (CPU == 3) {
            cout << endl;
            cout << "CPU Chose: SCISSORS" << endl;
            cout << "It's a draw" << endl;
            TIES += 1;
            cout << endl << "WINS: " << WINS << endl << "TIES: " << TIES << endl << "LOSES: " << LOSES << endl << endl;
            
            // Does USER want to play again
            cout << endl << "Do you want to play again? y/n: " << endl;
            cin >> AGAIN;
            
            // YES
            if (AGAIN == 'y') {
                PLAYED = 1;
                rockpaperscissors(&PLAYED, &WINS, &TIES, &LOSES);
            }
            
            // NO
            else {
                PLAYED = 1;
                main();
            }
        }
    }
}


// **************
// PAY CALCULATOR
// **************

void pay() {
    //Declaring variables
    int AGE;
    int DAYS = 0;
    int SHIFTS = 0;
    int START, END;
    double HOURS = 0;
    double TOTAL_HOURS = 0;
    int NUMBER = 1;
    double WAGE = 0;
    double PAY = 0;
    double LOADING = 0;
    double TOTAL_LOADING = 0;
    double TOTAL_PAY = 0;
    double TOTAL = 0;
    
    //Recieve users age
    cout << "Please enter your age: \n-1 to Return to menu" << endl;
    cin >> AGE;
    cout << endl;
    
    
    // AGE 15
    // WAGE 8.43 w/out casual loading
    if (AGE <= 15 && AGE > 0) {
        WAGE = 8.43;
        cout << "How many shifts are you working?: \n";
        cin >> SHIFTS;
        DAYS = SHIFTS;
        
        while (SHIFTS > 0) {
            cout << "\nWhat time do you start shift " << NUMBER << "? \n";
            cin >> START;
            cout << "What time do you finish the same shift?\n";
            cin >> END;
            
            //where hours are standard 9-5 where you finish after 12
            if (END < START) {
                HOURS = (12-START) + END;
            }
            //if working late and not crossing the 12 line (5-10)
            if (END > START) {
                HOURS = END - START;
            }
            //if they are the same number set to 12 hours (9-9)
            if (END == START) {
                HOURS = 12;
            }
            //If hours are greater than 5 receive half hour break
            if (HOURS >= 5) {
                HOURS -= 0.5;
            }
            
            PAY = WAGE * HOURS;
            LOADING = PAY * 0.2;
            
            //Add to total pay and total casual loading
            TOTAL_PAY += PAY;
            TOTAL_LOADING += LOADING;
            
            //Add to complete total
            TOTAL = TOTAL_LOADING + TOTAL_PAY;
            
            TOTAL_HOURS += HOURS;
            
            SHIFTS -= 1;
            NUMBER += 1;
            
            while (SHIFTS == 0) {
                cout << "\n ************ \n HOURS: " << TOTAL_HOURS << "\n SHIFTS: " << DAYS << "\n WAGE: " << WAGE << "\n NORMAL: " << TOTAL_PAY << "\n LOADING: " << TOTAL_LOADING << "\n TOTAL: " << TOTAL << "\n AGE: " << AGE << "\n ************ \n\n";
                SHIFTS = -1;
            }
        }
        pay();
    }
    
    
    // AGE 16
    // WAGE 10.54 w/out casual loading
    if (AGE == 16) {
        WAGE = 10.54;
        cout << "How many shifts are you working?: \n";
        cin >> SHIFTS;
        DAYS = SHIFTS;
        
        while (SHIFTS > 0) {
            cout << "\nWhat time do you start your " << NUMBER << " shift? \n";
            cin >> START;
            cout << "What time do you finish the same shift?\n";
            cin >> END;
            
            //where hours are standard 9-5 where you finish after 12
            if (END < START) {
                HOURS = (12-START) + END;
            }
            //if working late and not crossing the 12 line (5-10)
            if (END > START) {
                HOURS = END - START;
            }
            //if they are the same number set to 12 hours (9-9)
            if (END == START) {
                HOURS = 12;
            }
            //If hours are greater than 5 receive half hour break
            if (HOURS >= 5) {
                HOURS -= 0.5;
            }
            
            PAY = WAGE * HOURS;
            LOADING = PAY * 0.2;
            
            //Add to total pay and total casual loading
            TOTAL_PAY += PAY;
            TOTAL_LOADING += LOADING;
            
            //Add to complete total
            TOTAL = TOTAL_LOADING + TOTAL_PAY;
            
            TOTAL_HOURS += HOURS;
            
            SHIFTS -= 1;
            NUMBER += 1;
            
            while (SHIFTS == 0) {
                cout << "\n ************ \n HOURS: " << TOTAL_HOURS << "\n SHIFTS: " << DAYS << "\n WAGE: " << WAGE << "\n NORMAL: " << TOTAL_PAY << "\n LOADING: " << TOTAL_LOADING << "\n TOTAL: " << TOTAL << "\n AGE: " << AGE << "\n ************ \n\n";
                SHIFTS = -1;
            }
        }
        pay();
    }
    
    // AGE 17
    // WAGE 12.65 w/out casual loading
    if (AGE == 17) {
        WAGE = 12.65;
        cout << "How many shifts are you working?: \n";
        cin >> SHIFTS;
        DAYS = SHIFTS;
        
        while (SHIFTS > 0) {
            cout << "\nWhat time do you start shift " << NUMBER << "? \n";
            cin >> START;
            cout << "What time do you finish the same shift?\n";
            cin >> END;
            
            //where hours are standard 9-5 where you finish after 12
            if (END < START) {
                HOURS = (12-START) + END;
            }
            //if working late and not crossing the 12 line (5-10)
            if (END > START) {
                HOURS = END - START;
            }
            //if they are the same number set to 12 hours (9-9)
            if (END == START) {
                HOURS = 12;
            }
            //If hours are greater than 5 receive half hour break
            if (HOURS >= 5) {
                HOURS -= 0.5;
            }
            
            PAY = WAGE * HOURS;
            LOADING = PAY * 0.2;
            
            //Add to total pay and total casual loading
            TOTAL_PAY += PAY;
            TOTAL_LOADING += LOADING;
            
            //Add to complete total
            TOTAL = TOTAL_LOADING + TOTAL_PAY;
            
            TOTAL_HOURS += HOURS;
            
            SHIFTS -= 1;
            NUMBER += 1;
            
            while (SHIFTS == 0) {
                cout << "\n ************ \n HOURS: " << TOTAL_HOURS << "\n SHIFTS: " << DAYS << "\n WAGE: " << WAGE << "\n NORMAL: " << TOTAL_PAY << "\n LOADING: " << TOTAL_LOADING << "\n TOTAL: " << TOTAL << "\n AGE: " << AGE << "\n ************ \n\n";
                SHIFTS = -1;
            }
        }
        pay();
    }
    
    // AGE 18
    // WAGE 14.76 w/out casual loading
    if (AGE == 18) {
        WAGE = 14.76;
        cout << "How many shifts are you working?: \n";
        cin >> SHIFTS;
        DAYS = SHIFTS;
        
        while (SHIFTS > 0) {
            cout << "\nWhat time do you start shift " << NUMBER << "? \n";
            cin >> START;
            cout << "What time do you finish the same shift?\n";
            cin >> END;
            
            //where hours are standard 9-5 where you finish after 12
            if (END < START) {
                HOURS = (12-START) + END;
            }
            //if working late and not crossing the 12 line (5-10)
            if (END > START) {
                HOURS = END - START;
            }
            //if they are the same number set to 12 hours (9-9)
            if (END == START) {
                HOURS = 12;
            }
            //If hours are greater than 5 receive half hour break
            if (HOURS >= 5) {
                HOURS -= 0.5;
            }
            
            PAY = WAGE * HOURS;
            LOADING = PAY * 0.2;
            
            //Add to total pay and total casual loading
            TOTAL_PAY += PAY;
            TOTAL_LOADING += LOADING;
            
            //Add to complete total
            TOTAL = TOTAL_LOADING + TOTAL_PAY;
            
            TOTAL_HOURS += HOURS;
            
            SHIFTS -= 1;
            NUMBER += 1;
            
            while (SHIFTS == 0) {
                cout << "\n ************ \n HOURS: " << TOTAL_HOURS << "\n SHIFTS: " << DAYS << "\n WAGE: " << WAGE << "\n NORMAL: " << TOTAL_PAY << "\n LOADING: " << TOTAL_LOADING << "\n TOTAL: " << TOTAL << "\n AGE: " << AGE << "\n ************ \n\n";
                SHIFTS = -1;
            }
        }
        pay();
    }
    
    // AGE 19
    // WAGE 16.87 w/out casual loading
    if (AGE == 19) {
        WAGE = 16.87;
        cout << "How many shifts are you working?: \n";
        cin >> SHIFTS;
        DAYS = SHIFTS;
        
        while (SHIFTS > 0) {
            cout << "\nWhat time do you start shift " << NUMBER << "? \n";
            cin >> START;
            cout << "What time do you finish the same shift?\n";
            cin >> END;
            
            //where hours are standard 9-5 where you finish after 12
            if (END < START) {
                HOURS = (12-START) + END;
            }
            //if working late and not crossing the 12 line (5-10)
            if (END > START) {
                HOURS = END - START;
            }
            //if they are the same number set to 12 hours (9-9)
            if (END == START) {
                HOURS = 12;
            }
            //If hours are greater than 5 receive half hour break
            if (HOURS >= 5) {
                HOURS -= 0.5;
            }
            
            PAY = WAGE * HOURS;
            LOADING = PAY * 0.2;
            
            //Add to total pay and total casual loading
            TOTAL_PAY += PAY;
            TOTAL_LOADING += LOADING;
            
            //Add to complete total
            TOTAL = TOTAL_LOADING + TOTAL_PAY;
            
            TOTAL_HOURS += HOURS;
            
            SHIFTS -= 1;
            NUMBER += 1;
            
            while (SHIFTS == 0) {
                cout << "\n ************ \n HOURS: " << TOTAL_HOURS << "\n SHIFTS: " << DAYS << "\n WAGE: " << WAGE << "\n NORMAL: " << TOTAL_PAY << "\n LOADING: " << TOTAL_LOADING << "\n TOTAL: " << TOTAL << "\n AGE: " << AGE << "\n ************ \n\n";
                SHIFTS = -1;
            }
        }
        pay();
    }
    
    // AGE 20
    // WAGE 18.97 w/out casual loading
    if (AGE == 20) {
        WAGE = 18.97;
        cout << "How many shifts are you working?: \n";
        cin >> SHIFTS;
        DAYS = SHIFTS;
        
        while (SHIFTS > 0) {
            cout << "\nWhat time do you start shift " << NUMBER << "? \n";
            cin >> START;
            cout << "What time do you finish the same shift?\n";
            cin >> END;
            
            //where hours are standard 9-5 where you finish after 12
            if (END < START) {
                HOURS = (12-START) + END;
            }
            //if working late and not crossing the 12 line (5-10)
            if (END > START) {
                HOURS = END - START;
            }
            //if they are the same number set to 12 hours (9-9)
            if (END == START) {
                HOURS = 12;
            }
            //If hours are greater than 5 receive half hour break
            if (HOURS >= 5) {
                HOURS -= 0.5;
            }
            
            PAY = WAGE * HOURS;
            LOADING = PAY * 0.2;
            
            //Add to total pay and total casual loading
            TOTAL_PAY += PAY;
            TOTAL_LOADING += LOADING;
            
            //Add to complete total
            TOTAL = TOTAL_LOADING + TOTAL_PAY;
            
            TOTAL_HOURS += HOURS;
            
            SHIFTS -= 1;
            NUMBER += 1;
            
            while (SHIFTS == 0) {
                cout << "\n ************ \n HOURS: " << TOTAL_HOURS << "\n SHIFTS: " << DAYS << "\n WAGE: " << WAGE << "\n NORMAL: " << TOTAL_PAY << "\n LOADING: " << TOTAL_LOADING << "\n TOTAL: " << TOTAL << "\n AGE: " << AGE << "\n ************ \n\n";
                SHIFTS = -1;
            }
        }
        pay();
    }
    
    // AGE 21+
    // WAGE 21.08 w/out casual loading
    if (AGE >= 21) {
        WAGE = 21.08;
        cout << "How many shifts are you working?: \n";
        cin >> SHIFTS;
        DAYS = SHIFTS;
        
        while (SHIFTS > 0) {
            cout << "\nWhat time do you start shift " << NUMBER << "? \n";
            cin >> START;
            cout << "What time do you finish the same shift?\n";
            cin >> END;
            
            //where hours are standard 9-5 where you finish after 12
            if (END < START) {
                HOURS = (12-START) + END;
            }
            //if working late and not crossing the 12 line (5-10)
            if (END > START) {
                HOURS = END - START;
            }
            //if they are the same number set to 12 hours (9-9)
            if (END == START) {
                HOURS = 12;
            }
            //If hours are greater than 5 receive half hour break
            if (HOURS >= 5) {
                HOURS -= 0.5;
            }
            
            PAY = WAGE * HOURS;
            LOADING = PAY * 0.2;
            
            //Add to total pay and total casual loading
            TOTAL_PAY += PAY;
            TOTAL_LOADING += LOADING;
            
            //Add to complete total
            TOTAL = TOTAL_LOADING + TOTAL_PAY;
            
            TOTAL_HOURS += HOURS;
            
            SHIFTS -= 1;
            NUMBER += 1;
            
            while (SHIFTS == 0) {
                cout << fixed << setprecision(2) << "\n ************ \n HOURS: " << TOTAL_HOURS << "\n SHIFTS: " << DAYS << "\n WAGE: " << WAGE << "\n NORMAL: " << TOTAL_PAY << "\n LOADING: " << TOTAL_LOADING << "\n TOTAL: " << TOTAL << "\n AGE: " << AGE << "\n ************ \n\n";
                SHIFTS = -1;
            }
        }
        pay();
    }
    if (AGE == -1) {
        main();
    }
    else {
        cout << "Unsupported age type" << endl << "Please try again: " << endl << endl;
        pay();
    }
}


// RESTRAUNT
//Here I am declaring the subprograms and variables in my program
void restraunt() {
    void meal();
    void drinks();
    void sweets();
    void receipt();
    char MENU[1];
    char CHOICE, BorG, PorA;
    int COST, x;
    //The array "selection" is used to select what menu is being ordered. It is used in the code to make it easy to store the data whilst the user is selecting what they are ordering
    int selection[3];
    double MONEY = 0;
    double TIP = 0;
    double TIPperc = 0;
    // Here I am declaring the variables used for the menu system, I have to declare these as 0 otherwise the program will asign a random number to the variable
    // DRINKS
    float COKETOTAL = 0;
    float COKEaTOTAL = 0;
    float LEMONADETOTAL = 0;
    float LEMONADEaTOTAL = 0;
    float TEATOTAL = 0;
    float TEAaTOTAL = 0;
    float COFFEETOTAL = 0;
    float COFFEEaTOTAL = 0;
    float HOTTOTAL = 0;
    float HOTaTOTAL = 0;
    float BEERTOTAL = 0;
    float BEERaTOTAL = 0;
    //Red Wine Bottle / Glass
    float RWINEgTOTAL = 0;
    float RWINEgaTOTAL = 0;
    float RWINEbTOTAL = 0;
    float RWINEbaTOTAL = 0;
    //White Wine Bottle / Glass
    float WWINEgTOTAL = 0;
    float WWINEgaTOTAL = 0;
    float WWINEbTOTAL = 0;
    float WWINEbaTOTAL = 0;
    //Water
    float WATERTOTAL = 0;
    float WATERaTOTAL = 0;
    
    //MEALS
    float STEAKTOTAL = 0;
    float STEAKaTOTAL = 0;
    float PIZZATOTAL = 0;
    float PIZZAaTOTAL = 0;
    float PORKTOTAL = 0;
    float PORKaTOTAL = 0;
    float SPAGTOTAL = 0;
    float SPAGaTOTAL = 0;
    float HAMTOTAL = 0;
    float HAMaTOTAL = 0;
    float CHICKENTOTAL = 0;
    float CHICKENaTOTAL = 0;
    float FISHTOTAL = 0;
    float FISHaTOTAL = 0;
    float GARDENTOTAL = 0;
    float GARDENaTOTAL = 0;
    float LAMBTOTAL = 0;
    float LAMBaTOTAL = 0;
    
    //SWEETS
    float ICETOTAL = 0;
    float ICEaTOTAL = 0;
    float SUNDAETOTAL = 0;
    float SUNDAEaTOTAL = 0;
    float TIRAMISUTOTAL = 0;
    float TIRAMISUaTOTAL = 0;
    float CAKETOTAL = 0;
    float CAKEaTOTAL = 0;
    float CHEESETOTAL = 0;
    float CHEESEaTOTAL = 0;
    float PANNATOTAL = 0;
    float PANNAaTOTAL = 0;
    float MOUSETOTAL = 0;
    float MOUSEaTOTAL = 0;
    float LEMONTOTAL = 0;
    float LEMONaTOTAL = 0;
    float COCKTAILTOTAL = 0;
    float COCKTAILaTOTAL = 0;
    
    float userInputNumber;
    float DrinksTotal = 0;
    float MealsTotal = 0;
    float SweetsTotal = 0;
    float CompleteCost = 0;
    
    //float values are used for these variables as the cost of some items on the menu have cents in them and this is to account for those values as decimals will need to be used
    
    cout << "Hello and welcome to 'le Restraunt de la Scuola'" << endl;
    cout << "How much money do you have avaliable to spend?" << endl;
    cin >> MONEY;
    cout << endl;
    //This is the "main menu where the user selects what menu they would like to choose from
    while (MONEY > 0) {
        cout << "\nWould you like to buy from the (d)rink menu, the (m)eal menu or the (s)weets menu: m/d/s" << endl;
        cout << "Check the (r)eceipt or (f)inish up: r/f" << endl;
        cin >> MENU[0];
        cout << endl;
        
        //This section if the code adds the amount purchased of each item. This makes getting the total cost of all items purchased by the user easier and puts that value into one float value.
        DrinksTotal = COKETOTAL + LEMONADETOTAL + TEATOTAL + COFFEETOTAL + HOTTOTAL + BEERTOTAL + RWINEbTOTAL + RWINEgTOTAL + WWINEbTOTAL + WWINEgTOTAL + WATERTOTAL;
        MealsTotal = STEAKTOTAL + PIZZATOTAL + PORKTOTAL + SPAGTOTAL + HAMTOTAL + CHICKENTOTAL + FISHTOTAL + GARDENTOTAL + LAMBTOTAL;
        SweetsTotal = ICETOTAL + SUNDAETOTAL + TIRAMISUTOTAL + CAKETOTAL + CHEESETOTAL + PANNATOTAL + MOUSETOTAL + LEMONTOTAL + COCKTAILTOTAL;
        CompleteCost = DrinksTotal + MealsTotal + SweetsTotal;
        
        
        // DRINKS
        while (MENU[0] == 'd') {
            drinks();
            cin >> selection[0];
            //when drinks does not equal -1 then the user can choose what drinks they would like to order. If drinks equals -1 then the program returns to the main menu
            if (selection[0] != -1) {
                cout << "You are buying";
            }
            //Each selection changes the value of drinks which in turn deducts the cost of that drink with your total money
            //COKE
            if (selection[0] == 1) {
                cout << " Coke" << endl;
                cout << "How many would you like to buy?: " << endl;
                cin >> x;
                cout << endl;
                if (MONEY > 3.5 * x) {
                    COST = 3.5 * x;
                    cout << "You have purchased " << x << "x Coke for $" << COST << endl;
                    MONEY = MONEY - COST;
                    cout << "You have $" << MONEY << " remaining." << endl;
                    userInputNumber = COST;
                    
                    COKEaTOTAL += x;
                    COKETOTAL += userInputNumber;
                    continue;
                }
                //if you dont have enough money to purchase the item this will be outputed to the user. This is the same for all other items
                else {
                    cout << "Not enough avaliable currency." << endl;
                    cout << "You need: " << x * 3.5 << " to complete this transaction" << endl;
                    cout << "You have $" << MONEY << " remaining." << endl << endl;
                    continue;
                }
            }
            //LEMONADE
            if (selection[0] == 2) {
                cout << " Lemonade" << endl;
                cout << "How many would you like to buy?: " << endl;
                cin >> x;
                cout << endl;
                if (MONEY > 3.5 * x) {
                    COST = 3.5 * x;
                    cout << "You have purchased " << x << "x Lemonade for $" << COST << endl;
                    MONEY = MONEY - COST;
                    cout << "You have $" << MONEY << " remaining." << endl;
                    userInputNumber = COST;
                    
                    LEMONADEaTOTAL += x;
                    LEMONADETOTAL += userInputNumber;
                    continue;
                }
                else {
                    cout << "Not enough avaliable currency." << endl;
                    cout << "You need: " << x * 3.5 << " to complete this transaction" << endl;
                    cout << "You have $" << MONEY << " remaining." << endl << endl;
                    continue;
                }
            }
            //TEA
            if (selection[0] == 3) {
                cout << " Tea" << endl;
                cout << "How many would you like to buy?: " << endl;
                cin >> x;
                cout << endl;
                if (MONEY > 3 * x) {
                    COST = 3 * x;
                    cout << "You have purchased " << x << "x Tea for $" << COST << endl;
                    MONEY = MONEY - COST;
                    cout << "You have $" << MONEY << " remaining." << endl;
                    userInputNumber = COST;
                    
                    TEAaTOTAL += x;
                    TEATOTAL += userInputNumber;
                    continue;
                }
                else {
                    cout << "Not enough avaliable currency." << endl;
                    cout << "You need: " << x * 3 << " to complete this transaction" << endl;
                    cout << "You have $" << MONEY << " remaining." << endl << endl;
                    continue;
                }
            }
            //COFFEE
            if (selection[0] == 4) {
                cout << " Coffee" << endl;
                cout << "How many would you like to buy?: " << endl;
                cin >> x;
                cout << endl;
                if (MONEY > 3 * x) {
                    COST = 3 * x;
                    cout << "You have purchased " << x << "x Coffee for $" << COST << endl;
                    MONEY = MONEY - COST;
                    cout << "You have $" << MONEY << " remaining." << endl;
                    userInputNumber = COST;
                    
                    COFFEEaTOTAL += x;
                    COFFEETOTAL += userInputNumber;
                    continue;
                }
                else {
                    cout << "Not enough avaliable currency." << endl;
                    cout << "You need: " << x * 3 << " to complete this transaction" << endl;
                    cout << "You have $" << MONEY << " remaining." << endl << endl;
                    continue;
                }
            }
            //HOT CHOCOLATE
            if (selection[0] == 5) {
                cout << " Hot Chocolate" << endl;
                cout << "How many would you like to buy?: " << endl;
                cin >> x;
                cout << endl;
                if (MONEY > 3 * x) {
                    COST = 3 * x;
                    cout << "You have purchased " << x << "x Hot Chocolate for $" << COST << endl;
                    MONEY = MONEY - COST;
                    cout << "You have $" << MONEY << " remaining." << endl;
                    userInputNumber = COST;
                    
                    HOTaTOTAL += x;
                    HOTTOTAL += userInputNumber;
                    continue;
                }
                else {
                    cout << "Not enough avaliable currency." << endl;
                    cout << "You need: " << x * 3 << " to complete this transaction" << endl;
                    cout << "You have $" << MONEY << " remaining." << endl << endl;
                    continue;
                }
            }
            //BEER
            if (selection[0] == 6) {
                cout << " Beer" << endl;
                cout << "How many would you like to buy?: " << endl;
                cin >> x;
                cout << endl;
                if (MONEY > 8 * x) {
                    COST = 8 * x;
                    cout << "You have purchased " << x << "x Beer for $" << COST << endl;
                    MONEY = MONEY - COST;
                    cout << "You have $" << MONEY << " remaining." << endl;
                    userInputNumber = COST;
                    
                    BEERaTOTAL += x;
                    BEERTOTAL += userInputNumber;
                    continue;
                }
                else {
                    cout << "Not enough avaliable currency." << endl;
                    cout << "You need: " << x * 8 << " to complete this transaction" << endl;
                    cout << "You have $" << MONEY << " remaining." << endl << endl;
                    continue;
                }
            }
            //RED WINE
            if (selection[0] == 7) {
                cout << " Red Wine" << endl;
                cout << "Would you like to buy a (b)ottle or (g)lass? b/g \n";
                cin >> BorG;
                
                if (BorG == 'b') {
                    cout << "How many bottles would you like to buy?: " << endl;
                    cin >> x;
                    cout << endl;
                    if (MONEY > 30 * x) {
                        COST = 30 * x;
                        cout << "You have purchased " << x << "x Red Wine (Bottle) for $" << COST << endl;
                        MONEY = MONEY - COST;
                        cout << "You have $" << MONEY << " remaining." << endl;
                        userInputNumber = COST;
                        
                        RWINEbaTOTAL += x;
                        RWINEbTOTAL += userInputNumber;
                        continue;
                    }
                    else {
                        cout << "Not enough avaliable currency." << endl;
                        cout << "You need: " << x * 30 << " to complete this transaction" << endl;
                        cout << "You have $" << MONEY << " remaining." << endl << endl;
                        continue;
                        
                    }
                }
                
                if (BorG == 'g') {
                    cout << "How many glasses would you like to buy?: " << endl;
                    cin >> x;
                    cout << endl;
                    if (MONEY > 10 * x) {
                        COST = 10 * x;
                        cout << "You have purchased " << x << "x Red Wine (Glass) for $" << COST << endl;
                        MONEY = MONEY - COST;
                        cout << "You have $" << MONEY << " remaining." << endl;
                        userInputNumber = COST;
                        
                        RWINEgaTOTAL += x;
                        RWINEgTOTAL += userInputNumber;
                        continue;
                    }
                    else {
                        cout << "Not enough avaliable currency." << endl;
                        cout << "You need: " << x * 10 << " to complete this transaction" << endl;
                        cout << "You have $" << MONEY << " remaining." << endl << endl;
                        continue;
                        
                    }
                }
            }
            //WHITE WINE
            if (selection[0] == 8) {
                cout << " White Wine" << endl;
                cout << "Would you like to buy a (b)ottle or (g)lass? b/g \n";
                cin >> BorG;
                
                if (BorG == 'b') {
                    cout << "How many bottles would you like to buy?: " << endl;
                    cin >> x;
                    cout << endl;
                    if (MONEY > 30 * x) {
                        COST = 30 * x;
                        cout << "You have purchased " << x << "x White Wine (Bottle) for $" << COST << endl;
                        MONEY = MONEY - COST;
                        cout << "You have $" << MONEY << " remaining." << endl;
                        userInputNumber = COST;
                        
                        WWINEbaTOTAL += x;
                        WWINEbTOTAL += userInputNumber;
                        continue;
                    }
                    else {
                        cout << "Not enough avaliable currency." << endl;
                        cout << "You need: " << x * 30 << " to complete this transaction" << endl;
                        cout << "You have $" << MONEY << " remaining." << endl << endl;
                        continue;
                        
                    }
                }
                
                if (BorG == 'g') {
                    cout << "How many glasses would you like to buy?: " << endl;
                    cin >> x;
                    cout << endl;
                    if (MONEY > 10 * x) {
                        COST = 10 * x;
                        cout << "You have purchased " << x << "x White Wine (Glass) for $" << COST << endl;
                        MONEY = MONEY - COST;
                        cout << "You have $" << MONEY << " remaining." << endl;
                        userInputNumber = COST;
                        
                        WWINEgaTOTAL += x;
                        WWINEgTOTAL += userInputNumber;
                        continue;
                    }
                    else {
                        cout << "Not enough avaliable currency." << endl;
                        cout << "You need: " << x * 10 << " to complete this transaction" << endl;
                        cout << "You have $" << MONEY << " remaining." << endl << endl;
                        continue;
                        
                    }
                }
            }
            //WATER
            if (selection[0] == 9) {
                cout << " Water" << endl;
                cout << "How many would you like to get?: " << endl;
                cin >> x;
                cout << endl;
                if (MONEY > 0 * x) {
                    COST = 0 * x;
                    cout << "You have purchased " << x << "x Water for $" << COST << endl;
                    MONEY = MONEY - COST;
                    cout << "You have $" << MONEY << " remaining." << endl;
                    userInputNumber = COST;
                    
                    WATERaTOTAL += x;
                    WATERTOTAL += userInputNumber;
                    continue;
                }
                else {
                    cout << "Not enough avaliable currency." << endl;
                    cout << "You need: " << x * 0 << " to complete this transaction" << endl;
                    cout << "You have $" << MONEY << " remaining." << endl << endl;
                    continue;
                }
            }
            
            if (selection[0] == -1) {
                break;
            }
            else {
                break;
            }
        }
        
        // MEALS
        while (MENU[0] == 'm') {
            meal();
            cin >> selection[1];
            
            //when meal does not equal -1 then the user can choose what meal they would like to order. If meal equals -1 then the program returns to the main menu
            if (selection[1] != -1) {
                cout << "You are buying";
            }
            //Each selection changes the value of meal which in turn deducts the cost of that drink with your total money
            //STEAK AND CHIPS
            if (selection[1] == 1) {
                cout << " Steak and Chips" << endl;
                cout << "How many would you like to buy?: " << endl;
                cin >> x;
                cout << endl;
                if (MONEY > 20 * x) {
                    COST = 20 * x;
                    cout << "You have purchased " << x << "x Steak and Chips for $" << COST << endl;
                    MONEY = MONEY - COST;
                    cout << "You have $" << MONEY << " remaining." << endl;
                    userInputNumber = COST;
                    
                    STEAKaTOTAL += x;
                    STEAKTOTAL += userInputNumber;
                    continue;
                }
                else {
                    cout << "Not enough avaliable currency." << endl;
                    cout << "You need: " << x * 20 << " to complete this transaction" << endl;
                    cout << "You have $" << MONEY << " remaining." << endl << endl;
                    continue;
                }
            }
            //PIZZA
            if (selection[1] == 2) {
                cout << " Pizza" << endl;
                cout << "How many would you like to buy?: " << endl;
                cin >> x;
                cout << endl;
                if (MONEY > 18 * x) {
                    COST = 18 * x;
                    cout << "You have purchased " << x << "x Pizza for $" << COST << endl;
                    MONEY = MONEY - COST;
                    cout << "You have $" << MONEY << " remaining." << endl;
                    userInputNumber = COST;
                    
                    PIZZAaTOTAL += x;
                    PIZZATOTAL += userInputNumber;
                    continue;
                }
                else {
                    cout << "Not enough avaliable currency." << endl;
                    cout << "You need: " << x * 18 << " to complete this transaction" << endl;
                    cout << "You have $" << MONEY << " remaining." << endl << endl;
                    continue;
                }
            }
            //PORK RIBS
            if (selection[1] == 3) {
                cout << " Pork Ribs" << endl;
                cout << "How many would you like to buy?: " << endl;
                cin >> x;
                cout << endl;
                if (MONEY > 22 * x) {
                    COST = 22 * x;
                    cout << "You have purchased " << x << "x Pork Ribs for $" << COST << endl;
                    MONEY = MONEY - COST;
                    cout << "You have $" << MONEY << " remaining." << endl;
                    userInputNumber = COST;
                    
                    PORKaTOTAL += x;
                    PORKTOTAL += userInputNumber;
                    continue;
                }
                else {
                    cout << "Not enough avaliable currency." << endl;
                    cout << "You need: " << x * 22 << " to complete this transaction" << endl;
                    cout << "You have $" << MONEY << " remaining." << endl << endl;
                    continue;
                }
            }
            //SPAGHETTI
            if (selection[1] == 4) {
                cout << " Spaghetti" << endl;
                cout << "How many would you like to buy?: " << endl;
                cin >> x;
                cout << endl;
                if (MONEY > 15 * x) {
                    COST = 15 * x;
                    cout << "You have purchased " << x << "x Spaghetti for $" << COST << endl;
                    MONEY = MONEY - COST;
                    cout << "You have $" << MONEY << " remaining." << endl;
                    userInputNumber = COST;
                    
                    SPAGaTOTAL += x;
                    SPAGTOTAL += userInputNumber;
                    continue;
                }
                else {
                    cout << "Not enough avaliable currency." << endl;
                    cout << "You need: " << x * 15 << " to complete this transaction" << endl;
                    cout << "You have $" << MONEY << " remaining." << endl << endl;
                    continue;
                }
            }
            //HAMBURGER
            if (selection[1] == 5) {
                cout << " Hamburger" << endl;
                cout << "How many would you like to buy?: " << endl;
                cin >> x;
                cout << endl;
                if (MONEY > 14 * x) {
                    COST = 14 * x;
                    cout << "You have purchased " << x << "x Hamburger for $" << COST << endl;
                    MONEY = MONEY - COST;
                    cout << "You have $" << MONEY << " remaining." << endl;
                    userInputNumber = COST;
                    
                    HAMaTOTAL += x;
                    HAMTOTAL += userInputNumber;
                    continue;
                }
                else {
                    cout << "Not enough avaliable currency." << endl;
                    cout << "You need: " << x * 14 << " to complete this transaction" << endl;
                    cout << "You have $" << MONEY << " remaining." << endl << endl;
                    continue;
                }
            }
            //CHICKENBURGER
            if (selection[1] == 6) {
                cout << " Chicken Burger" << endl;
                cout << "How many would you like to buy?: " << endl;
                cin >> x;
                cout << endl;
                if (MONEY > 14 * x) {
                    COST = 14 * x;
                    cout << "You have purchased " << x << "x Chicken Burger for $" << COST << endl;
                    MONEY = MONEY - COST;
                    cout << "You have $" << MONEY << " remaining." << endl;
                    userInputNumber = COST;
                    
                    CHICKENaTOTAL += x;
                    CHICKENTOTAL += userInputNumber;
                    continue;
                }
                else {
                    cout << "Not enough avaliable currency." << endl;
                    cout << "You need: " << x * 14 << " to complete this transaction" << endl;
                    cout << "You have $" << MONEY << " remaining." << endl << endl;
                    continue;
                }
            }
            //FISH AND CHIPS
            if (selection[1] == 7) {
                cout << " Fish and Chips" << endl;
                cout << "How many would you like to buy?: " << endl;
                cin >> x;
                cout << endl;
                if (MONEY > 15 * x) {
                    COST = 15 * x;
                    cout << "You have purchased " << x << "x Fish and Chips for $" << COST << endl;
                    MONEY = MONEY - COST;
                    cout << "You have $" << MONEY << " remaining." << endl;
                    userInputNumber = COST;
                    
                    FISHaTOTAL += x;
                    FISHTOTAL += userInputNumber;
                    continue;
                }
                else {
                    cout << "Not enough avaliable currency." << endl;
                    cout << "You need: " << x * 15 << " to complete this transaction" << endl;
                    cout << "You have $" << MONEY << " remaining." << endl << endl;
                    continue;
                }
            }
            //GARDEN SALAD
            if (selection[1] == 8) {
                cout << " Garden Salad" << endl;
                cout << "How many would you like to buy?: " << endl;
                cin >> x;
                cout << endl;
                if (MONEY > 8 * x) {
                    COST = 8 * x;
                    cout << "You have purchased " << x << "x Garden Salad for $" << COST << endl;
                    MONEY = MONEY - COST;
                    cout << "You have $" << MONEY << " remaining." << endl;
                    userInputNumber = COST;
                    
                    GARDENaTOTAL += x;
                    GARDENTOTAL += userInputNumber;
                    continue;
                }
                else {
                    cout << "Not enough avaliable currency." << endl;
                    cout << "You need: " << x * 8 << " to complete this transaction" << endl;
                    cout << "You have $" << MONEY << " remaining." << endl << endl;
                    continue;
                }
            }
            //LAMB SHANK
            if (selection[1] == 9) {
                cout << " Lamb Shank" << endl;
                cout << "How many would you like to buy?: " << endl;
                cin >> x;
                cout << endl;
                if (MONEY > 25 * x) {
                    COST = 25 * x;
                    cout << "You have purchased " << x << "x Lamb Shank for $" << COST << endl;
                    MONEY = MONEY - COST;
                    cout << "You have $" << MONEY << " remaining." << endl;
                    userInputNumber = COST;
                    
                    LAMBaTOTAL += x;
                    LAMBTOTAL += userInputNumber;
                    continue;
                }
                else {
                    cout << "Not enough avaliable currency." << endl;
                    cout << "You need: " << x * 25 << " to complete this transaction" << endl;
                    cout << "You have $" << MONEY << " remaining." << endl << endl;
                    continue;
                }
            }
            
            if (selection[1] == -1) {
                break;
            }
            else {
                break;
            }
        }
        
        // SWEETS
        while (MENU[0] == 's') {
            sweets();
            cin >> selection[2];
            //when sweets does not equal -1 then the user can choose what sweets they would like to order. If sweets equals -1 then the program returns to the main menu
            if (selection[2] != -1) {
                cout << "You are buying";
            }
            //Each selection changes the value of sweets which in turn deducts the cost of that drink with your total money
            
            // ICE CREAM
            if (selection[2] == 1) {
                cout << " Ice Cream" << endl;
                cout << "How many would you like to buy?: " << endl;
                cin >> x;
                cout << endl;
                if (MONEY > 4 * x) {
                    COST = 4 * x;
                    cout << "You have purchased " << x << "x Ice Cream for $" << COST << endl;
                    MONEY = MONEY - COST;
                    cout << "You have $" << MONEY << " remaining." << endl;
                    userInputNumber = COST;
                    
                    ICEaTOTAL += x;
                    ICETOTAL += userInputNumber;
                    continue;
                }
                else {
                    cout << "Not enough avaliable currency." << endl;
                    cout << "You need: " << x * 4 << " to complete this transaction" << endl;
                    cout << "You have $" << MONEY << " remaining." << endl << endl;
                    continue;
                }
            }
            //SUNDAE
            if (selection[2] == 2) {
                cout << " Sundae" << endl;
                cout << "How many would you like to buy?: " << endl;
                cin >> x;
                cout << endl;
                if (MONEY > 5 * x) {
                    COST = 5 * x;
                    cout << "You have purchased " << x << "x Sundae for $" << COST << endl;
                    MONEY = MONEY - COST;
                    cout << "You have $" << MONEY << " remaining." << endl;
                    userInputNumber = COST;
                    
                    SUNDAEaTOTAL += x;
                    SUNDAETOTAL += userInputNumber;
                    continue;
                }
                else {
                    cout << "Not enough avaliable currency." << endl;
                    cout << "You need: " << x * 5 << " to complete this transaction" << endl;
                    cout << "You have $" << MONEY << " remaining." << endl << endl;
                    continue;
                }
            }
            //TIRIMASU
            if (selection[2] == 3) {
                cout << " Tiramisu" << endl;
                cout << "How many would you like to buy?: " << endl;
                cin >> x;
                cout << endl;
                if (MONEY > 6 * x) {
                    COST = 6 * x;
                    cout << "You have purchased " << x << "x Tiramisu for $" << COST << endl;
                    MONEY = MONEY - COST;
                    cout << "You have $" << MONEY << " remaining." << endl;
                    userInputNumber = COST;
                    
                    TIRAMISUaTOTAL += x;
                    TIRAMISUTOTAL += userInputNumber;
                    continue;
                }
                else {
                    cout << "Not enough avaliable currency." << endl;
                    cout << "You need: " << x * 6 << " to complete this transaction" << endl;
                    cout << "You have $" << MONEY << " remaining." << endl << endl;
                    continue;
                }
            }
            //CHOCOLATE CAKE
            if (selection[2] == 4) {
                cout << " Chocolate Cake" << endl;
                cout << "How many would you like to buy?: " << endl;
                cin >> x;
                cout << endl;
                if (MONEY > 5 * x) {
                    COST = 5 * x;
                    cout << "You have purchased " << x << "x Chocolate Cake for $" << COST << endl;
                    MONEY = MONEY - COST;
                    cout << "You have $" << MONEY << " remaining." << endl;
                    userInputNumber = COST;
                    
                    CAKEaTOTAL += x;
                    CAKETOTAL += userInputNumber;
                    continue;
                }
                else {
                    cout << "Not enough avaliable currency." << endl;
                    cout << "You need: " << x * 5 << " to complete this transaction" << endl;
                    cout << "You have $" << MONEY << " remaining." << endl << endl;
                    continue;
                }
            }
            //CHEESECAKE
            if (selection[2] == 5) {
                cout << " Cheesecake" << endl;
                cout << "How many would you like to buy?: " << endl;
                cin >> x;
                cout << endl;
                if (MONEY > 6 * x) {
                    COST = 6 * x;
                    cout << "You have purchased " << x << "x Cheesecake for $" << COST << endl;
                    MONEY = MONEY - COST;
                    cout << "You have $" << MONEY << " remaining." << endl;
                    userInputNumber = COST;
                    
                    CHEESEaTOTAL += x;
                    CHEESETOTAL += userInputNumber;
                    continue;
                }
                else {
                    cout << "Not enough avaliable currency." << endl;
                    cout << "You need: " << x * 6 << " to complete this transaction" << endl;
                    cout << "You have $" << MONEY << " remaining." << endl << endl;
                    continue;
                }
            }
            //PANNA COTTA
            if (selection[2] == 6) {
                cout << " Panna Cotta" << endl;
                cout << "How many would you like to buy?: " << endl;
                cin >> x;
                cout << endl;
                if (MONEY > 8 * x) {
                    COST = 8 * x;
                    cout << "You have purchased " << x << "x Panna Cotta for $" << COST << endl;
                    MONEY = MONEY - COST;
                    cout << "You have $" << MONEY << " remaining." << endl;
                    userInputNumber = COST;
                    
                    PANNAaTOTAL += x;
                    PANNATOTAL += userInputNumber;
                    continue;
                }
                else {
                    cout << "Not enough avaliable currency." << endl;
                    cout << "You need: " << x * 8 << " to complete this transaction" << endl;
                    cout << "You have $" << MONEY << " remaining." << endl << endl;
                    continue;
                }
            }
            //CHOCOLATE MOUSSE
            if (selection[2] == 7) {
                cout << " Chocolate Mousse" << endl;
                cout << "How many would you like to buy?: " << endl;
                cin >> x;
                cout << endl;
                if (MONEY > 8 * x) {
                    COST = 8 * x;
                    cout << "You have purchased " << x << "x Chocolate Mousse for $" << COST << endl;
                    MONEY = MONEY - COST;
                    cout << "You have $" << MONEY << " remaining." << endl;
                    userInputNumber = COST;
                    
                    MOUSEaTOTAL += x;
                    MOUSETOTAL += userInputNumber;
                    continue;
                }
                else {
                    cout << "Not enough avaliable currency." << endl;
                    cout << "You need: " << x * 8 << " to complete this transaction" << endl;
                    cout << "You have $" << MONEY << " remaining." << endl << endl;
                    continue;
                }
            }
            //LEMON MERINGUE
            if (selection[2] == 8) {
                cout << " Lemon Meringue" << endl;
                cout << "How many would you like to buy?: " << endl;
                cin >> x;
                cout << endl;
                if (MONEY > 6 * x) {
                    COST = 6 * x;
                    cout << "You have purchased " << x << "x Lemon Meringue for $" << COST << endl;
                    MONEY = MONEY - COST;
                    cout << "You have $" << MONEY << " remaining." << endl;
                    userInputNumber = COST;
                    
                    LEMONaTOTAL += x;
                    LEMONTOTAL += userInputNumber;
                    continue;
                }
                else {
                    cout << "Not enough avaliable currency." << endl;
                    cout << "You need: " << x * 6 << " to complete this transaction" << endl;
                    cout << "You have $" << MONEY << " remaining." << endl << endl;
                    continue;
                }
            }
            // DESSERT COCKTAIL
            if (selection[2] == 9) {
                cout << " Dessert Cocktail" << endl;
                cout << "How many would you like to buy?: " << endl;
                cin >> x;
                cout << endl;
                if (MONEY > 12 * x) {
                    COST = 12 * x;
                    cout << "You have purchased " << x << "x Dessert Cocktail for $" << COST << endl;
                    MONEY = MONEY - COST;
                    cout << "You have $" << MONEY << " remaining." << endl;
                    userInputNumber = COST;
                    
                    COCKTAILaTOTAL += x;
                    COCKTAILTOTAL += userInputNumber;
                    continue;
                }
                else {
                    cout << "Not enough avaliable currency." << endl;
                    cout << "You need: " << x * 12 << " to complete this transaction" << endl;
                    cout << "You have $" << MONEY << " remaining." << endl << endl;
                    continue;
                }
            }
            if (selection[2] == -1) {
                break;
            }
            else {
                break;
            }
        }
        
        
        // RECEIPT
        //This section of the code calculates the cost of all the things you ordered and puts them in the categories of Drinks, Meals and Sweets. It aslo includes the tip if you have decided to give one. if the menu is grater than 0 it displays in the recipt
        if (MENU[0] == 'r') {
            cout << "\nReceipt " << "\n=====================";
            cout << "\nYou have purchased: \n" << endl;
            cout << "DRINKS: ";
            if (COKEaTOTAL > 0) {
                cout << "\n " << COKEaTOTAL << "x Coke(s) for: $" << COKETOTAL;
            }
            if (LEMONADEaTOTAL > 0) {
                cout << "\n " << LEMONADEaTOTAL << "x Lemonade(s) for: $" << LEMONADETOTAL;
            }
            if (TEAaTOTAL > 0) {
                cout << "\n " << TEAaTOTAL << "x Tea(s) for: $" << TEATOTAL;
            }
            if (COFFEEaTOTAL > 0) {
                cout << "\n " << COFFEEaTOTAL << "x Coffee(s) for: $" << COFFEETOTAL;
            }
            if (HOTaTOTAL > 0) {
                cout << "\n " << HOTaTOTAL << "x Hot Chocolate(s) for: $" << HOTTOTAL;
            }
            if (BEERaTOTAL > 0) {
                cout << "\n " << BEERaTOTAL << "x Beer(s) for: $" << BEERTOTAL;
            }
            if (RWINEgaTOTAL > 0) {
                cout << "\n " << RWINEgaTOTAL << "x Red Wine Glass(es) for: $" << RWINEgTOTAL;
            }
            if (RWINEbaTOTAL > 0) {
                cout << "\n " << RWINEbaTOTAL << "x Red Wine Bottle(s) for: $" << RWINEbTOTAL;
            }
            if (WWINEgaTOTAL > 0) {
                cout << "\n " << WWINEgaTOTAL << "x White Wine Glass(es) for: $" << WWINEgTOTAL;
            }
            if (WWINEbaTOTAL > 0) {
                cout << "\n " << WWINEbaTOTAL << "x Red Wine Bottle(s) for: $" << WWINEbTOTAL;
            }
            if (WATERaTOTAL > 0) {
                cout << "\n " << WATERaTOTAL << "x Water(s) for: $" << WATERTOTAL;
            }
            
            cout << "\n Drinks Total: $" << DrinksTotal;
            
            cout << "\n---------------------\n";
            
            cout << "MEALS: ";
            if (STEAKaTOTAL > 0) {
                cout << "\n " << STEAKaTOTAL << "x Steak and Chip(s) for: $" << STEAKTOTAL;
            }
            if (PIZZAaTOTAL > 0) {
                cout << "\n " << PIZZAaTOTAL << "x Pizza(s) for: $" << PIZZATOTAL;
            }
            if (PORKaTOTAL > 0) {
                cout << "\n " << PORKaTOTAL << "x Pork Rib(s) for: $" << PORKTOTAL;
            }
            if (SPAGaTOTAL > 0) {
                cout << "\n " << SPAGaTOTAL << "x Spaghetti for: $" << SPAGTOTAL;
            }
            if (HAMaTOTAL > 0) {
                cout << "\n " << HAMaTOTAL << "x Hamburger(s) for: $" << HAMTOTAL;
            }
            if (CHICKENaTOTAL > 0) {
                cout << "\n " << CHICKENaTOTAL << "x Chicken Burger(s) for: $" << CHICKENTOTAL;
            }
            if (FISHaTOTAL > 0) {
                cout << "\n " << FISHaTOTAL << "x Fish and Chip(s) for: $" << FISHTOTAL;
            }
            if (GARDENaTOTAL > 0) {
                cout << "\n " << GARDENaTOTAL << "x Garden Salad(s) for: $" << GARDENTOTAL;
            }
            if (LAMBaTOTAL > 0) {
                cout << "\n " << LAMBaTOTAL << "x Lamb Shank(s) for: $" << LAMBTOTAL;
            }
            
            cout << "\n Meals Total: $" << MealsTotal;
            
            cout << "\n---------------------\n";
            
            cout << "SWEETS: ";
            if (ICEaTOTAL > 0) {
                cout << "\n " << ICEaTOTAL << "x Ice Cream(s) for: $" << ICETOTAL;
            }
            if (SUNDAEaTOTAL > 0) {
                cout << "\n " << SUNDAEaTOTAL << "x Sundae(s) for: $" << SUNDAETOTAL;
            }
            if (TIRAMISUaTOTAL > 0) {
                cout << "\n " << TIRAMISUaTOTAL << "x Tiramisu(s) for: $" << TIRAMISUTOTAL;
            }
            if (CAKEaTOTAL > 0) {
                cout << "\n " << CAKEaTOTAL << "x Chocolate Cake(s) for: $" << CAKETOTAL;
            }
            if (CHEESEaTOTAL > 0) {
                cout << "\n " << CHEESEaTOTAL << "x Cheesecakes(s) for: $" << CHEESETOTAL;
            }
            if (PANNAaTOTAL > 0) {
                cout << "\n " << PANNAaTOTAL << "x Panna Cotta(s) for: $" << PANNATOTAL;
            }
            if (MOUSEaTOTAL > 0) {
                cout << "\n " << MOUSEaTOTAL << "x Chocolate Mousse(s) for: $" << MOUSETOTAL;
            }
            if (LEMONaTOTAL > 0) {
                cout << "\n " << LEMONaTOTAL << "x Lemon Meringue(s) for: $" << LEMONTOTAL;
            }
            if (COCKTAILaTOTAL > 0) {
                cout << "\n " << COCKTAILaTOTAL << "x Dessert Cocktail(s) for: $" << COCKTAILTOTAL;
            }
            cout << "\n Sweets Total: $" << SweetsTotal;
            
            cout << "\n---------------------";
            
            cout << "\n TOTAL: $" << CompleteCost;
            cout << "\n TIP: $" << TIP;
            cout << "\n REMAINING MONEY: $" << MONEY;
            
            cout << "\n---------------------";
            cout << "\n=====================" << endl;
        }
        
        if (MENU[0] == 'f') {
            cout << "Would you like to leave a tip y/n: " << endl;
            cin >> CHOICE;
            
            if (CHOICE == 'y') {
                cout << "\nHow much would you like to leave as a tip: \n(p)ercentage or (a)mmount p/a";
                cin >> PorA;
                if (PorA == 'p') {
                    // this section calculates the tip you will give as a percentage that the user has input
                    cout << "\nWhat percentage or your total would you like to leave as a tip?: (%)";
                    cin >> TIPperc;
                    TIPperc /= 100;
                    TIP = CompleteCost * TIPperc;
                    if (TIP > MONEY) {
                        cout << "\nTIP is more than avaliable Money\n";
                        continue;
                    }
                    if (MONEY >= TIP) {
                        MONEY -= TIP;
                        CHOICE = 'n';
                    }
                }
                if (PorA == 'a') {
                    // this section calculates the tip you give as an amount the user has input
                    cout << "\nHow much would you like to leave as a tip?: ($)";
                    cin >> TIP;
                    if (TIP > MONEY) {
                        cout << "\nTIP is more than avaliable Money\n";
                        continue;
                    }
                    if (MONEY >= TIP) {
                        MONEY -= TIP;
                        CHOICE = 'n';
                    }
                }
                
                CHOICE = 'n';
            }
            if (CHOICE == 'n') {
                // RECEPIT
                cout << "Thank you for coming to 'le Restraunt de la Scuola'" << endl << "You're order will be with you shortly" << endl << endl;
                cout << "\nReceipt " << "\n=====================";
                cout << "\nYou have purchased: " << endl;
                cout << "DRINKS: ";
                if (COKEaTOTAL > 0) {
                    cout << "\n " << COKEaTOTAL << "x Coke(s) for: $" << COKETOTAL;
                }
                if (LEMONADEaTOTAL > 0) {
                    cout << "\n " << LEMONADEaTOTAL << "x Lemonade(s) for: $" << LEMONADETOTAL;
                }
                if (TEAaTOTAL > 0) {
                    cout << "\n " << TEAaTOTAL << "x Tea(s) for: $" << TEATOTAL;
                }
                if (COFFEEaTOTAL > 0) {
                    cout << "\n " << COFFEEaTOTAL << "x Coffee(s) for: $" << COFFEETOTAL;
                }
                if (HOTaTOTAL > 0) {
                    cout << "\n " << HOTaTOTAL << "x Hot Chocolate(s) for: $" << HOTTOTAL;
                }
                if (BEERaTOTAL > 0) {
                    cout << "\n " << BEERaTOTAL << "x Beer(s) for: $" << BEERTOTAL;
                }
                if (RWINEgaTOTAL > 0) {
                    cout << "\n " << RWINEgaTOTAL << "x Red Wine Glass(es) for: $" << RWINEgTOTAL;
                }
                if (RWINEbaTOTAL > 0) {
                    cout << "\n " << RWINEbaTOTAL << "x Red Wine Bottle(s) for: $" << RWINEbTOTAL;
                }
                if (WWINEgaTOTAL > 0) {
                    cout << "\n " << WWINEgaTOTAL << "x White Wine Glass(es) for: $" << WWINEgTOTAL;
                }
                if (WWINEbaTOTAL > 0) {
                    cout << "\n " << WWINEbaTOTAL << "x Red Wine Bottle(s) for: $" << WWINEbTOTAL;
                }
                if (WATERaTOTAL > 0) {
                    cout << "\n " << WATERaTOTAL << "x Water(s) for: $" << WATERTOTAL;
                }
                
                cout << "\n Drinks Total: $" << DrinksTotal;
                
                cout << "\n---------------------\n";
                
                cout << "MEALS: ";
                if (STEAKaTOTAL > 0) {
                    cout << "\n " << STEAKaTOTAL << "x Steak and Chip(s) for: $" << STEAKTOTAL;
                }
                if (PIZZAaTOTAL > 0) {
                    cout << "\n " << PIZZAaTOTAL << "x Pizza(s) for: $" << PIZZATOTAL;
                }
                if (PORKaTOTAL > 0) {
                    cout << "\n " << PORKaTOTAL << "x Pork Rib(s) for: $" << PORKTOTAL;
                }
                if (SPAGaTOTAL > 0) {
                    cout << "\n " << SPAGaTOTAL << "x Spaghetti for: $" << SPAGTOTAL;
                }
                if (HAMaTOTAL > 0) {
                    cout << "\n " << HAMaTOTAL << "x Hamburger(s) for: $" << HAMTOTAL;
                }
                if (CHICKENaTOTAL > 0) {
                    cout << "\n " << CHICKENaTOTAL << "x Chicken Burger(s) for: $" << CHICKENTOTAL;
                }
                if (FISHaTOTAL > 0) {
                    cout << "\n " << FISHaTOTAL << "x Fish and Chip(s) for: $" << FISHTOTAL;
                }
                if (GARDENaTOTAL > 0) {
                    cout << "\n " << GARDENaTOTAL << "x Garden Salad(s) for: $" << GARDENTOTAL;
                }
                if (LAMBaTOTAL > 0) {
                    cout << "\n " << LAMBaTOTAL << "x Lamb Shank(s) for: $" << LAMBTOTAL;
                }
                
                cout << "\n Meals Total: $" << MealsTotal;
                
                cout << "\n---------------------\n";
                
                cout << "SWEETS: ";
                if (ICEaTOTAL > 0) {
                    cout << "\n " << ICEaTOTAL << "x Ice Cream(s) for: $" << ICETOTAL;
                }
                if (SUNDAEaTOTAL > 0) {
                    cout << "\n " << SUNDAEaTOTAL << "x Sundae(s) for: $" << SUNDAETOTAL;
                }
                if (TIRAMISUaTOTAL > 0) {
                    cout << "\n " << TIRAMISUaTOTAL << "x Tiramisu(s) for: $" << TIRAMISUTOTAL;
                }
                if (CAKEaTOTAL > 0) {
                    cout << "\n " << CAKEaTOTAL << "x Chocolate Cake(s) for: $" << CAKETOTAL;
                }
                if (CHEESEaTOTAL > 0) {
                    cout << "\n " << CHEESEaTOTAL << "x Cheesecakes(s) for: $" << CHEESETOTAL;
                }
                if (PANNAaTOTAL > 0) {
                    cout << "\n " << PANNAaTOTAL << "x Panna Cotta(s) for: $" << PANNATOTAL;
                }
                if (MOUSEaTOTAL > 0) {
                    cout << "\n " << MOUSEaTOTAL << "x Chocolate Mousse(s) for: $" << MOUSETOTAL;
                }
                if (LEMONaTOTAL > 0) {
                    cout << "\n " << LEMONaTOTAL << "x Lemon Meringue(s) for: $" << LEMONTOTAL;
                }
                if (COCKTAILaTOTAL > 0) {
                    cout << "\n " << COCKTAILaTOTAL << "x Dessert Cocktail(s) for: $" << COCKTAILTOTAL;
                }
                cout << "\n Sweets Total: $" << SweetsTotal;
                
                cout << "\n---------------------";
                
                cout << "\n TOTAL: $" << CompleteCost;
                cout << "\n TIP: $" << TIP;
                cout << "\n REMAINING MONEY: $" << MONEY;
                
                cout << "\n---------------------";
                cout << "\n=====================" << endl;
                main();
            }
            
            else {
                continue;
            }
            
        }
    }
    // FINAL RECEIPT
    while(MONEY <= 0) {
        //this asks the user if they would like to leave a tip
        cout << "Would you like to leave a tip y/n: " << endl;
        cin >> CHOICE;
        
        if (CHOICE == 'y') {
            cout << "\nHow much would you like to leave as a tip: \n(p)ercentage or (a)mmount p/a";
            cin >> PorA;
            //This section calculates the tip as a percentage the user has inputed. eg if the cost of your meal is $100 and the user says they would leave a 10% tip the program will calulate you leaving a $10 tip
            if (PorA == 'p') {
                cout << "\nWhat percentage or your total would you like to leave as a tip?: (%)";
                cin >> TIPperc;
                TIPperc /= 100;
                TIP = CompleteCost * TIPperc;
                if (TIP > MONEY) {
                    cout << "\nTIP is more than avaliable Money\n";
                    continue;
                }
                if (MONEY >= TIP) {
                    MONEY -= TIP;
                    CHOICE = 'n';
                }
            }
            if (PorA == 'a') {
                cout << "\nHow much would you like to leave as a tip?: ($)";
                cin >> TIP;
                //This section caluclates the tip as an amount the user has input
                if (TIP > MONEY) {
                    cout << "\nTIP is more than avaliable Money\n";
                    continue;
                }
                if (MONEY >= TIP) {
                    MONEY -= TIP;
                    CHOICE = 'n';
                }
            }
        }
        if (CHOICE == 'n') {
            // RECEPIT
            cout << "Thank you for coming to 'le Restraunt de la Scuola'" << endl << "You're order will be with you shortly" << endl << endl;
            cout << "\nReceipt " << "\n=====================";
            cout << "\nYou have purchased: " << endl;
            //This section calculates the cost of the product the user purchased multiplied by the amount purchased by the user. The cattagories are spperated for each subroutine section of the menu (Drinks,Meals,Sweets)
            cout << "DRINKS: ";
            if (COKEaTOTAL > 0) {
                cout << "\n " << COKEaTOTAL << "x Coke(s) for: $" << COKETOTAL;
            }
            if (LEMONADEaTOTAL > 0) {
                cout << "\n " << LEMONADEaTOTAL << "x Lemonade(s) for: $" << LEMONADETOTAL;
            }
            if (TEAaTOTAL > 0) {
                cout << "\n " << TEAaTOTAL << "x Tea(s) for: $" << TEATOTAL;
            }
            if (COFFEEaTOTAL > 0) {
                cout << "\n " << COFFEEaTOTAL << "x Coffee(s) for: $" << COFFEETOTAL;
            }
            if (HOTaTOTAL > 0) {
                cout << "\n " << HOTaTOTAL << "x Hot Chocolate(s) for: $" << HOTTOTAL;
            }
            if (BEERaTOTAL > 0) {
                cout << "\n " << BEERaTOTAL << "x Beer(s) for: $" << BEERTOTAL;
            }
            if (RWINEgaTOTAL > 0) {
                cout << "\n " << RWINEgaTOTAL << "x Red Wine Glass(es) for: $" << RWINEgTOTAL;
            }
            if (RWINEbaTOTAL > 0) {
                cout << "\n " << RWINEbaTOTAL << "x Red Wine Bottle(s) for: $" << RWINEbTOTAL;
            }
            if (WWINEgaTOTAL > 0) {
                cout << "\n " << WWINEgaTOTAL << "x White Wine Glass(es) for: $" << WWINEgTOTAL;
            }
            if (WWINEbaTOTAL > 0) {
                cout << "\n " << WWINEbaTOTAL << "x Red Wine Bottle(s) for: $" << WWINEbTOTAL;
            }
            if (WATERaTOTAL > 0) {
                cout << "\n " << WATERaTOTAL << "x Water(s) for: $" << WATERTOTAL;
            }
            
            cout << "\n Drinks Total: $" << DrinksTotal;
            
            cout << "\n---------------------\n";
            
            cout << "MEALS: ";
            if (STEAKaTOTAL > 0) {
                cout << "\n " << STEAKaTOTAL << "x Steak and Chip(s) for: $" << STEAKTOTAL;
            }
            if (PIZZAaTOTAL > 0) {
                cout << "\n " << PIZZAaTOTAL << "x Pizza(s) for: $" << PIZZATOTAL;
            }
            if (PORKaTOTAL > 0) {
                cout << "\n " << PORKaTOTAL << "x Pork Rib(s) for: $" << PORKTOTAL;
            }
            if (SPAGaTOTAL > 0) {
                cout << "\n " << SPAGaTOTAL << "x Spaghetti for: $" << SPAGTOTAL;
            }
            if (HAMaTOTAL > 0) {
                cout << "\n " << HAMaTOTAL << "x Hamburger(s) for: $" << HAMTOTAL;
            }
            if (CHICKENaTOTAL > 0) {
                cout << "\n " << CHICKENaTOTAL << "x Chicken Burger(s) for: $" << CHICKENTOTAL;
            }
            if (FISHaTOTAL > 0) {
                cout << "\n " << FISHaTOTAL << "x Fish and Chip(s) for: $" << FISHTOTAL;
            }
            if (GARDENaTOTAL > 0) {
                cout << "\n " << GARDENaTOTAL << "x Garden Salad(s) for: $" << GARDENTOTAL;
            }
            if (LAMBaTOTAL > 0) {
                cout << "\n " << LAMBaTOTAL << "x Lamb Shank(s) for: $" << LAMBTOTAL;
            }
            
            cout << "\n Meals Total: $" << MealsTotal;
            
            cout << "\n---------------------\n";
            
            cout << "SWEETS: ";
            if (ICEaTOTAL > 0) {
                cout << "\n " << ICEaTOTAL << "x Ice Cream(s) for: $" << ICETOTAL;
            }
            if (SUNDAEaTOTAL > 0) {
                cout << "\n " << SUNDAEaTOTAL << "x Sundae(s) for: $" << SUNDAETOTAL;
            }
            if (TIRAMISUaTOTAL > 0) {
                cout << "\n " << TIRAMISUaTOTAL << "x Tiramisu(s) for: $" << TIRAMISUTOTAL;
            }
            if (CAKEaTOTAL > 0) {
                cout << "\n " << CAKEaTOTAL << "x Chocolate Cake(s) for: $" << CAKETOTAL;
            }
            if (CHEESEaTOTAL > 0) {
                cout << "\n " << CHEESEaTOTAL << "x Cheesecakes(s) for: $" << CHEESETOTAL;
            }
            if (PANNAaTOTAL > 0) {
                cout << "\n " << PANNAaTOTAL << "x Panna Cotta(s) for: $" << PANNATOTAL;
            }
            if (MOUSEaTOTAL > 0) {
                cout << "\n " << MOUSEaTOTAL << "x Chocolate Mousse(s) for: $" << MOUSETOTAL;
            }
            if (LEMONaTOTAL > 0) {
                cout << "\n " << LEMONaTOTAL << "x Lemon Meringue(s) for: $" << LEMONTOTAL;
            }
            if (COCKTAILaTOTAL > 0) {
                cout << "\n " << COCKTAILaTOTAL << "x Dessert Cocktail(s) for: $" << COCKTAILTOTAL;
            }
            cout << "\n Sweets Total: $" << SweetsTotal;
            
            cout << "\n---------------------";
            
            cout << "\n TOTAL: $" << CompleteCost;
            cout << "\n TIP: $" << TIP;
            cout << "\n REMAINING MONEY: $" << MONEY;
            
            cout << "\n---------------------";
            cout << "\n=====================" << endl;
            main();
        }
        
        else {
            continue;
        }
    }
}

//All the subroutine cout statements are here to make it easier to see and fix what the user will see when using the program

void meal() {
    cout << "\nWhat Meal would you like to buy: " << endl;
    cout << "1 : Steak and Chips : $20" << endl;
    cout << "2 : Pizza : $18" << endl;
    cout << "3 : Pork Ribs : $22" << endl;
    cout << "4 : Spaghetti : $15" << endl;
    cout << "5 : Hamburger : $14" << endl;
    cout << "6 : Chicken Burger : $14" << endl;
    cout << "7 : Fish and Chips : $15" << endl;
    cout << "8 : Garden Salad : $8" << endl;
    cout << "9 : Lamb Shank : $25" << endl;
    cout << "\n -1 to return to menu selection\n";
    cout << endl;
}

void drinks() {
    cout << "\nWhat Drink would you like to buy: " << endl;
    cout << "1 : Coke : $3.50" << endl;
    cout << "2 : Lemonade : $3.50" << endl;
    cout << "3 : Tea : $3" << endl;
    cout << "4 : Coffee : $3" << endl;
    cout << "5 : Hot Chocolate : $3" << endl;
    cout << "6 : Beer : $8" << endl;
    cout << "7 : Red Wine : B:$30 G:$10" << endl;
    cout << "8 : White Wine : B:$30 G:$10" << endl;
    cout << "9 : Water : Free" << endl;
    cout << "\n -1 to return to menu selection\n";
    cout << endl;
}

void sweets() {
    cout << "\nWhat Dessert would you like to buy: \n";
    cout << "1: Ice Cream : $4\n";
    cout << "2: Sundae : $5\n";
    cout << "3: Tiramisu : $6\n";
    cout << "4: Chocolate Cake : $5\n";
    cout << "5: Cheesecake : $6\n";
    cout << "6: Panna Cotta : $8\n";
    cout << "7: Chocolate Mousse : $8\n";
    cout << "8: Lemon Meringue : $6\n";
    cout << "9: Dessert Cocktail : $12\n";
    cout << "\n -1 to return to menu selection\n";
    cout << endl;
}


//SECRET
void bodies() {
    cout << "Let the bodies hit the floor" << endl;
    usleep(2000000);
    cout << "Let the bodies hit the floor" << endl;
    usleep(2000000);
    cout << "Let the bodies hit the..." << endl;
    usleep(1000000);
    cout << "CRASH" << endl;
    usleep(500000);
    cout << "CRASH" << endl;
    usleep(500000);
    cout << "FLOOOOOOOOORRRRRRR!!" << endl;
    usleep(100000);
    cout << " O" << endl;
    usleep(100000);
    cout << "  O" << endl;
    usleep(100000);
    cout << " O" << endl;
    usleep(100000);
    cout << "  O" << endl;
    usleep(100000);
    cout << "   O" << endl;
    
    usleep(100000);
    cout << "  O" << endl;
    usleep(100000);
    cout << "   O" << endl;
    usleep(100000);
    cout << "  O" << endl;
    usleep(100000);
    cout << " O" << endl;
    usleep(100000);
    cout << "  O" << endl;
    usleep(100000);
    cout << "   O" << endl;
    usleep(100000);
    cout << "  O" << endl;
    
    
    usleep(100000);
    cout << "   O" << endl;
    usleep(100000);
    cout << "  O" << endl;
    usleep(100000);
    cout << "   O" << endl;
    usleep(100000);
    cout << "    O" << endl;
    usleep(100000);
    cout << "     O" << endl;
    usleep(100000);
    cout << "    O" << endl;
    usleep(100000);
    cout << "   O" << endl;
    
    
    usleep(100000);
    cout << "    O" << endl;
    usleep(100000);
    cout << "   O" << endl;
    usleep(100000);
    cout << "    O" << endl;
    usleep(100000);
    cout << "     O" << endl;
    usleep(100000);
    cout << "      O" << endl;
    
    
    usleep(100000);
    cout << "     O" << endl;
    usleep(100000);
    cout << "    O" << endl;
    usleep(100000);
    cout << "     O" << endl;
    usleep(100000);
    cout << "    O" << endl;
    usleep(100000);
    cout << "   O" << endl;
    usleep(100000);
    cout << "    O" << endl;
    
    
    usleep(100000);
    cout << "     O" << endl;
    usleep(100000);
    cout << "    O" << endl;
    usleep(100000);
    cout << "   O" << endl;
    usleep(100000);
    cout << "    O" << endl;
    usleep(100000);
    cout << "   O" << endl;
    
    
    usleep(100000);
    cout << "  O" << endl;
    usleep(100000);
    cout << "   O" << endl;
    usleep(100000);
    cout << "    O" << endl;
    usleep(100000);
    cout << "   O" << endl;
    usleep(100000);
    cout << "  O" << endl;
    usleep(100000);
    cout << " O" << endl;
    
    usleep(100000);
    cout << "  O" << endl;
    usleep(100000);
    cout << " O" << endl;
    usleep(100000);
    cout << "  O" << endl;
    usleep(100000);
    cout << "   O" << endl;
    usleep(100000);
    cout << "  O" << endl;
    
    
    usleep(100000);
    cout << " O" << endl;
    usleep(100000);
    cout << "  O" << endl;
    usleep(100000);
    cout << " O" << endl;
    usleep(100000);
    cout << "O" << endl;
    usleep(100000);
    cout << " O" << endl;
    
    
    usleep(100000);
    cout << "O" << endl;
    usleep(100000);
    cout << " O" << endl;
    usleep(100000);
    cout << "O" << endl;
    usleep(100000);
    cout << "O" << endl;
    usleep(100000);
    cout << " O" << endl;
    usleep(100000);
    cout << "O" << endl;
    
    usleep(100000);
    cout << "  O" << endl;
    usleep(100000);
    cout << " O" << endl;
    usleep(100000);
    cout << "  O" << endl;
    usleep(100000);
    cout << "   O" << endl;
    usleep(100000);
    cout << "    O" << endl;
    usleep(100000);
    cout << "   O" << endl;
    usleep(100000);
    cout << "  O" << endl;
    
    
    usleep(100000);
    cout << "   O" << endl;
    usleep(100000);
    cout << "  O" << endl;
    usleep(100000);
    cout << "   O" << endl;
    usleep(100000);
    cout << "    O" << endl;
    usleep(100000);
    cout << "     O" << endl;
    usleep(100000);
    cout << "   O" << endl;
    usleep(100000);
    cout << "    O" << endl;
    
    
    usleep(100000);
    cout << "   O" << endl;
    usleep(100000);
    cout << "    O" << endl;
    usleep(100000);
    cout << "     O" << endl;
    usleep(100000);
    cout << "    O" << endl;
    usleep(100000);
    cout << "   O" << endl;
    
    
    usleep(100000);
    cout << "    O" << endl;
    usleep(100000);
    cout << "     O" << endl;
    usleep(100000);
    cout << "      O" << endl;
    usleep(100000);
    cout << "     O" << endl;
    usleep(100000);
    cout << "      O" << endl;
    usleep(100000);
    cout << "     O" << endl;
    
    
    usleep(100000);
    cout << "    O" << endl;
    usleep(100000);
    cout << "   O" << endl;
    usleep(100000);
    cout << "  O" << endl;
    usleep(100000);
    cout << "   O" << endl;
    usleep(100000);
    cout << "    O" << endl;
    
    
    usleep(100000);
    cout << "   O" << endl;
    usleep(100000);
    cout << "  O" << endl;
    usleep(100000);
    cout << "   O" << endl;
    usleep(100000);
    cout << "  O" << endl;
    usleep(100000);
    cout << " O" << endl;
    usleep(100000);
    cout << "  O" << endl;
    
    usleep(100000);
    cout << "   O" << endl;
    usleep(100000);
    cout << "  O" << endl;
    usleep(100000);
    cout << " O" << endl;
    usleep(100000);
    cout << "  O" << endl;
    usleep(100000);
    cout << "   O" << endl;
    
    
    usleep(100000);
    cout << "  O" << endl;
    usleep(100000);
    cout << " O" << endl;
    usleep(100000);
    cout << "  O" << endl;
    usleep(100000);
    cout << " O" << endl;
    usleep(100000);
    cout << "O" << endl;
    
    
    usleep(100000);
    cout << "O" << endl;
    usleep(100000);
    cout << " O" << endl;
    usleep(100000);
    cout << "O" << endl;
    usleep(100000);
    cout << "O" << endl;
    usleep(100000);
    cout << " O" << endl;
    usleep(100000);
    cout << "O" << endl;
    
    usleep(100000);
    cout << "R" << endl;
    usleep(100000);
    cout << " R" << endl;
    usleep(100000);
    cout << " R" << endl;
    usleep(100000);
    cout << "R" << endl;
    usleep(100000);
    cout << "R" << endl;
    usleep(100000);
    cout << " R" << endl;
    usleep(100000);
    cout << "  R" << endl;
    usleep(100000);
    cout << " R" << endl;
    usleep(100000);
    cout << "R" << endl;
    
    usleep(100000);
    cout << "!!" << endl;
    usleep(100000);
    cout << " !!" << endl;
    usleep(100000);
    cout << " !!" << endl;
    usleep(100000);
    cout << "!!" << endl;
    usleep(100000);
    cout << "!!" << endl;
    usleep(100000);
    cout << " !!" << endl;
    usleep(100000);
    cout << "  !!" << endl;
    usleep(100000);
    cout << " !!" << endl;
    usleep(100000);
    cout << "!!" << endl;
    
    
}