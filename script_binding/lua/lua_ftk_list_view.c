/*This file is generated by luagen.*/
#include "lua_ftk_list_view.h"
#include "lua_ftk_callbacks.h"

static void tolua_reg_types (lua_State* L)
{
	tolua_usertype(L, "FtkListView");
}

static int lua_ftk_list_view_create(lua_State* L)
{
	tolua_Error err = {0};
	FtkListView* retv;
	FtkWidget* parent;
	int x;
	int y;
	int width;
	int height;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isnumber(L, 2, 0, &err) && tolua_isnumber(L, 3, 0, &err) && tolua_isnumber(L, 4, 0, &err) && tolua_isnumber(L, 5, 0, &err);

	return_val_if_fail(param_ok, 0);

	parent = tolua_tousertype(L, 1, 0);
	x = tolua_tonumber(L, 2, 0);
	y = tolua_tonumber(L, 3, 0);
	width = tolua_tonumber(L, 4, 0);
	height = tolua_tonumber(L, 5, 0);
	retv = ftk_list_view_create(parent, x, y, width, height);
	tolua_pushusertype(L, (FtkListView*)retv, "FtkListView");

	return 1;
}

static int lua_ftk_list_view_init(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkWidget* thiz;
	FtkListModel* model;
	FtkListRender* render;
	int item_height;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isusertype(L, 2, "FtkListModel", 0, &err) && tolua_isusertype(L, 3, "FtkListRender", 0, &err) && tolua_isnumber(L, 4, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	model = tolua_tousertype(L, 2, 0);
	render = tolua_tousertype(L, 3, 0);
	item_height = tolua_tonumber(L, 4, 0);
	retv = ftk_list_view_init(thiz, model, render, item_height);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_list_view_get_selected(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_list_view_get_selected(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_list_view_get_model(lua_State* L)
{
	tolua_Error err = {0};
	FtkListModel* retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_list_view_get_model(thiz);
	tolua_pushusertype(L, (FtkListModel*)retv, "FtkListModel");

	return 1;
}

static int lua_ftk_list_view_set_clicked_listener(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkWidget* thiz;
	char* listener;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isstring(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	listener = (char*)tolua_tostring(L, 2, 0);
	retv = ftk_list_view_set_clicked_listener(thiz, lua_ftk_widget_listener_func, listener);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

int tolua_ftk_list_view_init(lua_State* L)
{
	tolua_open(L);
	tolua_reg_types(L);
	tolua_module(L, NULL, 0);
	tolua_beginmodule(L, NULL);
	tolua_cclass(L,"FtkListView", "FtkListView", "FtkWidget", NULL);
	tolua_beginmodule(L, "FtkListView");
	tolua_function(L, "Create", lua_ftk_list_view_create);
	tolua_function(L, "Init", lua_ftk_list_view_init);
	tolua_function(L, "GetSelected", lua_ftk_list_view_get_selected);
	tolua_function(L, "GetModel", lua_ftk_list_view_get_model);
	tolua_function(L, "SetClickedListener", lua_ftk_list_view_set_clicked_listener);
	tolua_endmodule(L);
	tolua_endmodule(L);


	return 1;
}