/*
 * Author: Drew Vivian
 * Date: 11/13/2018
 * 
 * This code was written to be submitted in response to a request from
 * Josh DeShong Real Estate as a part of their application process.
*/

#include <cstdlib>
#include <cctype>
#include <iostream>
#include <string>

/*
 * Boolean Function: isValidInput
 * 
 * Description:
 *     Tests the validity of an input against the requirements for a phone
 *     number without an international identifier
 * 
 * Parameters: 
 *     Takes in a C++ String object called "s" which is the input to be tested
 * 
 * Functionality:
 *     1. Check that the input is 10 characters long, the proper length of a
 *        phone number without the international identifier. Otherwise, 
 *        return false.
 *     2. Check that every character in the input is an integer value between
 *        0 and 9. Otherwise, return false.
 *     3. If the function reaches the last line, the input must be valid, so
 *        return true.
 */
bool isValidInput(std::string s){
    
    //Step 1
    if(s.size() != 10)
        return false;
    
    //Step 2
    int i;
    for(i = 0; i < 10; ++i){
        if(!std::isdigit(s[i]))
            return false;
    }
    
    //Step 3
    return true;
}


/*
 * String Object Function: E164getter
 * 
 * Description:
 *     Receives a phone number from the user which, if valid, is converted to
 *     E164 format assuming it to be a US number. Otherwise, NULL is returned.
 * 
 * Parameters: 
 *     N/A
 * 
 * Functionality:
 *     1. Prompt the user for a 10 digit input of only integers then receive
 *        that value through the standard input stream.
 *     2. Test whether or not the input is valid. If it is, return the user's
 *        input in E.164 format (USA number assumed). Otherwise, an empty
 *        string is returned (std::string equivalent of NULL).
 */
std::string E164getter(){
    
    //Step 1
    std::string num;
    std::cout << "Enter a 10 digit phone number with no spaces or dashes: ";
    std::getline(std::cin, num);
    
    //Step 2
    if(isValidInput(num))
        return ("+1" + num);
    else
        return "";
}

/*
 * The main function in this file serves the purpose of testing the functionality
 * of the function that I have been requested to make as a part of my application
 * to Josh DeShong Real Estate.
 */
int main(int argc, char** argv) {
    
    std::cout <<
            "\\\\\\" << std::endl <<
            "\\\\\\\\\\\\" << std::endl <<
            "|||" << std::endl <<
            "|||  E. 164 Conversion" << std::endl <<
            "|||  Author: Drew Vivian" << std::endl <<
            "|||" << std::endl <<
            "--------------------------------------------------------------------------------" << std::endl << std::endl;
    
    //We will run our E164getter function and output the value if it is not NULL
    std::string example = E164getter();
    
    if(example != "")
        std::cout << example;
    else
        std::cout << "NULL (as represented by an empty string) was returned";
    return 0;
}
