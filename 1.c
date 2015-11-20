#include "lua.h"
#include "lauxlib.h"
int main(int argc, char **argv)
{
    lua_State *L = luaL_newstate();
    luaL_openlibs(L);
    luaL_dostring(L, "print('Hey hey hey, '.._VERSION)");
    return 0;
}
