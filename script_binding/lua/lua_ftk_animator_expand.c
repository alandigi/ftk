/*This file is generated by luagen.*/
#include "lua_ftk_animator_expand.h"
#include "lua_ftk_callbacks.h"

static void tolua_reg_types (lua_State* L)
{
	tolua_usertype(L, "FtkAnimatorExpand");
}

static int lua_ftk_animator_expand_create(lua_State* L)
{
	tolua_Error err = {0};
	FtkAnimatorExpand* retv;
	int destroy_when_stop;
	int param_ok = tolua_isnumber(L, 1, 0, &err);

	return_val_if_fail(param_ok, 0);

	destroy_when_stop = tolua_tonumber(L, 1, 0);
	retv = ftk_animator_expand_create(destroy_when_stop);
	tolua_pushusertype(L, (FtkAnimatorExpand*)retv, "FtkAnimatorExpand");

	return 1;
}

int tolua_ftk_animator_expand_init(lua_State* L)
{
	tolua_open(L);
	tolua_reg_types(L);
	tolua_module(L, NULL, 0);
	tolua_beginmodule(L, NULL);
	tolua_cclass(L,"FtkAnimatorExpand", "FtkAnimatorExpand", "FtkAnimator", NULL);
	tolua_beginmodule(L, "FtkAnimatorExpand");
	tolua_function(L, "Create", lua_ftk_animator_expand_create);
	tolua_endmodule(L);
	tolua_endmodule(L);


	return 1;
}