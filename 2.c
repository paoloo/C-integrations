#include "lua.h"
#include "lauxlib.h"
int main(int argc, char **argv)
{
    lua_State *L = luaL_newstate();
    luaL_openlibs(L);
    luaL_dofile(L, "dois.lua");
    return 0;
}
