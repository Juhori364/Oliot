#ifndef GAME_H
#define GAME_H

class Game
{
public:
    Game(int num1);
    ~Game();
    void play();

private:
    int maxNumber;
    int playerGuess;
    int numOfGuesses;
    int randomNumber;
    void printGameResult();
};

#endif // GAME_H
