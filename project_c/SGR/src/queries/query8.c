#include "../../include/structs.h"
#include "../../include/hash.h"
#include "../../include/load.h"
#include "../../include/SGR.h"
#include "../../include/getset.h"
#include <ctype.h>

TABLE top_businesses_with_category(SGR d, int top, char* category){
	TABLE t = emptyTable();
	city_arr* c = per_cat(d, category);
	top_arr* tr = c->top;
	for(int i=0;tr!=NULL && i<top;i++,tr=tr->next)
		insert_table(tr->b_city,t);
	return t;
}
