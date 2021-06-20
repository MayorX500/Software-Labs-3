#include "../include/structs.h"



char* get_rev_id(reviews* reviews) {
    return reviews->review_id;
}

char* get_rev_usr_id(reviews* reviews) {
    return reviews->user_id;
}

char* get_rev_bus_id(reviews* reviews) {
    return reviews->business_id;
}

double get_stars(reviews* reviews) {
    return reviews->stars;
}

char* get_rev_text(reviews* reviews) {
    return reviews->text;
}

reviews* get_rev_next(reviews* reviews) {
    return reviews->next;
}

char* get_bus_id(business* business) {
    return business->business_id;
}

char* get_bus_name(business* business) {
    return business->business_name;
}

char* get_bus_city(business* business) {
    return business->business_city;
}

char* get_bus_state(business* business) {
    return business->business_state;
}

char* get_bus_cat(business* business) {
    return business->business_cat;
}

size_t get_bus_num_rev(business* business) {
    return business->n_reviews;
}

double get_bus_stars(business* business) {
    return business->m_stars;
}

business* get_bus_next(business* business) {
    return business->next;
}

char* get_usr_id(user* user) {
    return user->user_id;
}

char* get_usr_name(user* user) {
    return user->user_name;
}

size_t get_usr_num_rev(user* user) {
    return user->n_reviews;
}

user* get_usr_next(user* user) {
    return user->next;
}

/* ----------------- SETS ----------------- */

void set_usr_name(user* user , char* name) {
    strcpy(user->user_name , name);
}

void set_usr_id(user* user , char* id) {
    strcpy(user->user_name , id);
}

void set_usr_next(user* user) {
    user->next = NULL;
}

void set_usr_num_rev(user* user , double rev) {
    user->n_reviews = rev;
}

void set_bus_name(business* business , char* name) {
    strcpy(business->business_name , name);
}

void set_bus_id(business* business , char* id) {
    strcpy(business->business_id , id);
}

void set_bus_city(business* business , char* city) {
    strcpy(business->business_city , city);
}

void set_bus_state(business* business , char* state) {
    strcpy(business->business_state , state);
}

void set_bus_cat(business* business , char* cat) {
    strcpy(business->business_cat , cat);
}

void set_bus_next(business* business) {
    business->next = NULL;
}

void set_bus_stars(business* business , double stars) {
    business->m_stars = stars;
}

void set_bus_num_rev(business* business , double rev) {
    business->n_reviews = rev;
}

void set_rev_id(reviews* reviews , char* id) {
    strcpy(reviews->review_id , id);
}

void set_rev_usr_id(reviews* reviews , char* u_id) {
    strcpy(reviews->user_id , u_id);
}

void set_rev_bus_id(reviews* reviews , char* b_id) {
    strcpy(reviews->business_id , b_id);
}

void set_rev_text(reviews* reviews , char* text) {
    strcpy(reviews->text , text);
}

void set_rev_next(reviews* reviews) {
    reviews->next = NULL;
}

void set_rev_stars(reviews* reviews , double stars) {
    reviews->stars = stars;
}