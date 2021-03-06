#ifndef UI_INFO_H
#define UI_INFO_H

#include "..\CMUgraphicsLib\CMUgraphics.h"

//User Interface information file.
//This file contains info that is needed by Input and Output classes to
//handle the user interface

enum GUI_MODE	//Graphical user interface mode
{
	MODE_DRAW,	//Drawing mode (startup mode)
	MODE_PLAY	//Playing mode
};

enum DrawMenuItem //The items of the Draw menu (you should add more items)
{
	//Note: Items are ordered here as they appear in menu
	//If you want to change the menu items order, change the order here
	//TODO: Add more items names here [DONE]

	ITM_RECT,		//Recangle item in menu
	ITM_LINE,		//Line item in menu
	ITM_TRI,		//Triangle item in menu
	ITM_RHOMBUS,	//Rhombus item in menu
	ITM_ELLIPSE,	//Ellipse item in menu
	ITM_DRAW_CLR,   //Changes draw color
	ITM_FILL_CLR,   //Changes fill color
	ITM_SWITCH,  //Exit item
	ITM_DEL,
	ITM_CPY,
	ITM_CUT,
	ITM_PST,
	ITM_SAVE,
	ITM_SAVEBT,
	ITM_LOAD,
	ITM_EXIT,	
	DRAW_ITM_COUNT		//no. of menu items ==> This should be the last line in this enum

};

enum ColorPalleteItem //The colors in the color pallete
{
	CLR_BLACK,
	CLR_WHITE,
	CLR_RED,
	CLR_GREEN,
	CLR_BLUE,
	CLR_ITM_COUNT

};

enum PlayMenuItem //The items of the Play menu (you should add more items)
{
	//Note: Items are ordered here as they appear in menu
	//If you want to change the menu items order, change the order here

	//TODO: Add more items names here
	ITM_PickByFigure,
	ITM_PickByColor,
	ITM_TO_DRAW,
	ITM_ExitProg,
	PLAY_ITM_COUNT		//no. of menu items ==> This should be the last line in this enum

};





__declspec(selectany) //This line to prevent "redefinition error"

struct UI_Info	//User Interface Info.
{
	GUI_MODE InterfaceMode;

	int	width, height,	    //Window width and height
		wx , wy,			//Window starting coordinates
		StatusBarHeight,	//Status Bar Height
		ToolBarHeight,		//Tool Bar Height (distance from top of window to bottom line of toolbar)
		MenuItemWidth,		//Width of each item in toolbar menu
		ColorBarHeight,		//Height of the Color Pallete
		ColorItemWidth,		//Width of each Color Pallete icon
		ColorX, ColorY;

	color DrawColor;		//Drawing color
	color FillColor;		//Filling color
	color HighlightColor;	//Highlighting color
	color MsgColor;			//Messages color
	color BkGrndColor;		//Background color
	color StatusBarColor;	//Status bar color
	int PenWidth;			//width of the pen that draws shapes

	/// Add more members if needed

}UI;	//create a global object UI

#endif
