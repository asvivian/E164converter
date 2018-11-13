\\\\\\
\\\\\\\\\\\\
|||
|||  E. 164 Conversion
|||  Author: Drew Vivian
|||
--------------------------------------------------------------------------------

--  FUNCTIONALITY --

A. GOAL (as requested by Kimberly Cordero of Josh DeShong Real Estate)

    "Write a function that accepts a user input phone number as a string
     and returns a normalized United States phone number in E. 164 format.
     Return null (or an equivalent value) if the user input is invalid."

B. SOLUTION

There are two functions which ultimately accomplish the goal with documentation
given in great detail within the main.cpp file. Here are the function 
descriptions as they appear in the code:

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

--------------------------------------------------------------------------------

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

--------------------------------------------------------------------------------

C. REASONING, ASSUMPTIONS, and SOURCES

I decided to write my solution in C++ as my most comfortable language is C
but C++ (which is very similar) is a lot more common in the industry.

The process of my solution isn't particularly complicated. It, with several
assumptions made, follows the guidelines described in the goal. Here is a 
re-written version of the goal that includes assumptions that I made in writing 
my solution:

  Write a function(s) that accepts a user input phone number as a string in the
  format XXXXXXXXXX (no spaces or dashes) and returns a normalized United States
  phone number in the format +1XXXXXXXXXX (E. 164 format). If the entry was not
  in the requested format, return null (or an equivalent value). Also add
  functionality to the file so that a reviewer may see the solution in action.

My code and documentation may seem over the top for what is, ultimately,
a very simple solution, but I wanted to demonstrate the professional level and
style of my code while also demonstrating my understanding of the solution.

As for sources, there is no source that I could specifically reference for the
coding aspect of this solution, as my knowledge of C++ and programming is a
compilation of all that I was taught in school and/or found on my own time over
the last several years.

I did, however, not originally know that the format of a phone number preceded 
by an international identifier code was referred to as E. 164. The site that
I learned this from is linked below:

https://www.twilio.com/docs/glossary/what-e164

If you have any questions about my code, please feel free to email me at
asvivian@crimson.ua.edu and I will get back to you as soon as possible.