#include <iostream>

#include<ctime>
using namespace std;
const char ROCK = 'R';
const char PAPER = 'P';
const char SCISSOR = 'S';
char getcomputeroption(){
       
    srand(time(0));
    int num = rand() % 3 + 1;
    if(num == 1){
        return 'R';
    }
    if(num == 2){
        return 'P';
    }
    if(num == 3){
        return 'S';
    }
}
char useroption(){
    char c;
    cout<<"Rock, Paper and Scissor Game!!"<<endl;
    cout<<"Choose one of the following options: "<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"(R) for Rock, (P) for Paper and (S) for scissors(Plz type in capitals only):"<<endl;
    cin>>c;
    while(c!='R'&& c!='P'&& c!='S'){
        cout<<"Please enter one of the options in the following: ";
        cout<<"(R) for rocks"<<endl<<"(P for paper)"<<endl<<"(S) for scissors";
        cin >> c;

    }
    return c;
};
void choosewinner( char uchoice, char cchoice){
    if(uchoice == ROCK && cchoice == PAPER){
        cout<<"Computer wins!!"<<endl;
    }
    else if(uchoice == PAPER && cchoice == SCISSOR){
        cout<<"Computer wins!!"<<endl;
    }
    else if(uchoice == SCISSOR && cchoice == ROCK){
        cout<<"Computer wins"<<endl;
    }
    else if(uchoice == ROCK && cchoice == SCISSOR){
        cout<<"User wins!!"<<endl;
    }
    else if(uchoice == PAPER && cchoice == ROCK){
        cout<<"User wins!!"<<endl;
    }
    else if(uchoice == SCISSOR && cchoice == PAPER){
        cout<<"User wins!!"<<endl;
    }
    else{
        cout<<"Tie, play again"<<endl;
    }
}
void showoptions(char option){
    if(option == 'R'){
        cout<<"Rock"<<endl;
    }
    if(option == 'P'){
        cout<<"Paper"<<endl;
    }
    if(option == 'S'){
        cout<<"Scissor"<<endl;
    }
}

int main(){
    char uchoice; //users choice
    uchoice = useroption();
    //computer choice
    char cchoice;
    cchoice = getcomputeroption();
    //shows user choice
    cout<<"User choice is: "<<endl;
    showoptions(uchoice);
    //shows computer choice
    cout<<"Computer choice is: "<<endl;
    showoptions(cchoice);

    //choose winner
    choosewinner(uchoice,cchoice);
}


