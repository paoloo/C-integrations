#include "lua.h"
#include "lauxlib.h"

int zoeira(int a)
{
    double z;
    lua_State *L = lua_open();
    luaL_openlibs(L);
    luaL_loadfile(L, "zoeira.lua");	/* arquivo lua */
    lua_pcall(L, 0, 0, 0);		/* limpa a pilha */
    lua_getglobal(L, "modelamotor");	/* nome da função do lua */
    lua_pushnumber(L, 3);		/* envia primeiro argumento */
    lua_pushnumber(L, 4);		/* envia segundo argumento */
    lua_pcall(L, 2, 1, 0);
    z = lua_tonumber(L, -1);		/* pega resultados */
    printf("Resultado: %f\n",z);
    lua_pop(L, 1);
    lua_close(L);
    return (a+1);
}