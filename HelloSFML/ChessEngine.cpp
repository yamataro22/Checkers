#include "stdafx.h"
#include "ChessEngine.h"


ChessEngine::ChessEngine()
{
}


ChessEngine::~ChessEngine()
{
}

void ChessEngine::addPlayers(std::string p_firstPlayer, std::string p_secondPlayer)
{
	players = std::make_pair(std::make_shared<Player>() , std::make_shared<Player>());
}



void ChessEngine::startGame()
{
	//while (not isGameFinished())
	//{
		players.first->makeAMove();
		players.second->makeAMove();
	//}
}

bool ChessEngine::isGameFinished()
{
	return false;
}
