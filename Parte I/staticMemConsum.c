
int method_with_static_variables (int x, int y, int z) {
	static int counter;
	counter++;
	return (x+y+z+counter);
}
	

int main() {
	int t = 1<<30; //Cantidad de veces que se ejecuta la funcion

	for (int i =0 ;i < t;i++){//ciclo de ejecución de la funcion
		method_with_static_variables(1,2,3);
	}
}


//gcc  staticMemConsum.c -o staticMemConsum