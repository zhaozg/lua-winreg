#ifndef _LZUTILS_H_
#define _LZUTILS_H_

#include "lua.h"
#include "lauxlib.h"

#ifdef LUA_COMPAT53
#include LUA_COMPAT53
#endif

int   lutil_newmetatablep (lua_State *L, const void *p);
void  lutil_getmetatablep (lua_State *L, const void *p);
void  lutil_setmetatablep (lua_State *L, const void *p);

#define lutil_newudatap(L, TTYPE, TNAME) (TTYPE *)lutil_newudatap_impl(L, sizeof(TTYPE), TNAME)
int   lutil_isudatap      (lua_State *L, int ud, const void *p);
void *lutil_checkudatap   (lua_State *L, int ud, const void *p);
int   lutil_createmetap   (lua_State *L, const void *p, const luaL_Reg *methods);

void *lutil_newudatap_impl     (lua_State *L, size_t size, const void *p);

#endif

