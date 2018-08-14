#include "Standard.hpp"
#include "Users.hpp"
// using namespace std;

int main(int argc, char* argv[]) {
	string buffer = "";
	if(argc > 1) {
		if(string(argv[1]) == "--create-user") {
			user_command();
		}
	}
	while(true) {
		cout<<"> ";
		cin >> buffer;
		if(buffer == "exit") {
			break;
		}
	}
	
}
