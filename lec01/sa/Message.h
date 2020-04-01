//Message.h

// Don't forget inclusion guard!!

#include <string>

using namespace std;

class Message {
 private:
	string author;
	string subject;
	string body;

 public:

	// default constructor
	Message();
	
	// Parameterized constructor; 
	Message(const string &athr, 
	     const string &sbjct, 
	     const string &body);
	
	/* Displays the Message using the following format:
	 *
	 * subject
	 * from author: body
	 */
	void display() const;	
};
