#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "../../include/structs.h"
#include "../../include/SGR.h"
#include "../../include/hash.h"

//TABLE reviews_with_word(SGR sgr,int top,char * word);
/*
----Query 9----
Dada uma palavra, determinar a lista de ids de reviews quea referem no campo text.Note que devera ter em conta os 
varios possiveis simbolos de pontuacao para delimitar cada palavra que aparece no texto.
*/

TABLE reviews_with_word(SGR sgr, char * word){
    TABLE table = emptyTable();
    reviews *rev;
    for(int i = 0; i<MAX_TABLE; i++){
	    rev = sgr->reviews->hash_table_review[i]->reviews;
	    while(rev){
		    char * r_id = findR(rev,word);
		    if(r_id != NULL){
			    insert_id_table(r_id,table);
		    }
	    rev = rev->next;
	    }
    }
    return table;
}
