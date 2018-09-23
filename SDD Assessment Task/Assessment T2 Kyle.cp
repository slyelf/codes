//
//  Game.cpp
//  Assessment Task
//
//  Created by  on 20/02/2017.
//  Copyright (c) 2017 Kyle Walker. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <stdlib.h>
#include <math.h>
#include <random>
#include <time.h>
#include <ctime>
#include <unistd.h>


//removes the need for "std::"
using namespace std;


// ***
// MAIN
// ***
int main(){
    
    void clear(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void inventory(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void item(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void action(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void tutorial(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void namecheck(string PLAYERNAME);
    void game (string*slot, string location, int tutstage, string PLAYERNAME, int door);
    
    string PLAYERNAME;
    string worldname = "TextBasedGamesR'Us";
    
    
    //GAME START
    cout << "============================\n";
    cout << "Welcome to the world of " << worldname << ".\n";
    cout << "Now then. What is your name?: \n";
    cin >> PLAYERNAME;
    
    namecheck(PLAYERNAME);
    
}


// *********
// NAMECHECK
// *********
void namecheck(string PLAYERNAME) {
    void clear(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void inventory(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void item(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void action(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void tutorial(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void namecheck(string PLAYERNAME);
    void game (string*slot, string location, int tutstage, string PLAYERNAME, int door);

    
    char TUTORIAL, BOOLEAN;
    
    cout << "\n\n" << PLAYERNAME << " is that correct? Y/N";
    cin >> BOOLEAN;
    
    while (BOOLEAN == 'N' or BOOLEAN == 'n') {
        cout << "\n\nIm sorry, What is your name?: ";
        cin >> PLAYERNAME;
        namecheck(PLAYERNAME);
    }
    if (BOOLEAN == 'Y' or BOOLEAN == 'y') {
        cout << "\n\nThank you.\nHello " << PLAYERNAME;
        
        cout << "\n\nMy name is Argy the Tutor.\nI am here to help you transition into the world.\nWould you like to run the tutorial.Y/N: ";
        cin >> TUTORIAL;
        
        if (TUTORIAL == 'Y' or BOOLEAN == 'y') {
            int door=0;
            string location = "tut1";
            string slot[11] = {"", "Matchstick", "Key", "Wallet", "Apple", "Torch", "", "", "", "", ""};
            int tutstage = 1;
            tutorial(slot, location, tutstage, PLAYERNAME, door);
        }
        if (TUTORIAL == 'N' or BOOLEAN == 'n') {
            int door=0;
            int tutstage = 0;
            string slot[10] = {"", "", "", "", "", "", "", "", "", ""};
            string location = "start";
            game(slot,location,tutstage,PLAYERNAME,door);
        }
    }
}



// ********
// INVENTORY
// ********
void inventory(string*slot, string location, int tutstage, string PLAYERNAME, int door) {
    
    void clear(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void inventory(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void item(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void action(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void tutorial(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void namecheck(string PLAYERNAME);
    void game (string*slot, string location, int tutstage, string PLAYERNAME, int door);
    
    cout << "\n\n"
    << "╔═══════╗\n"
    << "║ ITEMS ║\n"
    << "╠═══════╩══════════════════\n";
    cout << "║ Equiped :\n";
    if (slot[0].length() >= 0) {cout << "║ 0 -" << slot[0] << "\n";}
    cout << "║ Backpack:\n";
    if (slot[1].length() > 0) {cout << "║ 1 -" << slot[1] << "\n";}
    if (slot[2].length() > 0) {cout << "║ 2 -" << slot[2] << "\n";}
    if (slot[3].length() > 0) {cout << "║ 3 -" << slot[3] << "\n";}
    if (slot[4].length() > 0) {cout << "║ 4 -" << slot[4] << "\n";}
    if (slot[5].length() > 0) {cout << "║ 5 -" << slot[5] << "\n";}
    if (slot[6].length() > 0) {cout << "║ 6 -" << slot[6] << "\n";}
    if (slot[7].length() > 0) {cout << "║ 7 -" << slot[7] << "\n";}
    if (slot[8].length() > 0) {cout << "║ 8 -" << slot[8] << "\n";}
    if (slot[9].length() > 0) {cout << "║ 9 -" << slot[9] << "\n";}
    if (slot[10].length() > 0) {cout << "║ 10-" << slot[10] << "\n";}
    
    cout << "╚══════════════════════════\n";
    
    if (tutstage == 1) {
        cout << "\n\nNice you accessed the Inventory.";
        tutstage = 2;
        tutorial(slot, location, tutstage, PLAYERNAME, door);
    }
    
    if (tutstage >= 2) {tutorial(slot,location,tutstage, PLAYERNAME, door);}
    if (tutstage == 0) {action(slot,location,tutstage, PLAYERNAME, door);}
}

// ****
// ITEM
// ****
void item(string*slot, string location, int tutstage, string PLAYERNAME, int door) {
    void inventory(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void item(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void action(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void tutorial(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void namecheck(string PLAYERNAME);
    void game (string*slot, string location, int tutstage, string PLAYERNAME, int door);
    
    

    int i;
    char confirm;
    cin >> i;
    
    i = i;
        cout << "Would you like to use: " << slot[i] << " ? Y/N\n";
        cin >> confirm;
        
        if (confirm == 'y' or confirm == 'Y') {
            if (slot[i] == "Torch" && location == "tut1") {
                cout << "\n\nYou light up the path.\nYou see a door in front of you.";
                location = "tut2";
                tutstage = 3;
                tutorial(slot, location, tutstage, PLAYERNAME, door);
            }
            if (slot[i] == "Key" && location == "tut2") {
                cout <<"\n\nYou hold the key.";
                slot[0] = "Key";
                slot[i] = "";
                tutstage = 5;
                
                int x = i;
                
                for (x=i;x<12;x++) {
                    slot[x]=slot[x+1];
                }
                slot[10] = "";
                tutorial(slot,location,tutstage,PLAYERNAME, door);

            }
            else {
                cout << "\n\nSorry you can't use that here";
                action(slot, location, tutstage, PLAYERNAME, door);
            }
        }
        else {
            action(slot, location, tutstage, PLAYERNAME, door);
        }
}

// ****
// OPEN
// ****
void open(string*slot, string location, int tutstage, string PLAYERNAME, int door) {
    void inventory(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void item(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void action(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void tutorial(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void namecheck(string PLAYERNAME);
    void game (string*slot, string location, int tutstage, string PLAYERNAME);
    
    door = 0;
    
    if (location == "tut2") {
        if (door == 0) {
            cout << "\n\nThe door appears to be locked.";
            
            if (slot[0] == "Key") {
                cout << "\n\nYou successfully unlock and open the door.\nThey key breaks in the process.";
                door=1;
                tutstage = 6;
                slot[0] = "";
                tutorial(slot,location,tutstage,PLAYERNAME, door);
            }
            
            tutstage = 4;
            tutorial(slot,location,tutstage,PLAYERNAME, door);
        }
    }
    else {
        cout << "There is nothing nearby that can be opened.";
        action(slot, location, tutstage, PLAYERNAME, door);
    }
}

// *****
// CHECK
// *****
void check(string*slot, string location, int tutstage, string PLAYERNAME, int door) {
    void clear(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void inventory(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void item(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void action(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void tutorial(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void namecheck(string PLAYERNAME);
    void game (string*slot, string location, int tutstage, string PLAYERNAME, int door);
    
    if (location == "tut1") {
        cout << "\n\nThe room is too dark to see much of anything.";
    }
    if (location == "tut2") {
        cout << "\n\nYou look around you and discover that you were in a jail cell.\nYou see a cell door in front of you and a note on the ground that reads:\n"
        << "    Dear " << PLAYERNAME << ",\n"
        << "    I hope that you can help me and save this world.\n"
        << "    All I know is that it will happen soon and that\n"
        << "    he will arrive. I wish I could tell you more but\n"
        << "    I do not have much time. Thank you " << PLAYERNAME << ". I hope you can do it.";
        }
    
    /*cout << "\nDEV:"
    << "\n  Location: " << location
    << "\n  tutstage: " << tutstage
    << "\n  PLAYERNAME: " << PLAYERNAME
    << "\n  Door: " << door;*/
    
    action(slot, location, tutstage, PLAYERNAME, door);
}

// ****
// MOVE
// ****
void move(string*slot, string location, int tutstage, string PLAYERNAME, int door){
    void clear(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void inventory(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void item(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void action(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void tutorial(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void namecheck(string PLAYERNAME);
    void game (string*slot, string location, int tutstage, string PLAYERNAME, int door);
    
    /*cout << "\nDEV:"
    << "\n  Location: " << location
    << "\n  tutstage: " << tutstage
    << "\n  PLAYERNAME: " << PLAYERNAME
    << "\n  Door: " << door;*/
    
    
    //TUTORIAL
    if (location == "tut1" && door == '0') {
        cout << "\n\nYou can't see anywhere to move to";
        action(slot,location,tutstage,PLAYERNAME,door);
    }
    if (location == "tut2") {
        if (door == 0) {
            cout << "\n\nYou see a door that looks like there is somewhere on the other side.\nNow if only you can get through.";
            action(slot,location,tutstage,PLAYERNAME,door);
        }
        if (door == 1) {
            cout << "\n\nYou exit the cell and are faced by a Jail guard";
            location = "tut3";
            tutstage = 7;
            tutorial(slot,location,tutstage,PLAYERNAME,door);
        }
        if (door == 2) {
            string option;
            cout << "\n\nYou can return to the Warden's (office) or stay (here).";
            cin >> option;
            if (option == "office" or option == "OFFICE" or option == "o") {
                location = "tut3";
                cout << "\nYou enter the Warden's office";
                action(slot,location,tutstage,PLAYERNAME,door);
            }
            if (option == "here" or option == "HERE" or option == "h") {
                cout << "\nYou stay in the Jail Cell";
                action(slot,location,tutstage,PLAYERNAME,door);
            }

        }
    }
    if (location == "tut3" && door == '2') {
        string option;
        cout << "\n\nYou can return to the (cell) or stay (here).";
        cin >> option;
        
        if (option == "cell" or option == "CELL" or option == "c") {
            location = "tut2";
            cout << "\nYou enter the Jail Cell";
            action(slot,location,tutstage,PLAYERNAME,door);
        }
        if (option == "here" or option == "HERE" or option == "h") {
            cout << "\nYou stay in the Warden's office";
            action(slot,location,tutstage,PLAYERNAME,door);
        }
    }
    //GAME
    
}

// *****
// ATTACK
// *****
void attack(string*slot, string location, int tutstage, string PLAYERNAME, int door){
    void clear(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void inventory(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void item(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void action(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void tutorial(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void namecheck(string PLAYERNAME);
    void game (string*slot, string location, int tutstage, string PLAYERNAME, int door);
    
    
    srand(time(NULL));
    
    
    if (location == "tut3") {
        if (door == 1) {
            int GuardHealth = 20;
            int PlayerHeath = 100;
            
            while (PlayerHeath > 0) {
                int damage = rand() % 21 + 1;
                cout << "\n\nYou attack the guard for: " << damage;
                GuardHealth = GuardHealth - damage;
                cout << "\nGuard Health: " << GuardHealth;
                
                int guarddamage = rand() %21 + 1;
                cout << "\n\nGuard attacks\nGuard hits you for: " << guarddamage;
                
                PlayerHeath = PlayerHeath - guarddamage;
                cout << "\nCurrent Health: " << PlayerHeath;
                
                if (GuardHealth <= 0) {
                    cout << "\n\nYou kill the Guard!";
                    door = 2;
                    tutstage = 8;
                    tutorial(slot, location, tutstage, PLAYERNAME, door);
                }
                if (PlayerHeath <= 0) {
                    cout << "\n\nYou die!\nGAME OVER!!";
                    main();
                }
                
            }
        }
    }
}


// *****
// ACTION
// *****
void action(string*slot, string location, int tutstage, string PLAYERNAME, int door){
    void clear(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void inventory(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void item(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void action(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void tutorial(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void namecheck(string PLAYERNAME);
    void game (string*slot, string location, int tutstage, string PLAYERNAME, int door);
    
    
    
    string ACTION;
    cout << "\nACTION: ";
    cin >> ACTION;
    
    if (ACTION == "INV" or ACTION == "inv") {
        inventory(slot, location, tutstage, PLAYERNAME, door);
    }
    if (ACTION == "ITEM" or ACTION == "item") {
        item(slot, location, tutstage, PLAYERNAME, door);
    }
    if (ACTION == "OPEN" or ACTION == "open") {
        open(slot, location, tutstage, PLAYERNAME, door);
    }
    if (ACTION == "CHECK" or ACTION == "check") {
        check(slot, location, tutstage, PLAYERNAME, door);
    }
    if (ACTION == "MOVE" or ACTION == "move") {
        move(slot, location, tutstage, PLAYERNAME, door);
    }
    if (ACTION == "ATTACK" or ACTION == "attack") {
        attack(slot, location, tutstage, PLAYERNAME, door);
    }
    else {
        cout << "\n\nSorry you can't do that here.";
        
        if (tutstage >= 1) {tutorial(slot,location,tutstage, PLAYERNAME, door);}
        else {action(slot,location,tutstage, PLAYERNAME, door);}
    }
}

// *******
// TUTORIAL
// *******
void tutorial(string*slot, string location, int tutstage, string PLAYERNAME, int door){
    void clear(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void inventory(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void item(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void action(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void tutorial(string*slot, string location, int tutstage, string PLAYERNAME, int door);
    void namecheck(string PLAYERNAME);
    void game (string*slot, string location, int tutstage, string PLAYERNAME, int door);
    
    

    
    string ACTION;

    if (tutstage == 1) {
        cout << "\n\nWelcome to the Tutorial\nThis a Role-Playing Game set entirely in the text based world.\nIn this world sometimes an action may have to be performed.\nWhen an action can be performed the game will have the word ACTION: written to inform you of your option.\nAn example action is checking the inventory. To check your inventory, when given the prompt simply type: INV\nGive it a go now.";
        action(slot, location, tutstage, PLAYERNAME,door);
    }
    
    if (tutstage == 2) {
        cout << "\nAs you can see you have some various items.\nYou can hold a maximum of 10 items at a time.\nYou also would've noticed that slot 0 was free. This is your equiped item.\nTo use an item, from the ACTION: prompt, type ITEM 1 (1 can be substituted for the items position.)\nGive it a go, use the Torch to light up the area around us.";
        action(slot, location, tutstage, PLAYERNAME,door);
    }
    
    if (tutstage == 3) {
        cout << "\n\nGood Job. You have found a door in front of you. Why don't you try and OPEN it.";
        action(slot, location, tutstage, PLAYERNAME,door);
    }
    
    if (tutstage == 4) {
        cout << "\n\nHuh, it appears to be locked.\nIn cases like these it's a good idea to check your items again to see if there is any way to continue or to CHECK to see where you are and what else you can see.\nIn this case though we appear to have a key in our inventory that might be able to open the door.\nIn order to use an item on a door, first select the key to ready it, then OPEN the door.\nSome items can be readied when first selected to use on other objects.";
        action(slot,location,tutstage,PLAYERNAME,door);
    }
    if (tutstage == 5){
        cout << "\n\nPerfect, you equiped the key successfully, now try it on the door.";
        action(slot,location,tutstage,PLAYERNAME,door);
    }
    if (tutstage == 6){
        cout << "\n\nCongratulations, you managed to open the door.\nThis gives you access to another room which you can move to.\nIn order to move around, use the MOVE command.";
        action(slot,location,tutstage,PLAYERNAME,door);
    }
    if (tutstage == 7){
        cout << "\n   Jail Guard - Halt! Don't move! How did you get out of your cell?\nYou are about to be introduced to combat.\nIn order to attack, use the ATTACK command.";
        action(slot,location,tutstage,PLAYERNAME,door);
    }
    if (tutstage == 8) {
        cout << "\n\nThanks for playing the tutorial. You are now free to walk around and chill.\nFull game not complete.";
        action(slot,location,tutstage,PLAYERNAME,door);
    }
}



// ****
// GAME
// ****
void game(string*slot, string location, int tutstage, string PLAYERNAME, int door){
    cout << "\n\n\nLINK START";
}


