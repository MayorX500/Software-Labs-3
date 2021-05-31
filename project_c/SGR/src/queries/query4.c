#include <stdlib.h>
#include <stdio.h>
#include "../../include/structs.h"
#include "../../include/SGR.h"
#include "../../include/aux.h"

/*
----Query 4----
Dado um id de utilizador, determinar a lista de negócios aos quais fez review.A informação associada a cada negocio deve ser o id e o nome.
*/

TABLE businesses_reviewed(SGR sgr, char * user_id){
    size_t slot = hash(user_id);
    TABLE result = emptyTable();

    reviews * review = sgr->reviews->hash_table_review[slot]->reviews;

    while(review != NULL) {
        if (!strcmp(review->user_id, user_id)){
             size_t slot2 = hash(review->business_id);
        	 business * b = sgr->business->hash_table_business[slot2]->business;    
             while(b != NULL){
                 if(!strcmp(b->business_id,review->business_id)){
					 insert_table(b, result);
                 }
				 b = b->next;
             }

        }
		review = review->next;
    }
    return result;
	
}
