#include "User.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;
/*vector <string> User::loadvectn(vector<string>& na){
    vector<string> n;
    for(unsigned i= 0; i< na.size(); i++){
        n.push_back(na.at(i));
    }
    return n;
}
vector <string> User::loadvectp(vector<string>& pa){
    vector<string> p;
    for(unsigned i= 0; i< pa.size(); i++){
        p.push_back(pa.at(i));
    }
    return p;
}
*/
User::User(){
    username = "";
    password = "";
}
User::User(const string& uname, const string& pass){
    username = uname;
    password = pass;
}
string User::getUsername() const{
    return username;
}
bool User::check(const string &uname, const string &pass) const{
    if(username == ""){
        return false;
    }
    if (username == uname && password == pass){
        return true;
    }
    else {
        return false;
    }
}
bool User::setPassword(const string &oldpass, const string &newpass){
    if(username == ""){
        return false;
    }
    if(password == oldpass){
        password = newpass;
        return true;
    }
    else{
        return false;
    }
}