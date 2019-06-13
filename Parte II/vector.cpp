#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

int main() 
{
	vector<double> myVector;
	vector<double>::iterator i;
	int j = (1<<25);
	
    /* Llenar el contenedor de valores */ 
    srand (time(NULL)); //randomize seed
	while (j>0) {
		double randNum = (rand()%3);
		randNum -= 1;
		//cout << randNum << "\n";
		myVector.push_back(randNum);
		j--;
	}
	cout << myVector.size() << endl;
	double frontera = 0;
	//int k = 0;
	
	/* Accesar el contenedor */ 
	for (i = myVector.begin(); i != myVector.end(); ++i) {
		
		if (i == myVector.begin()) {
			double y = ( frontera + *i + *(i+1) ) / 3;
			//cout << "1st: " << y << " for it:" << k++ << endl;
		}
		else if (i == myVector.end()-1 ) {
			double y = ( *(i-1)+*i+frontera ) / 3; 
			//cout << "last: " << y << " for it:" << k++ << endl;
		}
		else {
			//cout << *(i-1) << ", " << *i << ", " << *(i+1) << endl;
			double y = ( *(i-1)+*i+*(i+1) ) / 3; 
			//cout << y << " for it:" << k++ << endl;
		}
	}
    return 0;
}
