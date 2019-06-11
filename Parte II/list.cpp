#include <iostream>
#include <stdlib.h>
#include <list>
using namespace std;

int main() 
{
	list<double> myList;
	list<double>::iterator i;
	int j = 20; //= 1<<20;
	
    /* Llenar el contenedor de valores */ 
    srand (time(NULL)); //randomize seed
	while (j>0) {
		double randNum = (rand()%3);
		randNum -= 1;
		//cout << randNum << "\n";
		myList.push_back(randNum);
		j--;
	}
	
	i = myList.begin()++;
	
	/* Accesar el contenedor */ 
	for (;i != --myList.end();) {
		double current = *i--;
		double previous= *i++;
		double next = *++i;
		//cout << previous << " " << current << " " << next << endl;
		double y = (current + previous + next)/3;
		//cout << y << endl;
	}
	
    return 0;
}
