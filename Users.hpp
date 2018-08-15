#ifndef _USERS_HPP
#define _USERS_HPP

#include "Standard.hpp"

void login(const string& username, const string& password) {
    ifstream user;
    user.open("Users/" + username, ios::in);
    try {
        if(user.is_open()) {
            string buff;
            getline(user, buff);
            if(password == buff) {
                ofstream status;
                status.open("Users/.logedin/current.user", ios::trunc);
                status<<username;
                status.close();
            }
            else {
                throw 2;
            }
            user.close();
        }
        else {
            throw 1;
        }
    } catch (int& errer) {
        switch(errer) {
            case 1:
                cout<<"User Doesn't Exists"<<endl;
                exit(1);
                break;
            case 2:
                cout<<"Password is incorrect"<<endl;
                exit(1);
                break;
        }
    }
}

void status(string& username) {
    // ifstream user;
    // user.open("/Users/.logedin/current.user", ios::in);
    // if(user.is_open()) {
    //     getline(user, username);
    //     if(username == "-") {
    //         login();
    //     }
    // }
}

void create_user(string username, string password) {
    try {
        if(username.empty() || password.empty()) {
            throw 1;
        }
        else {
            if(isFileExists(username)) {
                throw 2;
            }
            ofstream user;
            user.open("Users/" + username, ios::out);
            if(user.is_open()) {
                user<<password;
                user.close();
            }
            else {
                throw 3;
            }
        }
    }
    catch(int& err_code) {
        switch(err_code) {
            case 1:
                cout<<"Username or Password is invaild"<<endl;
                exit(1);
                break;
            case 2:
                cout<<"Username exists"<<endl;
                exit(1);
                break;
            case 3:
                cout<<"Cannot Create User"<<endl;
                exit(1);
                break;
        }
    }
}

void user_command() {
    string username = "", password = "";
    string reenter = "";
    cout<<"Username: ";
    cin >> username;
    cout<<"Password: ";
    cin>>password;
    cout<<"Re-enter Password: ";
    cin>>reenter;
    if(password == reenter) {
        create_user(username, password);
    }
    else {
        cout<<"cannot create user\n";
        exit(1);
    }
}

#endif
