//
//  Bunco.cpp
//  Bunco
//
//  Created by Howard Stahl on 1/27/17.
//  Copyright © 2017 Howard Stahl. All rights reserved.
//

#include "Bunco.h"
#include <iostream>

namespace cs31
{
    Bunco::Bunco() : mRound( 0 )
    {
        
    }
    
    // stringify the game by stringifying the board
    std::string Bunco::display( std::string msg ) const
    {
        using namespace std;
        std::string s = mBoard.display();
        s = s + msg;
        
        if (gameIsOver())
        {
            if (determineGameOutcome() == TIEDGAME)
            {
                s = s + "\n\t\tBunco wound up tied!\n";
            }
            else if (determineGameOutcome() == HUMANWONGAME)
            {
                s = s + "\n\t\tyou won Bunco!\n";
            }
            else
            {
                s = s + "\n\t\tyou lost Bunco!\n";
            }
        }
        return( s );
    }
    
    // set the current round of play, notifying the board and each
    // player of the current round
    void Bunco::setRound( int round )
    {
        mRound = round;
        mBoard.setCurrentRound( round );
        mHuman.setRound(round);
        mComputer.setRound(round);
    }
    
    // TODO: let the human player play
    // when the amount is zero, the Die should be rolled for random play
    // when the amount is not zero, we are trying to cheat for testing
    // purposes.  in that case, this method should force a specific roll
    // amount.
    int Bunco::humanPlay( int amount )
    {
        // stubbed out for now...
            int amountrolled = 0;//set the default value for amountrolled
        amountrolled = mHuman.roll(amount);//if amount is zero, play randomly and return the random number, if amount is not zero, we can mannually set the amountrolled to be amount
        return (amountrolled);
    }
    
    // TODO: let the computer player play
    // when the amount is zero, the Die should be rolled for random play
    // when the amount is not zero, we are trying to cheat for testing
    // purposes.  in that case, this method should force a specific roll
    // amount.
    int Bunco::computerPlay( int amount )
    {
        // stubbed out for now...
        int amountrolled = 0;
        amountrolled = mComputer.roll(amount);//similar prinicipal as the humanplay function
        return(amountrolled);
    }
    
    // TODO: considering each player's score, determine the
    // winner of this round of play
    Bunco::ROUNDOUTCOME Bunco::determineRoundOutcome( ) 
    {
        // stubbed out for now...
        ROUNDOUTCOME result = ROUNDOUTCOME::NOTDECIDED;
        if(mComputer.getScore() > mHuman.getScore())//compare the score of human and computer
        {
            result = COMPUTERWON;
            mBoard.markComputerAsWinner();
        }
        if(mComputer.getScore() < mHuman.getScore())
        {
            result = HUMANWON;
            mBoard.markHumanAsWinner();
        }
               return( result );
    }
    
    // TODO: count up the number of won rounds by each player to determine
    // the game's outcome
    Bunco::GAMEOUTCOME  Bunco::determineGameOutcome( ) const
    {
        // stubbed out for now...
        GAMEOUTCOME result = GAMEOUTCOME::GAMENOTOVER;
        int countRound = mBoard.countUpComputerRoundWins() + mBoard.countUpHumanRoundWins();
        if(countRound == 6)//which means if the game has completed all six rounds
        {
          if(mBoard.countUpComputerRoundWins() > mBoard.countUpHumanRoundWins())
              result = COMPUTERWONGAME;
          else if(mBoard.countUpComputerRoundWins() < mBoard.countUpHumanRoundWins())
              result = HUMANWONGAME;
          else//(mBoard.countUpComputerRoundWins == mBoard.countUpHumanRoundWins)
              result = TIEDGAME;
        }
             return( result );
    }
    
    // is the game over?
    bool Bunco::gameIsOver() const
    {
        GAMEOUTCOME result = determineGameOutcome();
        return( result != GAMENOTOVER );
    }

}
