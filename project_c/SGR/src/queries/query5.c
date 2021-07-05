#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "../../include/structs.h"
#include "../../include/SGR.h"

//TABLE businesses_with_stars_and_city(SGR sgr,float stars, char * city);
/*

----Query 5----
Dado um numero n de stars e uma cidade, determinar a lista de negocios com n ou mais stars na dada cidade.
A informacao associada a cada negocio deve ser o seu id e nome.

*/

TABLE businesses_with_stars_and_city(SGR sgr,float stars, char * city){
    TABLE res = emptyTable();
    char name[MAX_NAME+1];
    char name2[MAX_NAME+1];
    strcpy(name2,city);
    business * bus;

    for(size_t slot=0; slot<MAX_TABLE; slot++){
        
        bus = sgr->business->hash_table_business[slot]->business;

        if(bus != NULL){
            for(int i = 0;i<MAX_NAME;i++){
                name[i] = tolower(bus->business_city[i]);
                name2[i] = tolower(name2[i]);
            }
            float st = bus->m_stars;
            if(st>=stars && !strcmp(name,name2)){
            	insert_table(bus,res);
                }
            bus = bus->next;
            
		}
    }
    return res;
}
/*

void printTable(TABLE * t){
    if (t->info == NULL) printf("Null\n");
    else{
    while(t->info->next != NULL){
        printf("%s : %s", t->info->b->business_id, t->info->b->business_name);
        t->info = t->info->next;
        }
    }    
    printf("cenas\n");    
}

void insertBinTABLE(business* b, TABLE* t)
	{                                                                                                                                                      
    listB * new;
         
    new = (struct listB *)malloc(sizeof(struct listB));
                                                                                                                                                              
    if (new == NULL)
    {
        printf("Failed to insert element. Out of memory");
        return;
    }
                                                                                                                                                              
    new->b = b;
    new->next = NULL;
                                                                                                                                                              
   
    if( t->info == NULL)
    {
        t->info = new;
        return;
    }
                                                                                                                                                              
 
    listB* last = t->info;
    while(last->next) last = last->next;
                                                                                                                                                              

    last->next = new;
}


TABLE * emptyTable(){
    TABLE* t = malloc(sizeof(TABLE));
	t->info=malloc(sizeof(listB));
    t->info->b = NULL;
	t->info->next = NULL;
	return t;
}


TABLE * businesses_with_stars_and_city(SGR sgr,float stars, char * city){
    TABLE * res = emptyTable();
    char name[MAX_NAME+1];
    char name2[MAX_NAME+1];
    strcpy(name2,city);
    business * bus;

    for(size_t slot=0; slot<MAX_TABLE; slot++){
        
        bus = sgr->business->hash_table_business[slot]->business;

        if(bus != NULL){
            for(int i = 0;i<MAX_NAME;i++){
                name[i] = tolower(bus->business_city[i]);
                name2[i] = tolower(name2[i]);
            }
            float st = bus->m_stars/bus->n_reviews;
            if(st>=stars && strcmp(name,name2)){
                //printf("%s\n",bus->business_name);
            	insertBinTABLE(bus,res);
            }
            bus = bus->next;
		}
    }
    return res;
}

*/
