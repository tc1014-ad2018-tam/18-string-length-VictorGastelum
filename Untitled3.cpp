/*
   This program counts the number of words of any given string
  
   Author: Victor Manuel Gastelum Huitzil
   Date: 18/10/18
   e-mail: A01411985@itesm.mx
 */

#include <stdio.h>

int main() {
    char string[250];
    int k=1;
    int counter=0;

    // I ask for the string
    printf("Give me a string: \n");
    fgets(string, sizeof(string), stdin);

    // Here I store the string and counts the words and if the users input an enter the loop will finish
    while (string[counter] != '\0') {
        counter++;
        if (string[counter] == ' '){
            k++;
        }
    }

    // Here I show the user how many words has the string
    printf("\nThe string has %i words", k);

return 0;
}
