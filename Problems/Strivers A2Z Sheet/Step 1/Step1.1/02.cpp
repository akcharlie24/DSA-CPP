#include<iostream>
using namespace std;


/*
    Time complexity: O(1)
    Space complexity: O(1)
*/

int dataTypes(string type) {
	// Write your code here
	if (type =="Integer"|| type =="integer"){
		return 4;
	}
	else if (type =="Long"|| type == "long"){
		return 8;
	}
	else if (type == "Float"|| type == "float"){
		return 4;
	}
	else if (type == "Double"|| type == "double"){
		return 8;
	}
	else if (type == "Character"|| type == "character"){
		return 1;
	}
}


int main() {
    //look at the code 
    return 0;
}