#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

int main() 
{
	vector<double> myVector;
	int i = 1<<20;
    srand (time(NULL)); //randomize seed
    
	while (i>0) {
		int randNum = (rand()%3);
		randNum -= 1;
		//cout << randNum << "\n";
		myVector.push_back(randNum);
		i--;
	}
	
	cout << myVector.size();
	
	
    return 0;
}
