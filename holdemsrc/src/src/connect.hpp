#include <string>

/*

	Author's Note:
	This utility/wrapper is heavily based on work from Dr. Stephen Bohacek's CISC450 Networking I course. The classes and functions found within connect.hpp/.cpp are expected to be fairly selfcontained and should be able to be used to establish TCP connections and send packets in other applications.

*/

typedef struct hostInfo {

	unsigned int ipAddress;
	std::string name;

} hostInfo;

class Connector{


	//returns 0 if successful, otherwise < 0
	int establishConnection(hostInfo dealer);

}
