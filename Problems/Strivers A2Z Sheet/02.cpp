#include<iostream>
using namespace std;


/*
    Time complexity: O(1)
    Space complexity: O(1)
*/

int dataTypes(string type) {

    // Checking 'type' with all the data types we know.

    if (type == "Integer")
        return 4;
    else if (type == "Long")
        return 8;
    else if (type == "Float")
        return 4;
    else if (type == "Double")
        return 8;
    else if (type == "Character")
        return 1;
    else // 'type' should have matched with some data type above
        return -1; // Should not be returned
}


int main() {
    //look at the code 
    return 0;
}