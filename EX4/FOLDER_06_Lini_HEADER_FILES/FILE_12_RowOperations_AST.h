#ifndef __ROW_OPERATIONS_AST_H__
#define __ROW_OPERATIONS_AST_H__

/*************************/
/* GENERAL INCLUDE FILES */
/*************************/
#include <stdio.h>

/*************************/
/* PROJECT INCLUDE FILES */
/*************************/
#include "FILE_02_Fraction.h"

/*********/
/* TYPES */
/*********/
typedef Fraction AST_Number;

/*********/
/* TYPES */
/*********/
typedef struct AST_RowOp_					*AST_RowOp;
typedef struct AST_RowOpList_				*AST_RowOpList;
typedef struct AST_Ri_Swap_Rj_				*AST_Ri_Swap_Rj;
typedef struct AST_Ri_equals_cRi_			*AST_Ri_Equals_cRi;
typedef struct AST_Ri_Equals_Ri_Plus_cRj_	*AST_Ri_Equals_Ri_Plus_cRj;

typedef enum
{
	AST_ROW_OP_TYPE_RI_SWAP_RJ,
	AST_ROW_OP_TYPE_RI_EQUALS_CRI,
	AST_ROW_OP_TYPE_RI_EQUALS_RI_PLUS_CRJ,
}   AST_ROW_OP_TYPE;

/*********/
/* CTORS */
/*********/
AST_RowOp		AST_Alloc_Ri_Swap_Rj(int i,int j);
AST_RowOp		AST_Alloc_Ri_equals_cRi(int i, AST_Number c);
AST_Number		AST_Alloc_Number(int nominator,int denominator);
AST_RowOpList	AST_Alloc_RowOpList(AST_RowOp head,AST_RowOpList tail);
AST_RowOp		AST_Alloc_Ri_Equals_Ri_Plus_cRj(int i, int op, AST_Number c,int j);

#endif
