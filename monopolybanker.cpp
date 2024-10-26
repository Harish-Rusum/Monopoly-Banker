#include <iostream>
using namespace std;


int p1 = 1000;
int p2 = 1000;
int p3 = 1000;
int p4 = 1000;
int p = 0;
int nom = 0;

void debit(int x);
void add(int y);

string func = "";

int main() {
    cout << "Player 1 Balance: " << p1 << "\n";
    cout << "Player 2 Balance: " << p2 << "\n";
    cout << "Player 3 Balance: " << p3 << "\n";
    cout << "Player 4 Balance: " << p4 << "\n";
    while (true) {
        cout << "Enter the Action: ";
        cin >> func;
        if (func == "debit") {
            cout << "Enter Amount: ";
            cin >> nom;
            debit(nom);
        }
        else if (func == "exit") {
            return 0;
        }
        cout << "Player 1 Balance: " << p1 << "\n";
        cout << "Player 2 Balance: " << p2 << "\n";
        cout << "Player 3 Balance: " << p3 << "\n";
        cout << "Player 4 Balance: " << p4 << "\n";
        }   
    return 0;
    }
    
void debit(int x) {
    
    cout << "Enter Player Number: ";
    cin >> p;
    if (p == 1) {
        if (p1 - x < 0){
            cout << "Card Declined\n";
        }
        else {
            p1 -= x;
        }
    }
    else if (p == 2) {
        if (p2 - x < 0){
            cout << "Card Declined\n";
        }
        else {
            p2 -= x;
        }
    }
    else if (p == 3) {
        if (p3 - x < 0){
            cout << "Card Declined\n";
        }
        else {
            p3 -= x;
        }
    }
    else if (p == 4) {
        if (p4 - x < 0){
            cout << "Card Declined\n";
        }
        else {
            p4 -= x;
        }
    }
}

void add(int y) {
    cout << "Enter Player Number: ";
    cin >> p;
    if (p == 1) {
        p1 += y;
    }
    else if (p == 2) {
        p2 += y;
    }
    else if (p == 3) {
        p3 += y;
    }
    else if (p == 4) {
        p4 += y;
    }
}