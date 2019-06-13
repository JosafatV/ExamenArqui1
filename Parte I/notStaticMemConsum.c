
int method_without_static_variables (int x, int y, int z) {
	int counter;
	counter++;
	return (x+y+z+counter);
}


int main() {
	int t = 1<<30; //Cantidad de veces que se ejecuta la funcion
	
	for (int i =0 ;i < t;i++){//ciclo de ejecución de la funcion
		method_without_static_variables(1,2,3);
	}

}

//gcc  notStaticMemConsum.c -o notStaticMemConsum