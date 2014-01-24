#include "player"


//Dealer extends the class Host as it is a type of host 
class Dealer : public Host{
   private:
	//a mapping of hosts to the amount they have currently wagered in this round
	std::map<hostInfo,int> players;
	//for hosts that attempt to join midgame. May be inserted between runs or games
	list<hostInfo> waitQueue;
	int pot;
	list<card> communityCards;

/*

	Game Functions

*/
   
	hostInfo getMove(hostInfo playerHost);
	hostInfo getBlind(hostInfo playerHost, int blind);
	hostInfo giveMoney(hostInfo playerHost, int money);
	void dealCards();
	int checkIn(hostInfo playerHost);

/*

	Engine Functions

*/

	//if a single host is disconnected from the game then we need to hold onto
	//their information for N rounds in the event they attempt to reconnect.
	//There definitely has to be a timeout on this or we will be willingly
	//hemoraging memory for someone who might not care.
	int handleDisconnect(hostInfo lostHost){};
}
