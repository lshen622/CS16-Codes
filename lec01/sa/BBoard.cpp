#include "BBoard.h"
#include <string>
#include <string.h>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <cctype>
using namespace std;
void BBoard::display() const{
    if (messageList.size()== 0){
        cout << "Nothing to Display." << endl; 
    }
    else{
        cout << "---------------------------------------------------------"<<endl;
        for (unsigned num=0; num < messageList.size(); num ++){
            cout << "Message #" << num+1 <<": ";
            messageList.at(num).display();
            cout << "---------------------------------------------------------"<<endl;
        }
        
    }
}
void BBoard::addMessage(){
    string athr;
    string sbjct;
    string body;
    cout << "Enter Subject: " << endl;
    getline(cin, sbjct);
    cout << "Enter Body: " << endl;
    getline(cin, body);
    athr = currentUser.getUsername();
    messageList.push_back(Message(athr, sbjct, body));
    cout << "Message Recorded!" << endl;
}
BBoard::BBoard(){
    title = "";
    currentUser = User();
}
BBoard::BBoard(const string & a){
    title = a;
    currentUser = User();
}
bool BBoard::loadUsers(const string & a){
    ifstream b;
    b.open(a);
    if(!b.is_open()){
        //cout << "fail to open " << a << endl;
        return false;
    }
    string ipn;
    string ipp;
    //getline(b,ipn,' ');
    b >> ipn;
    while (ipn!="end" && !b.fail()){
        b >> ipp;
        //getline(b,ipp);
        //ipp.erase(remove(ipp.begin(), ipp.end(), ' '), ipp.end());
        //ipp.erase(remove_if(ipp.begin(), ipp.end(), isspace),ipp.end());
        
     /*   
        
        
        unsigned j = 0 ;
        unsigned counting=0;
    for(unsigned ct = 0; ct < ipp.size(); ct++) {
        if (ipp[ct] == ' ') {
            counting +=1;
            for (j = ct; j < ipp.size(); j++){
            ipp[j] = ipp[j+1];
            }
        }
    }
    for (unsigned k= counting; k >=0; k --){
        ipp.pop_back();
    }
    
    */
    
    
        userList.push_back(User(ipn,ipp));
        b >> ipn;
        //getline(b,ipn, ' ');
    }
    //
    return true;
}
bool BBoard::login(){
    cout << "Welcome to " << title << endl;
    string un;
    string up;
    //int ct =1;
    while(1){
            cout << "Enter your username ('Q' or 'q' to quit): " <<endl ;
            getline (cin, un);
            if(un == "q" || un == "Q"){
                cout << "Bye!" << endl;
                return false;
            }
            cout << "Enter your password: " << endl;
            getline(cin, up);
            for (unsigned k=0; k<userList.size(); k++){
                //cout << userList[k].getUsername()<<endl<< userList[k].getpw() << endl;
                if (userList.at(k).check(un,up)){
                    currentUser = User(un, up);
                    cout <<"Welcome back " << currentUser.getUsername() << "!" <<endl;
                    return true;
                }
            }
            cout << "Invalid Username or Password!" << endl <<endl;
            //return login();
    }
}

void BBoard::run(){
    
    //string ips;
    string ip;
    if(currentUser.getUsername()== ""){
        //login();
        exit(1);
    }
    //while (1){
        cout << endl<<"Menu" << endl <<"- Display Messages ('D' or 'd')" << endl <<"- Add New Message ('N' or 'n')"<< endl <<"- Quit ('Q' or 'q')" << endl <<"Choose an action: " << endl;
        getline(cin, ip);
        if (ip == "D" || ip == "d"){
            display();
            run();
        }
        else if (ip == "N" || ip == "n"){
            addMessage();
            run();
        }
        else{
            currentUser = User();
            //quit
            cout << "Bye!" <<endl;
            exit(1);
        }
        //ip = ips;
        //ips = "";
    //}
}
