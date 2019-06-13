#include <iostream>
#include <stdlib.h>
#include <list>
using namespace std;

int main() 
{
	list<double> myList;
	list<double>::iterator i;
	list<double>::iterator t;
	unsigned long int j = 1<<25;
	
    /* Llenar el contenedor de valores */ 
    srand (time(NULL)); //randomize seed
	while (j>0) {
		double randNum = (rand()%3);
		randNum -= 1;
		//cout << randNum << "\n";
		myList.push_back(randNum);
		j--;
	}
	
	i = myList.begin();
	t = --myList.end();  //define last iteration condition
	//int k = 0;
	
	double frontera = 0;
	
	/* Accesar el contenedor */ 
	for (;i != myList.end();) {
		
		if (i == myList.begin()) {
			double current = frontera;
			double previous= *i;
			double next = *++i;
			
			//cout << previous << " " << current << " " << next << endl;
			double y = (current + previous + next)/3;
			//cout << "1st: " << y << " for it:" << k++  << endl;
		}
		else if ( i == t) {
			double current = *i--;
			double previous = *i++;
			double next = frontera;
			++i;			
			//cout << previous << " " << current << " " << next << endl;
			double y = (current + previous + next)/3;
			//cout << "last: " << y<< " for it:" << k++  << endl;
		} else {
			double current = *i--;
			double previous= *i++;
			double next = *++i;
			
			//cout << previous << " " << current << " " << next << endl;
			double y = (current + previous + next)/3;
			//cout << y<< " for it:" << k++  << endl;
		}
	}
	
    return 0;
}
