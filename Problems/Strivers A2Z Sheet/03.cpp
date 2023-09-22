#include<iostream>
using namespace std;
//MY SOLN

// string compareIfElse(int a, int b) {
// 	// Write your code here
// 	if (a == b){                          here a = b doesnt work because = is an assignment operator and == is a comparison operator
// 		return "equal";
// 	}
// 	else if (a > b){
// 		return "greater";
// 	}
// 	else if (a < b){
// 		return "smaller";
// 	}
// }

// OPTIMAL SOLN 

/*
    Time complexity: O(1)
    Space complexity: O(1)
*/

string compareIfElse(int a, int b) {

    if (a > b)
        return "greater";
    else if (a < b)
        return "smaller";
    else
        return "equal";

}


int main() {
    
    return 0;
}