/*
** Module to control static tables
** TeCGraf - PUC-Rio
** $Id: table.h,v 2.7 1994/11/17 13:58:57 roberto Exp roberto $
*/

#ifndef table_h
#define table_h

#include "tree.h"

extern Symbol *lua_table;
extern char  **lua_constant;

extern char   *lua_file[];
extern int     lua_nfile;


void  lua_initconstant (void);
int   luaI_findsymbolbyname (char *name);
int   luaI_findsymbol      (TreeNode *t);
int   luaI_findconstant    (TreeNode *t);
void  lua_travsymbol      (void (*fn)(Object *));
void  lua_markobject      (Object *o);
void  lua_pack            (void);
char *lua_addfile         (char *fn);
int   lua_delfile 	  (void);
char *lua_filename        (void);

#endif
