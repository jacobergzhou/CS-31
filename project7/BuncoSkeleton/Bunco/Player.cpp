//
//  Player.cpp
//  Bunco
//
//  Created by Howard Stahl on 1/27/17.
//  Copyright © 2017 Howard Stahl. All rights reserved.
//

#include "Player.h"



namespace cs31
{
    
    Player::Player() : mDie( 6 ), mScore( 0 ), mRound( 0 )
    {
        
    }
    
    // TODO: roll the die and adjust the score for the current round
    // accordingly
    // when the amount is zero, the Die should be rolled for random play
    // when the amount is not zero, we are trying to cheat for testing
    // purposes.  in that case, this method should force a specific roll
    // amount.
    int Player::roll( int amount )
    {
        // stubbed out for now...
        int result = 0;
        if(amount == 0)//when the amount is zero, play randomly
        {
            mDie.roll();
            result = mDie.getValue();//return the random result using getter
        }
        else//when the amount is not zero, manully set the result equal to the amount
        {
            result = amount;
        }
        if(result == mRound)
        {
            mScore++;
        }
        return result;
        }
    
    // TODO: set the current round and reset the player's score to 0
    void Player::setRound( int round )
    {
        // stubbed out for now...
        mRound = round;
        mScore = 0;//since the round is resetted, the score should also be resetted in order to get the correct outcome
    }
    
    // TODO: return the score member variable
    int  Player::getScore( ) const
    {
        // stubbed out for now...
        return( mScore );//return the score that the player accepts
    }
    
    
}
