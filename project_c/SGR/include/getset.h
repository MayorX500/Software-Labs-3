/**    
 * @file getset.h    
 * @author Miguel Gomes, Ariana Lousada, Rui Armada.   
 * @date 26 Abril 2021
 * @brief Get & Set methods.  
 */ 
#ifndef __GETSET_H__
#define __GETSET_H__


#include "structs.h"

/**
 * @brief Gets Review ID
 * @param reviews Review Object
*/
char* get_rev_id(reviews* reviews);

/**
 * @brief Gets Review User ID
 * @param reviews Review Object
*/
char* get_rev_usr_id(reviews* reviews);

/**
 * @brief Gets Review Business ID
 * @param reviews Review Object
*/
char* get_rev_bus_id(reviews* reviews);

/**
 * @brief Gets Review Stars
 * @param reviews Review Object
*/
double get_stars(reviews* reviews);

/**
 * @brief Gets Review Text
 * @param reviews Review Object
*/
char* get_rev_text(reviews* reviews);

/**
 * @brief Gets Review Next
 * @param reviews Review Object
*/
reviews* get_rev_next(reviews* reviews);

/**
 * @brief Gets Business ID
 * @param business Business Object
*/
char* get_bus_id(business* business);

/**
 * @brief Gets Business Name
 * @param business Business Object
*/
char* get_bus_name(business* business);

/**
 * @brief Gets Business City
 * @param business Business Object
*/
char* get_bus_city(business* business);

/**
 * @brief Gets Business Category
 * @param business Business Object
*/
char* get_bus_cat(business* business);

/**
 * @brief Gets Business Num_Rev
 * @param business Business Object
*/
size_t get_bus_num_rev(business* business);

/**
 * @brief Gets Business Stars
 * @param business Business Object
*/
double get_bus_stars(business* business);

/**
 * @brief Gets Business Next
 * @param business Business Object
*/
business* get_bus_next(business* business);

/**
 * @brief Gets User ID
 * @param user User Object
*/
char* get_usr_id(user* user);

/**
 * @brief Gets User Name
 * @param user User Object
*/
char* get_usr_name(user* user);

/**
 * @brief Gets User Num_Rev
 * @param user User Object
*/
size_t  get_usr_num_rev(user* user);

/**
 * @brief Gets User Next
 * @param user User Object
*/
user* get_usr_next(user* user);

/**
 * @brief Sets User Name
 * @param user User Object
 * @param name new Name
*/
void set_usr_name(user* user , char* name);

/**
 * @brief Sets User ID
 * @param user User Object
 * @param id new ID
*/
void set_usr_id(user* user , char* id);

/**
 * @brief Sets User Next to NULL
 * @param user User Object
*/
void set_usr_next(user* user);

/**
 * @brief Sets User Num_Rev
 * @param user User Object
 * @param rev new Num_Rev
*/
void set_usr_num_rev(user* user , double rev);

/**
 * @brief Sets Business Name
 * @param business Business Object
 * @param name new Name
*/
void set_bus_name(business* business , char* name);

/**
 * @brief Sets Business ID
 * @param business Business Object
 * @param id new ID
*/
void set_bus_id(business* business , char* id);

/**
 * @brief Sets Business City
 * @param business Business Object
 * @param city new City
*/
void set_bus_city(business* business , char* city);

/**
 * @brief Sets Business State
 * @param business Business Object
 * @param state new State
*/
void set_bus_state(business* business , char* state);

/**
 * @brief Sets Business Category
 * @param business Business Object
 * @param cat new Category
*/
void set_bus_cat(business* business , char* cat);

/**
 * @brief Sets Business Next to NULL
 * @param business Business Object
*/
void set_bus_next(business* business);

/**
 * @brief Sets Business Stars
 * @param business Business Object
 * @param stars new number of Stars
*/
void set_bus_stars(business* business , float stars);

/**
 * @brief Sets Business Num_Rev
 * @param business Business Object
 * @param rev new Num_Rev
*/
void set_bus_num_rev(business* business , double rev);

/**
 * @brief Sets Review ID
 * @param reviews Review Object
 * @param id new ID
*/
void set_rev_id(reviews* reviews , char* id);

/**
 * @brief Sets Review User ID
 * @param reviews Review Object
 * @param u_id new User ID
*/
void set_rev_usr_id(reviews* reviews , char* u_id);

/**
 * @brief Sets Review Business ID
 * @param reviews Review Object
 * @param b_id new Business ID
*/
void set_rev_bus_id(reviews* reviews , char* b_id);

/**
 * @brief Sets Review Text
 * @param reviews Review Object
 * @param text new Text
*/
void set_rev_text(reviews* reviews , char* text);

/**
 * @brief Sets Review Next to NULL
 * @param reviews Review Object
*/
void set_rev_next(reviews* reviews);

/**
 * @brief Sets Review Stars
 * @param reviews Review Object
 * @param stars new number of Stars
*/
void set_rev_stars(reviews* reviews , float stars);

#endif
