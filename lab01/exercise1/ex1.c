#include <string.h>
#include <stdio.h>
#include "ex1.h"
#define MAX_SIZE 100
/* Returns the number of times LETTER appears in STR.
There are two different ways to iterate through a string.
1st way hint: strlen() may be useful
2nd way hint: all strings end in a null terminator */
int num_occurrences(char *str, char letter) {
    int i, count = 0; // initialized count to count the number of times letter appears in a string
    for(i=0;i<=strlen(str);i++)  // loop that ietrates till the end of the string
    {
	if(str[i] == letter )	 // checks that when a letter appears it adds 1 in count
	{
		count++;	
	}
    }
    return count;
}

/* Populates DNA_SEQ with the number of times each nucleotide appears.
Each sequence will end with a NULL terminator and will have up to 20 nucleotides.
All letters will be upper case. */
void compute_nucleotide_occurrences(DNA_sequence *dna_seq) {
    dna_seq->A_count=0;
    dna_seq->C_count=0;
    dna_seq->G_count=0;
    dna_seq->T_count=0;
    
    //  loop that ietrates till the end of the string that is initialized in a structure.
    
    for(int i=0;i<strlen(dna_seq->sequence);i++)
    {
    	// checks that how many times the characters " A,C,G,T" appears in a string.
    	if (dna_seq->sequence[i] == 'A')
	    dna_seq->A_count++;        //add 1 to count whenever A appears
	        		
    	else if (dna_seq->sequence[i] == 'C')
    	    dna_seq->C_count++;       //add 1 to count whenever A appears
    	    		
    	else if (dna_seq->sequence[i] == 'G')
    	    dna_seq->G_count++;       //add 1 to count whenever A appears
    	                    
    	else if (dna_seq->sequence[i] == 'T')
    	    dna_seq->T_count++;       //add 1 to count whenever A appears
    }
    
    
    return;
}


