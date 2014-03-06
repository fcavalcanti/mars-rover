/*
 * comm.h
 *
 * Created: 2/20/2014 10:16:43 AM
 *  Author: Flavia and David
 */ 


#ifndef COMM_H
#define COMM_H

#include <avr/io.h>

/* The following enumerated types are classes of header codes that head
   packets being sent between the the control program and the rover. */

/* The `query` codes are used by the control program to initiate a query
   sequence with the rover. The rover's responses are headed by the same
   code. */

typedef enum {
	query_null = 0,
	query_ping = 1,
	num_query_codes
} query;
#define NUM_QUERY_CODES 2


// Check for some compile-time protocol definition errors:
#if num_query_codes != NUM_QUERY_CODES
#error "Protocol Definition Error: The Number of query codes is not consistent."
#endif


/* Declares an array of functions, each of which will handle a query request. */
extern uint8_t (*query_handlers[NUM_QUERY_CODES])(char *);


bool is_valid_query_code(query type);

#endif /* COMM_H */
