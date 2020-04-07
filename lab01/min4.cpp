//logic: create function "smallest_of_four" by using the function "smallest_of_two" to compare "num1" and the result of the function "smallest_of_three(int num1, int num2, int num3)"
#include <iostream>
#include <cstdlib>
using namespace std;


int smallest_of_four(int num1, int num2, int num3, int num4); // returns smallest number 

int main(int argc, char *argv[])  {
  if (argc != 5) {
    cerr << "Usage: " << argv[0] << " num1 num2 num3 num4" << endl;
    cerr << " Prints smallest of the four numbers" << endl;
    exit(1);
  }

  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  int d = atoi(argv[4]);

  cout << smallest_of_four(a,b,c,d) << endl;
  
  return 0;
}

//create the function to find the smallest of thress
int smallest_of_three(int num1, int num2, int num3) {
  if (num1<=num2)  {
   
    if (num3 <= num1) {
      return num3;
    } else {
      return num1;
    }
  } else {
    
    if (num3 <= num2) {
      return num3;
    } else {
      return num2;
    }
  }
}

//create the function to find the smallest of two
int smallest_of_two(int num1, int num2) {
  if (num1<num2) {
    return num1;
  } else {
    return num2;
  }
}

//create the function to find the smallest of 2 by comparing num1 to the num that is the smallest among num2 num3 num4.
int smallest_of_four(int num1, int num2, int num3, int num4) {
  return smallest_of_two(num1,smallest_of_three(num2, num3, num4));
}

