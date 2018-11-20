#include "GUI\Input.h"
#include "GUI\Output.h"

//This is a test code to test the Input and Output classes

int main()
{
	int x,y;

	//Create Input and Output objects to test
	Output *pOut = new Output();
	Input *pIn = pOut->CreateInput();

	//Starting the test
	pOut->PrintMessage("This demo is to test input and output classes, Click anywhere to start the test");
	pIn->GetPointClicked(x,y);	//Wait for any click


	///////////////////////////////////////////////////////////////////////////////////
	// TEST 1:
	//			Create The FULL Tool bar, the drawing area and the status bar
	//			This has already been done through the constrcutor of class Output
	///////////////////////////////////////////////////////////////////////////////////

	pOut->PrintMessage("TEST1: Drawing Tool bar and Status bar, Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click


	///////////////////////////////////////////////////////////////////////////////////
	// TEST 2:
	//			Drawing all the Figures with all possible states:
	//			Non-filled, Filled, and highlighted in both cases
	///////////////////////////////////////////////////////////////////////////////////

	pOut->PrintMessage("TEST2: Now we will show that Output class can draw any figure in any state, Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	GfxInfo gfxInfo;//to be used with draw function of the class Ouput
	Point P1, P2, P3;

	/// 2.1- Rectangle Test ///
	/// ===================
	pOut->PrintMessage("Drawing a Rectangle, filled/non-filled and Highlighted filled/non-filled,  Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	// 2.1.1 - Drawing non-filled rectangle
	pOut->PrintMessage("Drawing a Rectangle ==> non-filled,  Click two points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);

	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;	//any color for border
	gfxInfo.isFilled = false;	//Figure is NOT filled
	pOut->DrawRect(P1, P2, gfxInfo, false);

	// 2.1.2 - Drawing highlighted non-filled rectangle
	pOut->PrintMessage("Drawing a Rectangle ==> Highlighted non-filled, Click to Highlight");
	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->DrawRect(P1, P2, gfxInfo, true);


	// 2.1.3 - Drawing a filled rectangle
	pOut->PrintMessage("Drawing a Rectangle ==> filled,  Click two points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);

	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLUE;	//any color for border
	gfxInfo.FillClr = GREEN;//any color for filling
	gfxInfo.isFilled = true;//Figure is filled
	pOut->DrawRect(P1, P2, gfxInfo, false);


	// 2.1.4 - Drawing a highlighted filled rectangle
	pOut->PrintMessage("Drawing a Rectangle ==> Highlighted filled, Click to Highlight");
	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->DrawRect(P1, P2, gfxInfo, true);



	pOut->PrintMessage("Drawing a Rectangle Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawArea();

	/// 2.2- Line Test ///
	/// ==============
	pOut->PrintMessage("Drawing a Line, normal and Highlighted, Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	// 2.2.1 - Drawing a normal Line

	pOut->PrintMessage("Drawing a Line ==> normal,  Click two points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);

	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;
	pOut->DrawLine(P1, P2, gfxInfo, false);

	// 2.2.2 - Drawing a highlighted Line

	pOut->PrintMessage("Drawing a Line ==> Highlighted, Click to Highlight");
	pIn->GetPointClicked(x,y);

	pOut->DrawLine(P1, P2, gfxInfo, true);

	///TODO: Add code to draw Line, Normal and Highlighted [DONE]

	pOut->PrintMessage("Drawing a Line Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawArea();

	/// 2.3- Triangle Test ///
	/// ===================
	pOut->PrintMessage("Drawing a Triangle, filled/non-filled and Highlighted filled/non-filled,  Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	// 2.3.1 - Drawing non-filled Triangle
	pOut->PrintMessage("Drawing a Triangle ==> non-filled, Click three points");
	pIn->GetPointClicked(P1.x,P1.y);
	pIn->GetPointClicked(P2.x,P2.y);
	pIn->GetPointClicked(P3.x,P3.y);

	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLUE;	//any color for border
	gfxInfo.isFilled = false;//Figure is filled
	pOut->DrawTri(P1, P2, P3, gfxInfo, false);

	// 2.3.2 - Drawing Highlighted non-filled Triangle
	pOut->PrintMessage("Drawing a Triangle ==> highlighted non-filled, Click to Highlight");
	pIn->GetPointClicked(x,y);
	pOut->DrawTri(P1, P2, P3, gfxInfo, true);

	// 2.3.3 - Drawing a filled Triangle
	pOut->PrintMessage("Drawing a Triangle ==> filled, Click three points");
	pIn->GetPointClicked(P1.x,P1.y);
	pIn->GetPointClicked(P2.x,P2.y);
	pIn->GetPointClicked(P3.x,P3.y);

	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLACK;	//any color for border
	gfxInfo.FillClr = GREENYELLOW;//any color for filling
	gfxInfo.isFilled = true;//Figure is filled
	pOut->DrawTri(P1, P2, P3, gfxInfo, false);

	//2.3.4 - Drawing a highlighted filled Triangle
	pOut->PrintMessage("Drawing a Triangle ==> highlighted filled, Click to Highlight");
	pIn->GetPointClicked(x,y);
	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLACK;	//any color for border
	gfxInfo.FillClr = GREENYELLOW;//any color for filling
	gfxInfo.isFilled = true;//Figure is filled
	pOut->DrawTri(P1, P2, P3, gfxInfo, true);

	///TODO: Add code to draw Triangle in all possible states [DONE]

	pOut->PrintMessage("Drawing a Triangle Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawArea();

	/// 2.4- Rhombus Test ///
	/// ===================
	pOut->PrintMessage("Drawing a Rhombus, filled/non-filled and Highlighted filled/non-filled,  Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	// 2.4.1 - Drawing non-filled Rhombus
	pOut->PrintMessage("Drawing a Rhombus ==> non-filled, Click the midpoint of the rhombus");
	pIn->GetPointClicked(P1.x,P1.y);

	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLUE;	//any color for border
	gfxInfo.isFilled = false;//Figure is filled
	pOut->DrawRhombus(P1, gfxInfo, false);

	// 2.4.2 - Drawing non-filled highlighted Rhombus
	pOut->PrintMessage("Drawing a Rhombus ==> non-filled highlighted, Click to Highlight");
	pIn->GetPointClicked(x,y);
	pOut->DrawRhombus(P1, gfxInfo, true);

	// 2.4.3 - Drawing filled Rhombus
	pOut->PrintMessage("Drawing a Rhombus ==> filled, Click the midpoint of the rhombus");
	pIn->GetPointClicked(P1.x,P1.y);

	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLACK;	//any color for border
	gfxInfo.FillClr = RED;//any color for filling
	gfxInfo.isFilled = true;//Figure is filled
	pOut->DrawRhombus(P1, gfxInfo, false);

	// 2.4.4 - Drawing filled highlighted Rhombus
	pOut->PrintMessage("Drawing a Rhombus ==> filled highlighted, Click to Highlight");
	pIn->GetPointClicked(x,y);

	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLACK;	//any color for border
	gfxInfo.FillClr = RED;//any color for filling
	gfxInfo.isFilled = true;//Figure is filled
	pOut->DrawRhombus(P1, gfxInfo, true);

	///TODO: Add code to draw Rhombus in all possible states [DONE]

	pOut->PrintMessage("Drawing a Rhombus Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawArea();

	/// 2.5- Ellipse Test ///
	/// ===================
	pOut->PrintMessage("Drawing an Ellipse, filled/non-filled and Highlighted filled/non-filled,  Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	// 2.5.1 - Drawing non-filled Ellipse
	pOut->PrintMessage("Drawing an Ellipse ==> non-filled, Click the midpoint of the Ellipse");
	pIn->GetPointClicked(P1.x,P1.y);

	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLACK;	//any color for border
	gfxInfo.isFilled = false;//Figure is filled
	pOut->DrawEllipse(P1, gfxInfo, false);

	// 2.5.2 - Drawing non-filled highlighted Ellipse
	pOut->PrintMessage("Drawing an Ellipse ==> non-filled highlighted, Click to Highlight");
	pIn->GetPointClicked(x,y);
	pOut->DrawEllipse(P1, gfxInfo, true);

	// 2.5.3 - Drawing filled Ellipse
	pOut->PrintMessage("Drawing a Ellipse ==> filled, Click the midpoint of the Ellipse");
	pIn->GetPointClicked(P1.x,P1.y);

	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLACK;	//any color for border
	gfxInfo.FillClr = CYAN;//any color for filling
	gfxInfo.isFilled = true;//Figure is filled
	pOut->DrawEllipse(P1, gfxInfo, false);

	// 2.5.4 - Drawing filled highlighted Ellipse
	pOut->PrintMessage("Drawing a Ellipse ==> filled highlighted, Click to Highlight");
	pIn->GetPointClicked(x,y);

	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLACK;	//any color for border
	gfxInfo.FillClr = CYAN;//any color for filling
	gfxInfo.isFilled = true;//Figure is filled
	pOut->DrawEllipse(P1, gfxInfo, true);
	///TODO: Add code to draw Ellipse in all possible states [DONE]

	pOut->PrintMessage("Drawing a Ellipse Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawArea();

	///////////////////////////////////////////////////////////////////////////////////
	// TEST 3:
	//			Input Class: Read strings from the user
	///////////////////////////////////////////////////////////////////////////////////
	pOut->PrintMessage("TEST3: Now Time to test class Input, Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	pOut->PrintMessage("Testing Input ability to read strings");

	string InputTestString = pIn->GetSrting(pOut);
	pOut->ClearStatusBar();
	pOut->PrintMessage("You Entered " + InputTestString);

	///TODO: Add code here to [DONE]
	// 1- Read a string from the user on the status bar
	// 2- After reading the stirng clear the status bar
	// 3- print on the status bar "You Entered" then print the string

	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawArea();

	///////////////////////////////////////////////////////////////////////////////////
	// TEST 4:
	//			Input Class : Check for the user action
	///////////////////////////////////////////////////////////////////////////////////
	pOut->PrintMessage("TEST4: Testing Input ability to detect User Action, click anywhere");

	ActionType ActType;
	ActionType ChooseClr;

	///TODO:  [DONE]
	//You must add a case for each action (both Draw mode and Play mode actions)
	//Add cases for the missing actions below
	do
	{
		ActType = pIn->GetUserAction();

		switch (ActType)
		{
		case DRAW_RECT:
				pOut->PrintMessage("Action: Draw a Rectangle , Click anywhere");
				pIn->GetPointClicked(P1.x,P1.y);
				pIn->GetPointClicked(P2.x,P2.y);
				pOut->DrawRect(P1,P2,gfxInfo,false);
				break;

		case DRAW_LINE:
				pOut->PrintMessage("Action: Draw a Line , Click anywhere");
				pIn->GetPointClicked(P1.x,P1.y);
				pIn->GetPointClicked(P2.x,P2.y);
				pOut->DrawLine(P1,P2,gfxInfo,false);
				break;

		case DRAW_RHOMBUS:
				pOut->PrintMessage("Action: Draw a Rhombus , Click anywhere");
				pIn->GetPointClicked(P1.x,P1.y);
				pOut->DrawRhombus(P1,gfxInfo,false);
				break;

		case DRAW_ELLIPSE:
				pOut->PrintMessage("Action: Draw an Ellipse , Click anywhere");
				pIn->GetPointClicked(P1.x,P1.y);
				pOut->DrawEllipse(P1,gfxInfo,false);
				break;

		case DRAW_TRI:
				pOut->PrintMessage("Action: Draw a Triangle , Click anywhere");
				pIn->GetPointClicked(P1.x,P1.y);
				pIn->GetPointClicked(P2.x,P2.y);
				pIn->GetPointClicked(P3.x,P3.y);
				pOut->DrawTri(P1,P2,P3,gfxInfo,false);
				break;

		case CHNG_DRAW_CLR:
				pOut->PrintMessage("Action: Change Figure's drawing color , Click anywhere");
				pOut->DrawColorPallete(2);
				ChooseClr = pIn->GetClr();
				switch(ChooseClr){
				case PICK_BLACK: gfxInfo.DrawClr = BLACK;
								 break;
				case PICK_WHITE: gfxInfo.DrawClr = WHITE;
								 break;
				case PICK_RED:   gfxInfo.DrawClr = RED;
								 break;
				case PICK_GREEN: gfxInfo.DrawClr = GREEN;
								 break;
				case PICK_BLUE:  gfxInfo.DrawClr = BLUE;
								 break;
				}
				pOut->ClearColorPallete();
				break;

		case CHNG_FILL_CLR:
				pOut->PrintMessage("Action: Change Figure's Fill color , Click anywhere");
				pOut->DrawColorPallete(1);
				ChooseClr = pIn->GetClr();
				switch(ChooseClr){
				case PICK_BLACK: gfxInfo.FillClr = BLACK;
								 break;
				case PICK_WHITE: gfxInfo.FillClr = WHITE;
								 break;
				case PICK_RED:   gfxInfo.FillClr = RED;
								 break;
				case PICK_GREEN: gfxInfo.FillClr = GREEN;
								 break;
				case PICK_BLUE:  gfxInfo.FillClr = BLUE;
								 break;
				}
				pOut->ClearColorPallete();
				break;

		case DEL:
				pOut->PrintMessage("Action: a click on the Delete button");
				break;
		case COPY:
				pOut->PrintMessage("Action: a click on the Copy button");
				break;
		case CUT:
				pOut->PrintMessage("Action: a click on the Cut button");
				break;
		case PASTE:
				pOut->PrintMessage("Action: a click on the Paste button");
				break;
		case SAVE:
				pOut->PrintMessage("Action: a click on the Save button, Click anywhere");
				break;
		case SAVE_BY_TYPE:
				pOut->PrintMessage("Action: a click on the Save By Type button, Click anywhere");
				break;
		case LOAD:
				pOut->PrintMessage("Action: a click on the Load button, Click anywhere");
				break;
		case STATUS:
				pOut->PrintMessage("Action: a click on the Status Bar, Click anywhere");
				break;
		case DRAWING_AREA:
				pOut->PrintMessage("Action: a click on the Drawing Area, Click anywhere");
				break;

		case EMPTY:
				pOut->PrintMessage("Action: a click on empty area in the Design Tool Bar, Click anywhere");
				break;

		case TO_DRAW:
				pOut->PrintMessage("Action: Switch to Draw Mode, creating simualtion tool bar");
				pOut->CreateDrawToolBar();
				break;

		case TO_PLAY:
				pOut->PrintMessage("Action: Switch to Play Mode, creating Design tool bar");
				pOut->CreatePlayToolBar();
				break;
		case PICK_BY_FIGURE:
				pOut->PrintMessage("Action: Click on the Pick By Figure button");
				break;
		case PICK_BY_COLOR:
				pOut->PrintMessage("Action: Click on the Pick By Color button");
				break;
				

		case EXIT:
				break;
		}
	}while(ActType != EXIT);


	/// Exiting
	pOut->PrintMessage("Action: EXIT, test is finished, click anywhere to exit");
	pIn->GetPointClicked(x,y);


	delete pIn;
	delete pOut;
	return 0;
}
