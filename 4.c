#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
int main()
{
    double z;
    lua_State *L = lua_open();
    luaL_openlibs(L);
    luaL_loadfile(L, "quatro.lua");/* arquivo lua */
    lua_pcall(L, 0, 0, 0);tinha");/* nome da função do lua */
    lua_pushnumber(L, 3);via primeiro argumento */
    lua_pushnumber(L, 4);via segundo argumento */
    lua_pcall(L, 2, 1, 0);
    z = lua_tonumber(L, -1);tf("Resultado: %f\n",z);
    lua_pop(L, 1);
    lua_close(L);
    return 0;
}
