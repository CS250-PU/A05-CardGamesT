#pragma once

#include <string>
#include <fstream>
#include <vector>

class Card {
public:
	Card (const std::string &rcDenomination = Card::cDenomination[0],
				const std::string &rcSuit = Card::cSuit[0]);
	Card (const Card &rcCard);
	virtual ~Card ();

	std::string getSuit () const;
	std::string getDenomination () const;
	int getDenominationValue () const;
	Card getCard () const;

	bool operator== (const Card& rcCard) const;
	bool operator< (const Card& rcCard) const;
	bool operator> (const Card& rcCard) const;

	static bool isLegalCard (const std::string &rcDenomination,
													 const std::string &rcSuit);
	
	static const std::vector<std::string> cSuits;
	static const std::vector<std::string> cDenominations;

	friend std::istream& operator>> (std::istream& rcIn, Card& rcCard);
	friend std::ostream& operator<< (std::ostream& rcOut, const Card& rcCard);

private:
	std::string mcSuit;
	std::string mcDenomination;
};