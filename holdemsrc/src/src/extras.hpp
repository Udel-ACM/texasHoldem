#include <string>

enum SUIT { CLUBS, SPADES, HEARTS, DIAMONDS };
enum RANK { ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};

//decided to use a structs here since classes are probably overkill

typedef struct card {
	SUIT suit;
	RANK rank;
} card;

