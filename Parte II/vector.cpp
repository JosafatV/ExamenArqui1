#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

int main() 
{
	vector<double> myVector;
	vector<double>::iterator i;
	int j = 20; //= 1<<20;
	
    /* Llenar el contenedor de valores */ 
    srand (time(NULL)); //randomize seed
	while (j>0) {
		double randNum = (rand()%3);
		randNum -= 1;
		//cout << randNum << "\n";
		myVector.push_back(randNum);
		j--;
	}
	
	
	/* Accesar el contenedor */ 
	for (i = myVector.begin()+1; i != myVector.end(); ++i) {
		//cout << *(i-1) << ", " << *i << ", " << *(i+1) << endl;
		double y = ( *(i-1)+*i+*(i+1) ) / 3; 
		//cout << y << endl;
	}
	
    return 0;
}
