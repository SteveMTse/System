#include "Standard.hpp"
#include "Users.hpp"
// using namespace std;

int main(int argc, char* argv[]) {
	string buffer = "";
	if(argc > 1) {
		if(string(argv[1]) == "--create-user") {
			user_command();
		}
		if(string(argv[1]) == "-username" && string(argv[3]) == "-password") {
			login(string(argv[2]), string(argv[4]));
		}
	}
	string username;
	ifstream user("Users/.logedin/current.user", ios::in);
	getline(user, username);
	user.close();
	while(true) {
		cout<<username<<"> ";
		cin >> buffer;
		if(buffer == "exit") {
			break;
		}
	}
	
}
