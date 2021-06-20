#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "../../include/structs.h"
#include "../../include/hash.h"
#include "../../include/SGR.h"
#include "../../include/auxiliar.h"
/*
---Query 7---
Determinar a lista de ids de utilizadores e o número total de utilizadores que tenham visitado mais de um estado,
i.e. que tenham feito reviews em negócios de diferentes estados.

TABLE international_users(SGR sgr);

*/

TABLE international_users(SGR sgr){
    user * user;
    reviews* rev;
    business* bus;
    TABLE res = emptyTable();

    for(int i = 0; i<MAX_TABLE; i++){
        user = sgr->user->hash_table_user[i]->user;
	char* u_id = user->user_id;
	while(user != NULL){
		rev = sgr->reviews->hash_table_review[hash(u_id)]->reviews;
		while(rev != NULL){
			if(!(strcmp(u_id, rev->user_id))){
				bus = sgr->business->hash_table_business[hash(rev->business_id)]->business;
				while(bus != NULL){
					char* state1 = bus->business_state;
					if(!(strcmp(rev->business_id,bus->business_id))){

					}
				}
			}
			rev = rev->next;
		}
		user = user->next;
	}
    }
    return res;
}

/* Query 7
 *
 *
 *TABLE international_users(SGR d); 
 *
 */

TABLE international_users_mike(SGR d){
	reviews * rev; TABLE res = emptyTable(); business *bus1, *bus2=NULL; user* usr;
	char uid[MAX_ID+1],bid[MAX_ID+1];
	for(int i = 0;i<MAX_TABLE;i++){
		usr = d->user->hash_table_user[i]->user;
		while(usr!=NULL){
			strcpy(uid,usr->user_id);
			rev = d->reviews->hash_table_review[hash(uid)]->head;
			while(rev!=NULL){
				if(!(strcmp(uid,rev->user_id))){
					strcpy(bid,rev->business_id);
					bus1 = d->business->hash_table_business[hash(bid)]->business;
					while(bus1 !=NULL){
						if(!(strcmp(bid, bus1->business_id))){
							if (bus2 != NULL && strcmp(bus2->business_id,bus1->business_id)){
								if(strcmp(bus2->business_state, bus1->business_state)){
									insert_id_table(usr->user_id, res);
									goto nextu;
								}
							}
							bus2 = bus1;
						}
						bus1 = bus1->next;
					}
				}
				rev=rev->next;
			}
nextu:
			usr = usr->next;
		}
	}
	return res;
}
