#include "lua.h"
#include "lauxlib.h"
static int huehue(lua_State *L){ /* método que será chamado dentro do script */
  int n = lua_gettop(L); /* numero de argumentos */
  double sum = 0;
  int i;
  for (i = 1; i <= n; i++){
    sum += lua_tonumber(L, i);
  }
  lua_pushnumber(L, sum / n); /* envia primeira resposta */
  lua_pushnumber(L, sum);     /* envia segunda resposta */
  lua_pushnumber(L, 666);     /* envia terceira resposta */
  return 3;                   /* quantidade de respostas */
}
int main(int argc, char **argv)
{
    lua_State *L = luaL_newstate();
    luaL_openlibs(L);
    lua_register(L, "huehue", huehue);
    luaL_dofile(L, "tres.lua");
    return 0;
}
