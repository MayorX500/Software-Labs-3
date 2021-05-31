#include "../../include/structs.h"
#include "../../include/SGR.h"
#include "../../include/getset.h"
#include <ctype.h>

TABLE businesses_started_by_letter(SGR d,char letter){    
        letter = tolower(letter);    
        business* temp;    
        TABLE out = emptyTable();    
        for (int i = 0;i<MAX_TABLE;i++){    
                temp = d->business->hash_table_business[i]->head;    
                while(temp != NULL){    
                        char* name = get_bus_name(temp);    
                        if(tolower(name[0]) == letter){    
                                insert_table(temp, out);    
                        }    
                        temp = temp->next;    
                }    
        }    
        return out;    
}
