texasHoldem
===========

Distributed Texas Holdem Simulation because we need to use the Raspberry Pi we just bought

Dan [1/24/14]:
	We currently only have some hpp files that kinda sorta describe what the architecture for this project will/should/may look like. Please admend as necessary!

	The biggest thing is that this is a distributed Texas Holdem simulation that should be played autonomously by some client systems. The dealer is the server and the players are the clients. The dealer's role is pretty obvious and shouldn't do much more than facilitate some minor book keeping and stuff.

	The player, on the other hand, will hopefully be much more complex. Not only should they be responsible for connecting to the dealer server and playing the game, they need to do so with some unique personalities. This is not to say someone needs to develop a full personality for every new player we add, but integral things like bluffing/poker face/tendancy to bet at ridiculous things should be per client and not just for everyone. At this, I propose we look at either a leveling up system with randomly generated default settings, or some character generation system. These can be stored as a CSV or JSON file and loaded/manipulated while they play. The dealer can "ask" if the player is new when they connect initially and, if they are new, the dealer can auto-generate a custom personality for them to build off of.

	Please add questions/comments/critiques about anything. Nothing is set in stone and I'm very open to suggestion.

	Thanks for your help!
