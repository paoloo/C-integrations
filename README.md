# C-integrations
**C+Lua+python integration codes from blog post**

1.c, 2.c, 3.c e 4.c
sao compilados com:
```bash
$ gcc -I/usr/include/lua5.1 -o 3 3.c -llua5.1 -lm
```
E sua explicação está em: https://paoloo.wordpress.com/2015/11/19/lua-c-uma-combinacao-perfeita-2/
Já zoalib.c é compilado com:
```bash
gcc -I/usr/include/lua5.1 zoalib.c -llua5.1 -lm -fPIC -shared -Wl,-soname,zoalib -o zoalib.so
```
E sua explicação está em: https://paoloo.wordpress.com/2015/11/19/lua-c-python-mais-que-uma-combinacao-macabra-uma-gambiarra-sinistra/

o/
