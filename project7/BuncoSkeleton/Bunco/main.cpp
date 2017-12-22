//
//  main.cpp
//  Bunco
//
//  Created by Howard Stahl on 1/27/17.
//  Copyright © 2017 Howard Stahl. All rights reserved.
//

#include <iostream>
#include "Die.h"
#include "Player.h"
#include "Bunco.h"
#include <cassert>
using namespace std;

void clearScreen( );



int main()
{
    using namespace std;
    using namespace cs31;
    // case 1 TIEDGAME
    {
        Bunco game;
        game.setRound ( 1 );
        {
            game.humanPlay( 3 );
            game.computerPlay( 4 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 3 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 2 );
            game.computerPlay( 3 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 2 );
            game.computerPlay( 1 );
            assert ( game.determineRoundOutcome() == Bunco::COMPUTERWON );
        }
        assert ( game.determineGameOutcome() == Bunco::GAMENOTOVER );
        game.setRound ( 2 );
        {
            game.humanPlay( 2 );
            game.computerPlay( 3 );
            assert ( game.determineRoundOutcome() == Bunco::HUMANWON );
        }
        game.setRound ( 3 );
        {
            game.humanPlay( 6 );
            game.computerPlay( 3 );
            assert ( game.determineRoundOutcome() == Bunco::COMPUTERWON );
        }
        game.setRound ( 4 );
        {
            game.humanPlay( 4 );
            game.computerPlay( 4 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 4 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::HUMANWON );
        }
        assert ( game.determineGameOutcome() == Bunco::GAMENOTOVER );
        game.setRound ( 5 );
        {
            game.humanPlay( 6 );
            game.computerPlay( 5 );
            assert ( game.determineRoundOutcome() == Bunco::COMPUTERWON );
        }
        game.setRound ( 6 );
        {
            game.humanPlay( 2 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 4 );
            game.computerPlay( 3 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 2 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 5 );
            game.computerPlay( 5 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 6 );
            game.computerPlay( 5 );
            assert ( game.determineRoundOutcome() == Bunco::HUMANWON );
        }
        assert ( game.determineGameOutcome() == Bunco::TIEDGAME );
    }
    // case 1 prime TIEDGAME
    {
        Bunco game;
        game.setRound ( 4 );
        {
            game.humanPlay( 4 );
            game.computerPlay( 4 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 4 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::HUMANWON );
        }
        game.setRound ( 3 );
        {
            game.humanPlay( 6 );
            game.computerPlay( 3 );
            assert ( game.determineRoundOutcome() == Bunco::COMPUTERWON );
        }
        game.setRound ( 6 );
        {
            game.humanPlay( 2 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 4 );
            game.computerPlay( 3 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 2 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 5 );
            game.computerPlay( 5 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 6 );
            game.computerPlay( 5 );
            assert ( game.determineRoundOutcome() == Bunco::HUMANWON );
        }
        assert ( game.determineGameOutcome() == Bunco::GAMENOTOVER );
        game.setRound ( 5 );
        {
            game.humanPlay( 6 );
            game.computerPlay( 5 );
            assert ( game.determineRoundOutcome() == Bunco::COMPUTERWON );
        }
        game.setRound ( 1 );
        {
            game.humanPlay( 3 );
            game.computerPlay( 4 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 3 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 2 );
            game.computerPlay( 3 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 2 );
            game.computerPlay( 1 );
            assert ( game.determineRoundOutcome() == Bunco::COMPUTERWON );
        }
        assert ( game.determineGameOutcome() == Bunco::GAMENOTOVER );
        game.setRound ( 2 );
        {
            game.humanPlay( 2 );
            game.computerPlay( 3 );
            assert ( game.determineRoundOutcome() == Bunco::HUMANWON );
        }
        assert ( game.determineGameOutcome() == Bunco::TIEDGAME );
    }
    // case 2 COMPUTERWONGAME
    {
        Bunco game;
        game.setRound ( 1 );
        {
            game.humanPlay( 4 );
            game.computerPlay( 3 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 4 );
            game.computerPlay( 5 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 3 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 5 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 4 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 2 );
            game.computerPlay( 5 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 3 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 5 );
            game.computerPlay( 4 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 5 );
            game.computerPlay( 5 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 5 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 4 );
            game.computerPlay( 4 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 5 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 2 );
            game.computerPlay( 5 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 4 );
            game.computerPlay( 4 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 1 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::HUMANWON );
        }
        game.setRound ( 2 );
        {
            game.humanPlay( 1 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::COMPUTERWON );
        }
        assert ( game.determineGameOutcome() == Bunco::GAMENOTOVER );
        game.setRound ( 3 );
        {
            game.humanPlay( 6 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 4 );
            game.computerPlay( 4 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 2 );
            game.computerPlay( 5 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 1 );
            game.computerPlay( 3 );
            assert ( game.determineRoundOutcome() == Bunco::COMPUTERWON );
        }
        game.setRound ( 4 );
        {
            game.humanPlay( 2 );
            game.computerPlay( 4 );
            assert ( game.determineRoundOutcome() == Bunco::COMPUTERWON );
        }
        game.setRound ( 5 );
        {
            game.humanPlay( 4 );
            game.computerPlay( 3 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 3 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 2 );
            game.computerPlay( 1 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 4 );
            game.computerPlay( 3 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 5 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::HUMANWON );
        }
        game.setRound ( 6 );
        {
            game.humanPlay( 2 );
            game.computerPlay( 3 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 5 );
            game.computerPlay( 5 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 3 );
            game.computerPlay( 6 );
            assert ( game.determineRoundOutcome() == Bunco::COMPUTERWON );
        }
        assert ( game.determineGameOutcome() == Bunco::COMPUTERWONGAME );
    }
    // case 2 prime COMPUTERGAME
    {
        Bunco game;
        game.setRound ( 6 );
        {
            game.humanPlay( 2 );
            game.computerPlay( 3 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 5 );
            game.computerPlay( 5 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 3 );
            game.computerPlay( 6 );
            assert ( game.determineRoundOutcome() == Bunco::COMPUTERWON );
        }
        game.setRound ( 1 );
        {
            game.humanPlay( 4 );
            game.computerPlay( 3 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 4 );
            game.computerPlay( 5 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 3 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 5 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 4 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 2 );
            game.computerPlay( 5 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 3 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 5 );
            game.computerPlay( 4 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 5 );
            game.computerPlay( 5 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 5 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 4 );
            game.computerPlay( 4 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 5 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 2 );
            game.computerPlay( 5 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 4 );
            game.computerPlay( 4 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 1 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::HUMANWON );
        }
        game.setRound ( 4 );
        {
            game.humanPlay( 2 );
            game.computerPlay( 4 );
            assert ( game.determineRoundOutcome() == Bunco::COMPUTERWON );
        }
        game.setRound ( 3 );
        {
            game.humanPlay( 6 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 4 );
            game.computerPlay( 4 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 2 );
            game.computerPlay( 5 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 1 );
            game.computerPlay( 3 );
            assert ( game.determineRoundOutcome() == Bunco::COMPUTERWON );
        }
        game.setRound ( 2 );
        {
            game.humanPlay( 1 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::COMPUTERWON );
        }
        assert ( game.determineGameOutcome() == Bunco::GAMENOTOVER );
        game.setRound ( 5 );
        {
            game.humanPlay( 4 );
            game.computerPlay( 3 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 3 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 2 );
            game.computerPlay( 1 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 4 );
            game.computerPlay( 3 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 5 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::HUMANWON );
        }
        assert ( game.determineGameOutcome() == Bunco::COMPUTERWONGAME );
    }
    // case 3 HUMANWONGAME
    {
        Bunco game;
        game.setRound ( 1 );
        {
            game.humanPlay( 6 );
            game.computerPlay( 3 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 5 );
            game.computerPlay( 5 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 3 );
            game.computerPlay( 5 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 3 );
            game.computerPlay( 4 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 1 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::HUMANWON );
        }
        game.setRound ( 2 );
        {
            game.humanPlay( 2 );
            game.computerPlay( 1 );
            assert ( game.determineRoundOutcome() == Bunco::HUMANWON );
        }
        game.setRound ( 3 );
        {
            game.humanPlay( 4 );
            game.computerPlay( 6 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 2 );
            game.computerPlay( 3 );
            assert ( game.determineRoundOutcome() == Bunco::COMPUTERWON );
        }
        game.setRound ( 4 );
        {
            game.humanPlay( 4 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::HUMANWON );
        }
        game.setRound ( 5 );
        {
            game.humanPlay( 5 );
            game.computerPlay( 3 );
            assert ( game.determineRoundOutcome() == Bunco::HUMANWON );
        }
        game.setRound ( 6 );
        {
            game.humanPlay( 6 );
            game.computerPlay( 3 );
            assert ( game.determineRoundOutcome() == Bunco::HUMANWON );
        }
        assert ( game.determineGameOutcome() == Bunco::HUMANWONGAME );
        
    }
    // case 3 prime HUMANWONGAME
    {
        Bunco game;
        game.setRound ( 1 );
        {
            game.humanPlay( 6 );
            game.computerPlay( 3 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 5 );
            game.computerPlay( 5 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 3 );
            game.computerPlay( 5 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 3 );
            game.computerPlay( 4 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 1 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::HUMANWON );
        }
        game.setRound ( 4 );
        {
            game.humanPlay( 4 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::HUMANWON );
        }
        game.setRound ( 2 );
        {
            game.humanPlay( 2 );
            game.computerPlay( 1 );
            assert ( game.determineRoundOutcome() == Bunco::HUMANWON );
        }
        game.setRound ( 3 );
        {
            game.humanPlay( 4 );
            game.computerPlay( 6 );
            assert ( game.determineRoundOutcome() == Bunco::NOTDECIDED );
            game.humanPlay( 2 );
            game.computerPlay( 3 );
            assert ( game.determineRoundOutcome() == Bunco::COMPUTERWON );
        }
        game.setRound ( 5 );
        {
            game.humanPlay( 5 );
            game.computerPlay( 3 );
            assert ( game.determineRoundOutcome() == Bunco::HUMANWON );
        }
        game.setRound ( 6 );
        {
            game.humanPlay( 6 );
            game.computerPlay( 3 );
            assert ( game.determineRoundOutcome() == Bunco::HUMANWON );
        }
        assert ( game.determineGameOutcome() == Bunco::HUMANWONGAME );
    }
    // case 4 Reset A Round
    {
        Bunco game;
        game.setRound ( 1 );
        {
            game.humanPlay( 1 );
            game.computerPlay( 3 );
            assert ( game.determineRoundOutcome() == Bunco::HUMANWON );
        }
        game.setRound ( 2 );
        {
            game.humanPlay( 1 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::COMPUTERWON );
        }
        game.setRound ( 3 );
        {
            game.humanPlay( 3 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::HUMANWON );
        }
        game.setRound ( 4 );
        {
            game.humanPlay( 3 );
            game.computerPlay( 4 );
            assert ( game.determineRoundOutcome() == Bunco::COMPUTERWON );
        }
        game.setRound ( 5 );
        {
            game.humanPlay( 5 );
            game.computerPlay( 2 );
            assert ( game.determineRoundOutcome() == Bunco::HUMANWON );
        }
        game.setRound ( 6 );
        {
            game.humanPlay( 3 );
            game.computerPlay( 6 );
            assert ( game.determineRoundOutcome() == Bunco::COMPUTERWON );
        }
        assert ( game.determineGameOutcome() == Bunco::TIEDGAME );
        
        game.setRound ( 5 );
        {
            game.humanPlay( 2 );
            game.computerPlay( 5 );
            assert ( game.determineRoundOutcome() == Bunco::COMPUTERWON );
        }
       // assert ( game.determineGameOutcome() == Bunco::COMPUTERWONGAME );
        
        game.setRound ( 2 );
        {
            game.humanPlay( 2 );
            game.computerPlay( 3 );
            assert ( game.determineRoundOutcome() == Bunco::HUMANWON );
        }
     //   assert ( game.determineGameOutcome() == Bunco::TIEDGAME );
        
        game.setRound ( 6 );
        {
            game.humanPlay( 3 );
            game.computerPlay( 6 );
            assert ( game.determineRoundOutcome() == Bunco::COMPUTERWON );
        }
      //  assert ( game.determineGameOutcome() == Bunco::TIEDGAME );
        
        game.setRound ( 3 );
        {
            game.humanPlay( 6 );
            game.computerPlay( 3 );
            assert ( game.determineRoundOutcome() == Bunco::COMPUTERWON );
        }
        //assert ( game.determineGameOutcome() == Bunco::COMPUTERWONGAME );
    }
    // case 5
    {
        Die d;
        for (int i = 1; i <= 100; i++)
        {
            d.roll();
            int value = d.getValue();
            assert( value >=1 && value <= 6 );
        }
        
        
        Player p;
        assert( p.getScore() == 0 );
        p.setRound( 1 );
        assert( p.getScore() == 0 );
        assert( p.roll( 6 ) == 6 );
        assert( p.getScore() == 0 );
        assert( p.roll( 5 ) == 5 );
        assert( p.getScore() == 0 );
        assert( p.roll( 1 ) == 1);
        assert( p.getScore() == 1 );
        p.setRound( 6 );
        assert( p.getScore() == 0 );
        assert( p.roll( 6 ) == 6 );
        assert( p.getScore() == 1 );
        
        
        
        Bunco b;
        b.setRound( 1 );
        assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
        b.humanPlay( 5 );
        b.computerPlay( 5 );
        assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
        b.computerPlay( 1 );
        b.humanPlay( 1 );
        assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
        b.computerPlay( 1 );
        b.humanPlay( 2 );
        assert( b.determineRoundOutcome() == Bunco::COMPUTERWON );
        assert( b.determineGameOutcome() == Bunco::GAMENOTOVER);
        b.setRound(2);
        b.computerPlay( 1 );
        b.humanPlay( 1 );
        assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
        b.computerPlay( 2 );
        b.humanPlay(3);
        assert( b.determineRoundOutcome() == Bunco::COMPUTERWON );
        b.setRound(3);
        b.computerPlay( 1 );
        b.humanPlay( 1 );
        assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
        b.computerPlay(3);
        b.humanPlay(4);
        assert( b.determineRoundOutcome() == Bunco::COMPUTERWON );
        b.setRound(4);
        b.computerPlay(4);
        b.humanPlay(3);
        assert( b.determineRoundOutcome() == Bunco::COMPUTERWON );
        assert( b.determineGameOutcome() == Bunco::GAMENOTOVER);
        b.setRound(5);
        b.computerPlay( 1 );
        b.humanPlay( 1 );
        assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
        b.computerPlay(5);
        b.humanPlay(3);
        assert( b.determineRoundOutcome() == Bunco::COMPUTERWON );
        b.setRound(6);
        b.computerPlay(6);
        b.humanPlay(3);
        assert( b.determineRoundOutcome() == Bunco::COMPUTERWON );
        assert( b.determineGameOutcome() == Bunco::COMPUTERWONGAME);
        b.setRound( 1 );
        b.computerPlay(6);
        b.humanPlay(1);
        assert( b.determineRoundOutcome() == Bunco::HUMANWON );
      //  assert( b.determineGameOutcome() == Bunco::COMPUTERWONGAME);
        b.setRound(2);
        b.computerPlay( 1 );
        b.humanPlay( 1 );
        assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
        b.humanPlay(2);
        b.computerPlay(3);
        assert( b.determineRoundOutcome() == Bunco::HUMANWON);
        b.setRound(3);
        b.computerPlay( 1 );
        b.humanPlay( 1 );
        assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
        b.computerPlay(4);
        b.humanPlay(3);
        assert( b.determineRoundOutcome() == Bunco::HUMANWON);
     //   assert( b.determineGameOutcome() == Bunco::TIEDGAME);
        b.setRound(4);
        b.humanPlay(4);
        b.computerPlay(3);
        assert( b.determineRoundOutcome() == Bunco::HUMANWON );
       // assert( b.determineGameOutcome() == Bunco::HUMANWONGAME);
        
    }
    cerr << "All tests passed!" << endl;
}


void clearScreen();



///////////////////////////////////////////////////////////////////////////
//  clearScreen implementations
///////////////////////////////////////////////////////////////////////////

// DO NOT MODIFY OR REMOVE ANY CODE BETWEEN HERE AND THE END OF THE FILE!!!
// THE CODE IS SUITABLE FOR VISUAL C++, XCODE, AND g++ UNDER LINUX.

// Note to Xcode users:  clearScreen() will just write a newline instead
// of clearing the window if you launch your program from within Xcode.
// That's acceptable.

#ifdef _MSC_VER  //  Microsoft Visual C++

#include <windows.h>

void clearScreen()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    DWORD dwConSize = csbi.dwSize.X * csbi.dwSize.Y;
    COORD upperLeft = { 0, 0 };
    DWORD dwCharsWritten;
    FillConsoleOutputCharacter(hConsole, TCHAR(' '), dwConSize, upperLeft,
                               &dwCharsWritten);
    SetConsoleCursorPosition(hConsole, upperLeft);
}

#else  // not Microsoft Visual C++, so assume UNIX interface

#include <cstring>

void clearScreen()  // will just write a newline in an Xcode output window
{
    using namespace std;
    static const char* term = getenv("TERM");
    if (term == nullptr  ||  strcmp(term, "dumb") == 0)
    {
        cout << endl << endl << endl << endl << endl << endl << endl << endl;;
    }
    else
    {
        static const char* ESC_SEQ = "\x1B[";  // ANSI Terminal esc seq:  ESC [
        cout << ESC_SEQ << "2J" << ESC_SEQ << "H" << flush;
    }
}

#endif

