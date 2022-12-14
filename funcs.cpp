#include <iostream>
#include <string>
#include "funcs.h"


std::string printRange(int left, int right){
	std::string range;
	if(left <= right){
		if(left==right){
			return std::to_string(left)+printRange(left+1,right);
		}
		return std::to_string(left)+" "+printRange(left+1,right);
	}
	else{
		return "";
	}
}
