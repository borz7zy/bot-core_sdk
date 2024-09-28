#ifndef _SDK_HXX
#define _SDK_HXX
#if defined(_MSC_VER)
#define PACKED
#else
#define PACKED __attribute__((packed))
#endif

extern "C"
{
#include "lauxlib.h"
#include "lua.h"
#include "luaconf.h"
#include "lualib.h"
}

typedef int (*IntFunctionPtr)(lua_State *L);

typedef struct myNative_Function_List
{
    const char *nativeName PACKED;
    IntFunctionPtr funcPtr PACKED;
} PACKED Native_Function_List;
#endif