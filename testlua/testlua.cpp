// testlua.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>  
#include <string.h>  

extern "C"  
{  
#include <lua.h>  
#include <lualib.h>  
#include <lauxlib.h>  
}  

int _tmain(int argc, _TCHAR* argv[])  
{  
	lua_State *L = lua_open();  
	luaL_openlibs(L);  

	const char *buf = "print('Hello World')";  
	luaL_dostring(L,buf);  

	lua_close(L);  
	getc(stdin);  
	return 0;  
}  
