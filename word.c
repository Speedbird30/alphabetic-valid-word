/*
Name: Sumit Subhash Jadhav
U89612131.
This program validates the input from the user if it is all alphabets and if all all the alphabets are of same case.
*/
#include<stdio.h>
#include<stdbool.h>   //Including lib to perform boolean operations
int main()
{
    char ch;
    int len = -1;          //since while takes a space for \n, it has to be compensated by initializing len with -1
    int lowerchar = 0;
    int upperchar = 0;    //Initializing variables
    printf("Input: ");
    while(ch!='\n')       //initializing a loop
    {
        ch=getchar();
        len ++;
        if(ch>='a' && ch<='z')   //Checking if the input lies in these parameters
        {
            lowerchar ++;        //if so, incrementation will take place here for lower case characters
        }
        else if(ch>='A' && ch<='Z')
        {
            upperchar ++;      //if condition is met, incrementation will take place here for upper case characters
        }
    }
    if((lowerchar == len) || (upperchar == len))   //if and only if the set parameters are met input will be validated to be true or else invalid.
    {
        printf("Output: Valid");
    }
    else
    {
        printf("Output: Invalid");
    }
    return 0;
}

