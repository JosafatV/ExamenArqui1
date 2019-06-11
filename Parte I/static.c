int method_with_static_variables (int x, int y, int z) {
	static int counter;
	counter++;
	return (x+y+z+counter);
}
	
//readelf -a static.o

