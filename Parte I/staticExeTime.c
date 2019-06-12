#include <stdio.h>
#include <time.h>

int method_with_static_variables (int x, int y, int z) {
	static int counter;
	counter++;
	return (x+y+z+counter);
}
	

int main() {
	int t = 1<<30; //Cantidad de veces que se ejecuta la funcion
	//int i = 10;
	printf("times =%d \n",t);
	clock_t begin = clock();
	for (int i =0 ;i < t;i++){
		method_with_static_variables(1,2,3);
	}
	clock_t end = clock();
	double time_spent = ((double)(end - begin) / CLOCKS_PER_SEC) / t;
	printf("endbeg %ld \n",end - begin);

	printf("cps %ld \n",CLOCKS_PER_SEC);
	printf("Time spent is : %.15f seconds \n",time_spent);
}


//gcc  staticExeTime.c -o staticExeTime