#include <iostream>
using namespace std;
int main() {
  int num;
  int rows;
  int cols;
  cout << "Enter number of rows and columns:"<<endl;
  while((cin>>num)&&(num !=0)){
      rows = num;
      cin>>cols;
    for (int i = 0;i<rows;i++){
        for (int i = 0; i<cols; i++){
          cout<< "X.";
        }
    	cout<<endl;
    }
    cout <<"Enter number of rows and columns:"<<endl;
  }
  return 0;
}
