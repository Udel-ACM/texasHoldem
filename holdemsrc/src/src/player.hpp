#include <stdio>
#include <stdlib>
#include <map>
#include <list>
#include "connection.hpp"
#include "extras.hpp"

class Player {
    private:
	int wallet;
	//potentially unnecessary if Dealer handles returning money on unexpected disconnect
	int currentlyWaged;
	list<card> cards;
	int skill;
	int rawScore;

	//may change to map<hostInfo, list<int>> if skill determines how many plays remembered per host.
	std::map<hostInfo,int> history;
	//boolean if this Player should generate user output
	int display;

/*/////////////////////////

	Game Functions

*//////////////////////////

	//determines raw score with respect to hand and community cards
	//this should probably be called once each time the cards are updated. 
	void updateRawScore();

	//determines score with social impact
	int calcScore();

	//communication with Dealer
	void makeMove();

	//uses Skill and Score to determine player's expression
	int generateDemeanor();

	//communication with other Player
	int getDemeanor();


/*/////////////////////////

	Engine Functions

*//////////////////////////

	//displays player state to console
	void display();

	//returns hostInfo of potential server or null on fail
	hostInfo findLobby();

	//returns 0 if successful, otherwise < 0
	int sendMessage();

}
