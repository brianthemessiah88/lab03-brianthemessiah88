
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double pi=0.0;
	int n;
	cout<<"Enter the value of the parameter 'n' in the Leibniz formula ";
	cout<<"(or -1 to quit):"<<endl;
	while ((cin >>n)&&(n>=0)){
		n+=1;
		for (int i = 0;i<n;i++){
			pi += ((pow(-1,i))/((2*i)+1));
		} 
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(3);
		if (n == 1){
			cout<<"The approximate value of pi using "<<n<<" term is: "<<pi*4.0<<endl;
		}
		else{
			cout<<"The approximate value of pi using "<<n<<" terms is: "<<pi*4.0<<endl;
		}
		pi = 0.0;
		cout<<"Enter the value of the parameter 'n' in the Leibniz formula ";
                cout<<"(or -1 to quit):"<<endl;
	}


	return 0;
}
