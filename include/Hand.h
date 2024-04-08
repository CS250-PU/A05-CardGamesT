#pragma once

#include "Card.h"
#include <iostream>
#include <vector>

class Hand {
  public:
    Hand ();
    Hand (const Hand &rcHand);
    virtual ~Hand ();
    void addCard (const Card &rcCard);
    void addCards (const std::vector<Card> &rcCards);
    Card removeCard (int index);
    int size () const;
    Card getCard (int index) const;
    void clear ();
    std::ostream & writeOrdered (std::ostream &rcOut) const;
    friend std::ostream& operator<< (std::ostream& rcOut, const Hand &rcHand);

  private:
    std::vector<Card> mcCards;
};