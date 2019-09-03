#pragma once
#include "Player.h"
#include <memory>

class ChessEngine
{
public:
	ChessEngine();
	virtual ~ChessEngine();
	void addPlayers(std::shared_ptr<Player> p_firstPlayer, std::shared_ptr<Player> p_secondPlayer);

private:

	std::pair<std::shared_ptr<Player>, std::shared_ptr<Player>> players;

};

