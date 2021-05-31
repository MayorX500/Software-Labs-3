#include "../../include/structs.h"
#include "../../include/hash.h"
#include "../../include/load.h"
#include "../../include/SGR.h"

SGR load_sgr(char* use_f, char* bus_f, char* rev_f){
	SGR d = init_sgr();
	FILE *fp_u = fopen (use_f, "r"), *fp_b = fopen (bus_f, "r"), *fp_r = fopen (rev_f, "r");

    	if (!(fp_u && fp_b && fp_r)) {  
        	return NULL;
	}
    	load_users_from_csv(d,fp_u);
    	load_business_from_csv(d,fp_b);
    	load_reviews_from_csv(d,fp_r);
	return d;
}

