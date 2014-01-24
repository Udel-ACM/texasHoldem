#include <string>

/*

	Author's Note:
	This utility/wrapper is heavily based on work from Dr. Stephen Bohacek's CISC450 Networking I course. The classes and functions found within connect.hpp/.cpp are expected to be fairly selfcontained and should be able to be used to establish TCP connections and send packets in other applications.

*/

typedef struct hostInfo {

	char address[16];
	std::string name;

} hostInfo;

/*/////////////////////////////////////////////////////

	Host: Extend this if you want to use this util

*//////////////////////////////////////////////////////

class Host{

	hostInfo self;

	//returns 0 if successful, otherwise < 0
	int establishConnection(hostInfo otherHost);
	//each subclass can implement their own handleDisconnect 
	virtual int handleDisconnect(hostInfo lostHost);

}
