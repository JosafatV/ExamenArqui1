int method_without_static_variables (int x, int y, int z) {
	int counter;
	counter++;
	return (x+y+z+counter);
}
	
//readelf -a notStatic.o
