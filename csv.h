/*
 *
 *    CSV Parsing Function Definitions
 *
 */

#ifndef __CSV_H__
#define __CSV_H__

extern void CSVscanInit(const char *s);
extern int CSVscanField(char **b_f, int *b_flen);
extern int CSVfieldLength;  	    	/* Length of CSV field scanned */

#endif
