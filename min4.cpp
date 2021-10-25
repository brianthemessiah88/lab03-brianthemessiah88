#include <iostream>
#include <cstdlib>
using namespace std;

int minOfTwo(int num1, int num2); // returns smaller number 
int minOfThree(int num1, int num2, int num3); // returns smaller number
int minOfFour(int num1, int num2, int num3, int num4); //returns smaller number

int main(int argc, char *argv[])  {
  if (argc <5) {
    cerr << "Usage: " << argv[0] << " num1 num2 num3 num4" << endl;
    cerr << " Prints smallest of the four numbers" << endl;
    exit(1);
  }
  int value1 = atoi(argv[1]);
  int value2 = atoi(argv[2]);
  int value3 = atoi(argv[3]);
  int value4 = atoi(argv[4]);
  cout << minOfFour(value1,value2,value3,value4) << endl;
  return 0;
}

int minOfTwo(int num1, int num2) {
  if (num1 < num2)
    return num1;
  return num2;
}

int minOfThree(int num1, int num2, int num3) {
  return minOfTwo(num1,minOfTwo(num2, num3));
}
int minOfFour(int num1, int num2, int num3, int num4){
  return minOfThree(num1,minOfTwo(num2,num3),minOfTwo(num3,num4));
}
