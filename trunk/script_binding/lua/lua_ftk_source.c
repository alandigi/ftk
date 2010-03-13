/*This file is generated by luagen.*/
#include "lua_ftk_source.h"
#include "lua_ftk_callbacks.h"

static void tolua_reg_types (lua_State* L)
{
	tolua_usertype(L, "FtkSource");
}

static int lua_ftk_source_disable(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkSource* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkSource", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_source_disable(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_source_enable(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkSource* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkSource", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_source_enable(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_source_get_fd(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	FtkSource* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkSource", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_source_get_fd(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_source_check(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	FtkSource* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkSource", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_source_check(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_source_dispatch(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkSource* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkSource", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_source_dispatch(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_source_destroy(lua_State* L)
{
	tolua_Error err = {0};
	FtkSource* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkSource", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	ftk_source_destroy(thiz);

	return 1;
}

static int lua_ftk_source_ref(lua_State* L)
{
	tolua_Error err = {0};
	FtkSource* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkSource", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	ftk_source_ref(thiz);

	return 1;
}

static int lua_ftk_source_unref(lua_State* L)
{
	tolua_Error err = {0};
	FtkSource* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkSource", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	ftk_source_unref(thiz);

	return 1;
}

int tolua_ftk_source_init(lua_State* L)
{
	tolua_open(L);
	tolua_reg_types(L);
	tolua_module(L, NULL, 0);
	tolua_beginmodule(L, NULL);
	tolua_cclass(L,"FtkSource", "FtkSource", "", NULL);
	tolua_beginmodule(L, "FtkSource");
	tolua_function(L, "Disable", lua_ftk_source_disable);
	tolua_function(L, "Enable", lua_ftk_source_enable);
	tolua_function(L, "GetFd", lua_ftk_source_get_fd);
	tolua_function(L, "Check", lua_ftk_source_check);
	tolua_function(L, "Dispatch", lua_ftk_source_dispatch);
	tolua_function(L, "Destroy", lua_ftk_source_destroy);
	tolua_function(L, "Ref", lua_ftk_source_ref);
	tolua_function(L, "Unref", lua_ftk_source_unref);
	tolua_endmodule(L);
	tolua_endmodule(L);


	return 1;
}