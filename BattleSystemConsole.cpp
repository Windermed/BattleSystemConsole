// BattleSystemConsole.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//GLOBAL VARIABLES
string name;
string ENEMY_NAME;
string TEST_ENEMY;
int XP_EARNED;
int HERO_XP;
int HERO_LEVEL;
string presetDialogue;

string nameQuestionare() {

    cout << "First of all, what is your name: ";
    cin >> name;

    cout << "Your name is officially: " << name << "\n";
    return name;
}

string nameConfirmation() {

    
    string question1;
    bool validAnswer = false;

    //string confirmedName = nameQuestionare();

    do {
        cout << "is that correct?" << " if it is, type [Y] and if not, type [N] (but without the parentheses!)\n";
        cout << "What answer do you choose: ";
        cin >> question1;

        if (question1 == "Y") {
            cout << "                                              \n";
            cout << "Alright! Your name for this test session will be: " << name << "\n" << "good luck!";
            cout << "                                              \n";
            bool validAnswer = true;
            return question1;
        }
        else if (question1 == "N") {
            cout << "                                              \n";
            cout << "Alright! let's try this again shall we?" << endl;
            cout << "                                              \n";
            bool validAnswer = false;
        }
        else if (question1 != "Y" || question1 != "N") {
            cout << "                                              \n";
            cout << "Invalid answer! Please select either Y or N and try again!\n";
            cout << "                                              \n";
            bool validAnswer = false;
        }
    } while (!validAnswer);
}

void EnemyDialogue() {
    presetDialogue = "TESTMAN: is that so? well I suppose i must've put too much expectations on this then.\n";
    cout << presetDialogue;
    presetDialogue = "TESTMAN: but i mean really? what a waste of time. see ya!\n";
    cout << presetDialogue;
}

void EndBattle() {
    XP_EARNED = 20;
    cout << "Congratulations! You have successfully defeated " << TEST_ENEMY << "!\n";
    cout << "You have earned " << XP_EARNED << " XP from this battle!";

}

void testBattle() {
    int ENEMY_HEALTH = 250;
    int ENEMY_DEFENSE = 30;
    int ENEMY_ATTACK = 25;
    int HERO_ATTACK = 25;
    int HERO_DEFENSE = 30;
    int HERO_HEALTH = 150;
    int HERO;
    int BATTLE_INPUT;
    int DIALOGUE_INPUT;

    TEST_ENEMY = "TESTMAN";

    cout << "YOU HAVE ENCOUNTERED AN ENEMY: x1 " << TEST_ENEMY << " HAS APPEARED!\n";
    cout << "THIS ENEMY HAS " << ENEMY_HEALTH << " HP LEFT!\n";
    cout << "--------------------------------------\n";
    cout << "What shall you do?\n";
    cout << "[1] FIGHT [2] TALK [3] RUN\n";
    cout << "What will you choose: ";
    cin >> BATTLE_INPUT;

    if (BATTLE_INPUT == 1) {
        cout << name << " Has attacked " << TEST_ENEMY << " with all their strength!\n";
        int DAMAGE_DEALT = ENEMY_HEALTH - HERO_ATTACK;
        cout << "As a result, " << TEST_ENEMY << " now has " << DAMAGE_DEALT << " HP left!\n";
        cout << "  \n";
        EndBattle();

        //HERO_ATTACK - ENEMY_HEALTH;
    }
    else if (BATTLE_INPUT == 2) {
        cout << "You decided to start talking to " << TEST_ENEMY << "!\n";
        cout << " \n";
        cout << TEST_ENEMY << ": hey! why are you talking to me? \n";
        cout << " \n";
        cout << "[1] I was too bored. [2] I don't want to fight. [3] Why not?\n";
        cout << "What will you say? ";
        cin >> DIALOGUE_INPUT;
        if (DIALOGUE_INPUT == 1) {
            EnemyDialogue();
            EndBattle();
        }
    }
}
       



int main()
{
    int question2;
    cout << "Welcome to a Battle system made for a console. This is just a test to see what is possible and what isn't.\n";

    nameQuestionare();
    nameConfirmation();

    
    cout << "You have then entered a text box which you shall only see if you typed Y earlier, if not. this is a bug.\n";
    cout << "YOUR NAME IS OFFICIALLY: " << name << "!\n";
    cout << "what should we do today debugger?\n" << "If you desire a test battle, type [1] but if you desire a story, type [2]";
    cin >> question2;

    if (question2 == 1) {
        testBattle();
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
