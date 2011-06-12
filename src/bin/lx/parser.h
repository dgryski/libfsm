/*
 * Automatically generated from the files:
 *	parser.sid
 * and
 *	parser.act
 * by:
 *	sid
 */

/* BEGINNING OF HEADER */

#line 67 "parser.act"


	#include <stdio.h>

	#include "ast.h"

	typedef struct lex_state * lex_state;
	typedef struct act_state * act_state;
	typedef struct ast *       ast;

	struct ast *lx_parse(FILE *f);

#line 26 "parser.h"

/* BEGINNING OF FUNCTION DECLARATIONS */

extern void p_lx(lex_state, act_state, ast *);

/* BEGINNING OF TERMINAL DEFINITIONS */

#define lex_pattern__regex (0)
#define lex_unknown (9)
#define lex_close (8)
#define lex_token__name (6)
#define lex_semi (4)
#define lex_open (7)
#define lex_eof (10)
#define lex_map (2)
#define lex_alt (5)
#define lex_pattern__literal (1)
#define lex_to (3)

/* BEGINNING OF TRAILER */

#line 262 "parser.act"


#line 51 "parser.h"

/* END OF FILE */