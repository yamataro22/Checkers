#pragma once
#include "Player.h"
#include <memory>
#include <string>

class ChessEngine
{
public:
	ChessEngine();
	virtual ~ChessEngine();
	void addPlayers(std::string, std::string);
	void startGame();
private:

	std::pair<std::shared_ptr<Player>, std::shared_ptr<Player>> players;
	bool isGameFinished();

};

