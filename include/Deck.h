#pragma once

#include "Card.h"
#include <iostream>
#include <vector>

class Deck {

public:
	Deck ();
	Deck (const Deck &rcDeck);
	virtual ~Deck ();
	void shuffle ();
	Card dealCard ();
	int cardsLeft () const;
	friend std::ostream& operator<< (std::ostream &rcOut, const Deck &rcDeck);

private:
	static const int MAX_CARDS_IN_DECK = 52;
	std::vector<Card> mcDeckOfCards;
	int mNextCard;
};
