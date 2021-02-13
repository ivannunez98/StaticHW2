#include <iostream>
#include "matrix_static.h"

int main (){

  int r, c, i, j;
  double val;
  matrix test;


 std::cout<<std::endl<<"How many rows? ";
 std::cin>>r;
 std::cout<<"How many columns? ";
 std::cin>>c;


test = create_initval(r, c, 0);

 std::cout<<std::endl<<"Enter elements: "<<std::endl;
 for(i=0; i < r; ++i){
	for(j=0; j < c; ++j){
		std::cout<<"Enter element for"<<" row ["<<i+1<<']'<<"col ["<<j+1<<']'<<":";
		std::cin>>val;
		assign(i,j, &test, val); }
	}

std::cout << std::endl << "Your Matrix: ";
matrix_print(test);
std::cout << std::endl << "Your Matrix Transposed: ";
matrix_print(transpose(test));
std::cout << std::endl;


return 0;
}
