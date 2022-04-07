#include <iostream>
#include <fstream>
#include "../library/output.h"

int main(){
	Output output;
	output.getData();
  output.toFile();
	output.cetak();
	return 0;
}