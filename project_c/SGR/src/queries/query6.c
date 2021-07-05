#include "../../include/structs.h"
#include "../../include/auxiliar.h"
#include "../../include/hash.h"
#include "../../include/load.h"
#include "../../include/SGR.h"
#include "../../include/getset.h"
#include <ctype.h>



TABLE top_business_by_city(SGR d, int top){
	TABLE t = emptyTable();
	city_arr* c = per_city(d);
	top_arr* at;
	int i;
	for(;c!=NULL;c=c->next){
		i = 0;
		at = c->top;
		for(;at!=NULL && i < top;i++,at=at->next)
			insert_table(at->b_city,t);
	}
	return t;
}
