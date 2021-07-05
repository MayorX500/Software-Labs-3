#include <stdlib.h>
#include <stdio.h>
#include "../../include/structs.h"
#include "../../include/SGR.h"
#include "../../include/hash.h"

//TABLE business_info(SGR sgr, char*business_id);
/*
----Query 3----
Dado um id de negocio,determinar a sua informacao : nome,cidade,estado,stars,e número total reviews.
*/
//FREE NEDEED

TABLE business_info(SGR srg, char *id) {
    size_t slot = hash(id);

    business * bus = srg->business->hash_table_business[slot]->business;

    TABLE t = emptyTable();
    if (bus == NULL) {
        return NULL; 
    }

    while (bus != NULL){
        if(!strcmp(bus->business_id, id)){
            insert_table(bus,t);
	    break;
        }
        bus = bus->next;
    }
    return t;
}
