#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

Game::Game(int num1):maxNumber(num1), playerGuess(0), numOfGuesses(0){
    srand(std::time(0));
    randomNumber=rand()%num1+1;
    cout<<"Initialized with a maximum of "<<maxNumber<<"\n";
    };

void Game::play(){
    cout<<"Game started with a random number of "<<randomNumber<<"\n";
    cout<<"Guess a number: ";
    cin>>playerGuess;

     while(true){
    if(randomNumber==playerGuess){
        numOfGuesses++;
        cout<<"Correct!"<<endl;
        printGameResult();
        break;
    }
    else if(randomNumber>playerGuess){
        numOfGuesses++;
        cout<<"Larger"<<endl;
        cin>>playerGuess;
    }
    else{
        numOfGuesses++;
        cout<<"Smaller"<<endl;
        cin>>playerGuess;
    }
}
}

Game::~Game(){};

void Game::printGameResult(){
    cout<<"Number of guesses: "<<numOfGuesses<<"\n";
};
