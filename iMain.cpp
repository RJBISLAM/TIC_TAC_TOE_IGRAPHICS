#include "iGraphics.h"

int x, y;
void homepage();
void startpage();
void playpage();
void vsplayerpage();
void howtoplaypage();
void aboutpage();
void didyouknowpage();
void fact1page();
void fact2page();
void fact3page();
void fact4page();
void win_1();
void win_2();
void win_condition();
void win_condition_vsc_x();
void win_condition_vsc_o();
void win_condition_for_3();
void win_condition_for_5();
void win_condition_for_golden3();
void in_a_row_3();
void in_a_row_5();
void golden_3();
void draw();
void single_play();
void new_game();
void game_count_func();
void game_count_func_5();
void game_count_func_golden3();
void compmove();
void compmove2();
void func();
void vscmp_x();
void vscmp_o();


int move[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

int homepage_idx = 1; 
int startpage_idx = 0; 
int playpage_idx = 0;
int howtoplaypage_idx = 0;
int aboutpage_idx = 0;
int didyouknowpage_idx = 0;
int fact1page_idx = 0;
int fact2page_idx = 0;
int fact3page_idx = 0;
int fact4page_idx = 0;
int win_1_idx = 0;
int win_2_idx = 0;
int draw_idx = 0;
int win_1_for_3_idx = 0;
int win_2_for_3_idx = 0;
int draw_for_3_idx = 0;
int win_1_for_5_idx = 0;
int win_2_for_5_idx = 0;
int draw_for_5_idx = 0;
int vsplayer_idx = 0;
int singleplay_idx = 0;
int in_a_row_3_idx = 0;
int in_a_row_5_idx = 0;
int golden_3_idx = 0;
int game_count = 0;
int player1win = 0;
int player2win = 0;
int singlevsc_idx=0;
int vscmp_x_idx=0;
int vscmp_o_idx=0;
int winvsc_idx=0;
int losevsc_idx=0;
int drawvsc_idx=0;

int turn = 1;

char home [100][90] = { "pic//home//00001.bmp",
"pic//home//00002.bmp",
"pic//home//00003.bmp",
"pic//home//00004.bmp",
"pic//home//00005.bmp",
"pic//home//00006.bmp",
"pic//home//00007.bmp",
"pic//home//00008.bmp",
"pic//home//00009.bmp",
"pic//home//00010.bmp",
"pic//home//00011.bmp",
"pic//home//00012.bmp",
"pic//home//00013.bmp",
"pic//home//00014.bmp",
"pic//home//00015.bmp",
"pic//home//00016.bmp",
"pic//home//00017.bmp",
"pic//home//00018.bmp",
"pic//home//00019.bmp",
"pic//home//00020.bmp",
"pic//home//00021.bmp",
"pic//home//00022.bmp",
"pic//home//00023.bmp",
"pic//home//00024.bmp",
"pic//home//00025.bmp",
"pic//home//00026.bmp",
"pic//home//00027.bmp",
"pic//home//00028.bmp",
"pic//home//00029.bmp",
"pic//home//00030.bmp",
"pic//home//00031.bmp",
"pic//home//00032.bmp",
"pic//home//00033.bmp",
"pic//home//00034.bmp",
"pic//home//00035.bmp",
"pic//home//00036.bmp",
"pic//home//00037.bmp",
"pic//home//00038.bmp",
"pic//home//00039.bmp",
"pic//home//00040.bmp",
"pic//home//00041.bmp",
"pic//home//00042.bmp",
"pic//home//00043.bmp",
"pic//home//00044.bmp",
"pic//home//00045.bmp",
"pic//home//00046.bmp",
"pic//home//00047.bmp",
"pic//home//00048.bmp",
"pic//home//00049.bmp",
"pic//home//00050.bmp",
"pic//home//00051.bmp",
"pic//home//00052.bmp",
"pic//home//00053.bmp",
"pic//home//00054.bmp",
"pic//home//00055.bmp",
"pic//home//00056.bmp",
"pic//home//00057.bmp",
"pic//home//00058.bmp",
"pic//home//00059.bmp",
"pic//home//00060.bmp",
"pic//home//00061.bmp",
"pic//home//00062.bmp",
"pic//home//00063.bmp",
"pic//home//00064.bmp",
"pic//home//00065.bmp",
"pic//home//00066.bmp",
"pic//home//00067.bmp",
"pic//home//00068.bmp",
"pic//home//00069.bmp",
"pic//home//00070.bmp",
"pic//home//00071.bmp",
"pic//home//00072.bmp",
"pic//home//00073.bmp",
"pic//home//00074.bmp",
"pic//home//00075.bmp",
"pic//home//00076.bmp",
"pic//home//00077.bmp",
"pic//home//00078.bmp",
"pic//home//00079.bmp",
"pic//home//00080.bmp",
"pic//home//00081.bmp",
"pic//home//00082.bmp",
"pic//home//00083.bmp",
"pic//home//00084.bmp",
"pic//home//00085.bmp",
"pic//home//00086.bmp",
"pic//home//00087.bmp",
"pic//home//00088.bmp",
"pic//home//00089.bmp",
"pic//home//00090.bmp"};

/*char start [100][81] = { "pic//start//00001.bmp",
"pic//start//00002.bmp",
"pic//start//00003.bmp",
"pic//start//00004.bmp",
"pic//start//00005.bmp",
"pic//start//00006.bmp",
"pic//start//00007.bmp",
"pic//start//00008.bmp",
"pic//start//00009.bmp",
"pic//start//00010.bmp",
"pic//start//00011.bmp",
"pic//start//00012.bmp",
"pic//start//00013.bmp",
"pic//start//00014.bmp",
"pic//start//00015.bmp",
"pic//start//00016.bmp",
"pic//start//00017.bmp",
"pic//start//00018.bmp",
"pic//start//00019.bmp",
"pic//start//00020.bmp",
"pic//start//00021.bmp",
"pic//start//00022.bmp",
"pic//start//00023.bmp",
"pic//start//00024.bmp",
"pic//start//00025.bmp",
"pic//start//00026.bmp",
"pic//start//00027.bmp",
"pic//start//00028.bmp",
"pic//start//00029.bmp",
"pic//start//00030.bmp",
"pic//start//00031.bmp",
"pic//start//00032.bmp",
"pic//start//00033.bmp",
"pic//start//00034.bmp",
"pic//start//00035.bmp",
"pic//start//00036.bmp",
"pic//start//00037.bmp",
"pic//start//00038.bmp",
"pic//start//00039.bmp",
"pic//start//00040.bmp",
"pic//start//00041.bmp",
"pic//start//00042.bmp",
"pic//start//00043.bmp",
"pic//start//00044.bmp",
"pic//start//00045.bmp",
"pic//start//00046.bmp",
"pic//start//00047.bmp",
"pic//start//00048.bmp",
"pic//start//00049.bmp",
"pic//start//00050.bmp",
"pic//start//00051.bmp",
"pic//start//00052.bmp",
"pic//start//00053.bmp",
"pic//start//00054.bmp",
"pic//start//00055.bmp",
"pic//start//00056.bmp",
"pic//start//00057.bmp",
"pic//start//00058.bmp",
"pic//start//00059.bmp",
"pic//start//00060.bmp",
"pic//start//00061.bmp",
"pic//start//00062.bmp",
"pic//start//00063.bmp",
"pic//start//00064.bmp",
"pic//start//00065.bmp",
"pic//start//00066.bmp",
"pic//start//00067.bmp",
"pic//start//00068.bmp",
"pic//start//00069.bmp",
"pic//start//00070.bmp",
"pic//start//00071.bmp",
"pic//start//00072.bmp",
"pic//start//00073.bmp",
"pic//start//00074.bmp",
"pic//start//00075.bmp",
"pic//start//00076.bmp",
"pic//start//00077.bmp",
"pic//start//00078.bmp",
"pic//start//00079.bmp",
"pic//start//00080.bmp",
"pic//start//00081.bmp"};*/

int homeidx=0;
//int startidx=0;


void iDraw()
{

	iClear();
	if (homepage_idx == 1)
	{
		homepage();
	}
	else if (startpage_idx == 1)
	{
		startpage();
	}
	else if (playpage_idx == 1)
	{
		playpage();
	}
	else if (vsplayer_idx == 1)
	{
		vsplayerpage();
	}
	else if (singleplay_idx == 1)
	{
		single_play();

		if (move[0][0] == 1)
			iShowBMP2(426, 484, "pic//cross.bmp", 16777215);
		if (move[0][1] == 1)
			iShowBMP2(620, 484, "pic//cross.bmp", 16777215);
		if (move[0][2] == 1)
			iShowBMP2(805, 484, "pic//cross.bmp", 16777215);
		if (move[1][0] == 1)
			iShowBMP2(426, 309, "pic//cross.bmp", 16777215);
		if (move[1][1] == 1)
			iShowBMP2(620, 309, "pic//cross.bmp", 16777215);
		if (move[1][2] == 1)
			iShowBMP2(805, 309, "pic//cross.bmp", 16777215);
		if (move[2][0] == 1)
			iShowBMP2(426, 136, "pic//cross.bmp", 16777215);
		if (move[2][1] == 1)
			iShowBMP2(620, 136, "pic//cross.bmp", 16777215);
		if (move[2][2] == 1)
			iShowBMP2(805, 136, "pic//cross.bmp", 16777215);

		if (move[0][0] == -1)
			iShowBMP2(426, 484, "pic//dot.bmp", 16777215);
		if (move[0][1] == -1)
			iShowBMP2(620, 484, "pic//dot.bmp", 16777215);
		if (move[0][2] == -1)
			iShowBMP2(805, 484, "pic//dot.bmp", 16777215);
		if (move[1][0] == -1)
			iShowBMP2(426, 309, "pic//dot.bmp", 16777215);
		if (move[1][1] == -1)
			iShowBMP2(620, 309, "pic//dot.bmp", 16777215);
		if (move[1][2] == -1)
			iShowBMP2(805, 309, "pic//dot.bmp", 16777215);
		if (move[2][0] == -1)
			iShowBMP2(426, 136, "pic//dot.bmp", 16777215);
		if (move[2][1] == -1)
			iShowBMP2(620, 136, "pic//dot.bmp", 16777215);
		if (move[2][2] == -1)
			iShowBMP2(805, 136, "pic//dot.bmp", 16777215);
	}

	else if (singlevsc_idx == 1)
	{
		iShowBMP(0,0,"pic//vscomp.bmp");
	}

	else if (winvsc_idx == 1)
	{
		iShowBMP(0,0,"pic//win_vsc.bmp");
	}

	else if (losevsc_idx == 1)
	{
		iShowBMP(0,0,"pic//lose_vsc.bmp");
	}

	else if (drawvsc_idx == 1)
	{
		iShowBMP(0,0,"pic//draw_vsc.bmp");
	}

	else if (vscmp_x_idx == 1)
	{
		vscmp_x();

		if (move[0][0] == 1)
			iShowBMP2(426, 484, "pic//cross.bmp", 16777215);
		if (move[0][1] == 1)
			iShowBMP2(620, 484, "pic//cross.bmp", 16777215);
		if (move[0][2] == 1)
			iShowBMP2(805, 484, "pic//cross.bmp", 16777215);
		if (move[1][0] == 1)
			iShowBMP2(426, 309, "pic//cross.bmp", 16777215);
		if (move[1][1] == 1)
			iShowBMP2(620, 309, "pic//cross.bmp", 16777215);
		if (move[1][2] == 1)
			iShowBMP2(805, 309, "pic//cross.bmp", 16777215);
		if (move[2][0] == 1)
			iShowBMP2(426, 136, "pic//cross.bmp", 16777215);
		if (move[2][1] == 1)
			iShowBMP2(620, 136, "pic//cross.bmp", 16777215);
		if (move[2][2] == 1)
			iShowBMP2(805, 136, "pic//cross.bmp", 16777215);

		if (move[0][0] == -1)
			iShowBMP2(426, 484, "pic//dot.bmp", 16777215);
		if (move[0][1] == -1)
			iShowBMP2(620, 484, "pic//dot.bmp", 16777215);
		if (move[0][2] == -1)
			iShowBMP2(805, 484, "pic//dot.bmp", 16777215);
		if (move[1][0] == -1)
			iShowBMP2(426, 309, "pic//dot.bmp", 16777215);
		if (move[1][1] == -1)
			iShowBMP2(620, 309, "pic//dot.bmp", 16777215);
		if (move[1][2] == -1)
			iShowBMP2(805, 309, "pic//dot.bmp", 16777215);
		if (move[2][0] == -1)
			iShowBMP2(426, 136, "pic//dot.bmp", 16777215);
		if (move[2][1] == -1)
			iShowBMP2(620, 136, "pic//dot.bmp", 16777215);
		if (move[2][2] == -1)
			iShowBMP2(805, 136, "pic//dot.bmp", 16777215);
	}

	else if (vscmp_o_idx == 1)
	{
		vscmp_o();
		move[0][2] = 1;

		if (move[0][0] == 1)
			iShowBMP2(426, 484, "pic//cross.bmp", 16777215);
		if (move[0][1] == 1)
			iShowBMP2(620, 484, "pic//cross.bmp", 16777215);
		if (move[0][2] == 1)
			iShowBMP2(805, 484, "pic//cross.bmp", 16777215);
		if (move[1][0] == 1)
			iShowBMP2(426, 309, "pic//cross.bmp", 16777215);
		if (move[1][1] == 1)
			iShowBMP2(620, 309, "pic//cross.bmp", 16777215);
		if (move[1][2] == 1)
			iShowBMP2(805, 309, "pic//cross.bmp", 16777215);
		if (move[2][0] == 1)
			iShowBMP2(426, 136, "pic//cross.bmp", 16777215);
		if (move[2][1] == 1)
			iShowBMP2(620, 136, "pic//cross.bmp", 16777215);
		if (move[2][2] == 1)
			iShowBMP2(805, 136, "pic//cross.bmp", 16777215);

		if (move[0][0] == -1)
			iShowBMP2(426, 484, "pic//dot.bmp", 16777215);
		if (move[0][1] == -1)
			iShowBMP2(620, 484, "pic//dot.bmp", 16777215);
		if (move[0][2] == -1)
			iShowBMP2(805, 484, "pic//dot.bmp", 16777215);
		if (move[1][0] == -1)
			iShowBMP2(426, 309, "pic//dot.bmp", 16777215);
		if (move[1][1] == -1)
			iShowBMP2(620, 309, "pic//dot.bmp", 16777215);
		if (move[1][2] == -1)
			iShowBMP2(805, 309, "pic//dot.bmp", 16777215);
		if (move[2][0] == -1)
			iShowBMP2(426, 136, "pic//dot.bmp", 16777215);
		if (move[2][1] == -1)
			iShowBMP2(620, 136, "pic//dot.bmp", 16777215);
		if (move[2][2] == -1)
			iShowBMP2(805, 136, "pic//dot.bmp", 16777215);
	}


	else if (in_a_row_3_idx == 1)
	{
		in_a_row_3();

		if (move[0][0] == 1)
			iShowBMP2(775, 484, "pic//cross.bmp", 16777215);
		if (move[0][1] == 1)
			iShowBMP2(969, 484, "pic//cross.bmp", 16777215);
		if (move[0][2] == 1)
			iShowBMP2(1154, 484, "pic//cross.bmp", 16777215);
		if (move[1][0] == 1)
			iShowBMP2(775, 309, "pic//cross.bmp", 16777215);
		if (move[1][1] == 1)
			iShowBMP2(969, 309, "pic//cross.bmp", 16777215);
		if (move[1][2] == 1)
			iShowBMP2(1154, 309, "pic//cross.bmp", 16777215);
		if (move[2][0] == 1)
			iShowBMP2(775, 136, "pic//cross.bmp", 16777215);
		if (move[2][1] == 1)
			iShowBMP2(969, 136, "pic//cross.bmp", 16777215);
		if (move[2][2] == 1)
			iShowBMP2(1154, 136, "pic//cross.bmp", 16777215);

		if (move[0][0] == -1)
			iShowBMP2(775, 484, "pic//dot.bmp", 16777215);
		if (move[0][1] == -1)
			iShowBMP2(969, 484, "pic//dot.bmp", 16777215);
		if (move[0][2] == -1)
			iShowBMP2(1154, 484, "pic//dot.bmp", 16777215);
		if (move[1][0] == -1)
			iShowBMP2(775, 309, "pic//dot.bmp", 16777215);
		if (move[1][1] == -1)
			iShowBMP2(969, 309, "pic//dot.bmp", 16777215);
		if (move[1][2] == -1)
			iShowBMP2(1154, 309, "pic//dot.bmp", 16777215);
		if (move[2][0] == -1)
			iShowBMP2(775, 136, "pic//dot.bmp", 16777215);
		if (move[2][1] == -1)
			iShowBMP2(969, 136, "pic//dot.bmp", 16777215);
		if (move[2][2] == -1)
			iShowBMP2(1154, 136, "pic//dot.bmp", 16777215);
	}

	else if (in_a_row_5_idx == 1)
	{
		in_a_row_5();

		if (move[0][0] == 1)
			iShowBMP2(775, 484, "pic//cross.bmp", 16777215);
		if (move[0][1] == 1)
			iShowBMP2(969, 484, "pic//cross.bmp", 16777215);
		if (move[0][2] == 1)
			iShowBMP2(1154, 484, "pic//cross.bmp", 16777215);
		if (move[1][0] == 1)
			iShowBMP2(775, 309, "pic//cross.bmp", 16777215);
		if (move[1][1] == 1)
			iShowBMP2(969, 309, "pic//cross.bmp", 16777215);
		if (move[1][2] == 1)
			iShowBMP2(1154, 309, "pic//cross.bmp", 16777215);
		if (move[2][0] == 1)
			iShowBMP2(775, 136, "pic//cross.bmp", 16777215);
		if (move[2][1] == 1)
			iShowBMP2(969, 136, "pic//cross.bmp", 16777215);
		if (move[2][2] == 1)
			iShowBMP2(1154, 136, "pic//cross.bmp", 16777215);

		if (move[0][0] == -1)
			iShowBMP2(775, 484, "pic//dot.bmp", 16777215);
		if (move[0][1] == -1)
			iShowBMP2(969, 484, "pic//dot.bmp", 16777215);
		if (move[0][2] == -1)
			iShowBMP2(1154, 484, "pic//dot.bmp", 16777215);
		if (move[1][0] == -1)
			iShowBMP2(775, 309, "pic//dot.bmp", 16777215);
		if (move[1][1] == -1)
			iShowBMP2(969, 309, "pic//dot.bmp", 16777215);
		if (move[1][2] == -1)
			iShowBMP2(1154, 309, "pic//dot.bmp", 16777215);
		if (move[2][0] == -1)
			iShowBMP2(775, 136, "pic//dot.bmp", 16777215);
		if (move[2][1] == -1)
			iShowBMP2(969, 136, "pic//dot.bmp", 16777215);
		if (move[2][2] == -1)
			iShowBMP2(1154, 136, "pic//dot.bmp", 16777215);
	}

	else if (golden_3_idx == 1)
	{
		golden_3();

		if (move[0][0] == 1)
			iShowBMP2(775, 484, "pic//cross.bmp", 16777215);
		if (move[0][1] == 1)
			iShowBMP2(969, 484, "pic//cross.bmp", 16777215);
		if (move[0][2] == 1)
			iShowBMP2(1154, 484, "pic//cross.bmp", 16777215);
		if (move[1][0] == 1)
			iShowBMP2(775, 309, "pic//cross.bmp", 16777215);
		if (move[1][1] == 1)
			iShowBMP2(969, 309, "pic//cross.bmp", 16777215);
		if (move[1][2] == 1)
			iShowBMP2(1154, 309, "pic//cross.bmp", 16777215);
		if (move[2][0] == 1)
			iShowBMP2(775, 136, "pic//cross.bmp", 16777215);
		if (move[2][1] == 1)
			iShowBMP2(969, 136, "pic//cross.bmp", 16777215);
		if (move[2][2] == 1)
			iShowBMP2(1154, 136, "pic//cross.bmp", 16777215);

		if (move[0][0] == -1)
			iShowBMP2(775, 484, "pic//dot.bmp", 16777215);
		if (move[0][1] == -1)
			iShowBMP2(969, 484, "pic//dot.bmp", 16777215);
		if (move[0][2] == -1)
			iShowBMP2(1154, 484, "pic//dot.bmp", 16777215);
		if (move[1][0] == -1)
			iShowBMP2(775, 309, "pic//dot.bmp", 16777215);
		if (move[1][1] == -1)
			iShowBMP2(969, 309, "pic//dot.bmp", 16777215);
		if (move[1][2] == -1)
			iShowBMP2(1154, 309, "pic//dot.bmp", 16777215);
		if (move[2][0] == -1)
			iShowBMP2(775, 136, "pic//dot.bmp", 16777215);
		if (move[2][1] == -1)
			iShowBMP2(969, 136, "pic//dot.bmp", 16777215);
		if (move[2][2] == -1)
			iShowBMP2(1154, 136, "pic//dot.bmp", 16777215);
	}

	else if (win_1_for_3_idx == 1)
	{
		iShowBMP (0,0, "pic//win_1_3.bmp");
	}

	else if (win_2_for_3_idx == 1)
	{
		iShowBMP (0,0, "pic//win_2_3.bmp");
	}

	else if (draw_for_3_idx == 1)
	{
		iShowBMP (0,0, "pic//draw_3.bmp");
	}

	else if (win_1_for_5_idx == 1)
	{
		iShowBMP (0,0, "pic//win_1_5.bmp");
	}

	else if (win_2_for_5_idx == 1)
	{
		iShowBMP (0,0, "pic//win_2_5.bmp");
	}

	else if (draw_for_5_idx == 1)
	{
		iShowBMP (0,0, "pic//draw_5.bmp");
	}

	else if (howtoplaypage_idx == 1)
	{
		howtoplaypage();
	}
	else if (aboutpage_idx == 1)
	{
		aboutpage();
	}
	else if (didyouknowpage_idx == 1)
	{
		didyouknowpage();
	}
	else if (fact1page_idx == 1)
	{
		fact1page();
	}
	else if (fact2page_idx == 1)
	{
		fact2page();
	}
	else if (fact3page_idx == 1)
	{
		fact3page();
	}
	else if (fact4page_idx == 1)
	{
		fact4page();
	}
	else if (win_1_idx == 1)
	{
		win_1();
	}
	else if (win_2_idx == 1)
	{
		win_2();
	}
	else if (draw_idx == 1)
	{
		draw(); 
	}
}

void iMouseMove(int mx, int my)
{
	// printf("x = %d, y= %d\n",mx,my);
	// place your codes here
}

void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{

		if (homepage_idx == 1 && (mx > 0 && mx < 1400) && (my > 0 && my < 787))
		{
			homepage_idx = 0;
			startpage_idx = 1;
			//startidx=0;
		}
		else if (startpage_idx == 1 && (mx > 165 && mx < 520) && (my > 420 && my < 510))
		{
			startpage_idx = 0;
			playpage_idx = 1;
		}
		else if (playpage_idx == 1)
		{
			if ((mx > 520 && mx < 880) && (my > 420 && my < 510))
			{
				playpage_idx = 0;
				vsplayer_idx = 1;
			}
			else if ((mx > 520 && mx < 880) && (my > 305 && my < 395))
			{
				playpage_idx = 0;
				singlevsc_idx = 1;
			}
			else if ((mx > 520 && mx < 880) && (my > 190 && my < 280))
			{
				playpage_idx = 0;
				startpage_idx = 1;
			}
			else if ((mx > 520 && mx < 880) && (my > 80 && my < 167))
			{
				exit (0);
			}
		}

		else if (vsplayer_idx == 1 && (mx > 165 && mx < 520) && (my > 420 && my < 510))
		{
			vsplayer_idx = 0;
			singleplay_idx = 1;
			new_game();
		}

		else if (singleplay_idx == 1)
		{
			if (mx > 426 && mx < 609 && my > 484 && my < 667 && move[0][0] == 0)
			{
				move[0][0] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition();
			}
			if (mx > 612 && mx < 790 && my > 484 && my < 667 && move[0][1] == 0)
			{
				move[0][1] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition();
			}
			if (mx > 794 && mx < 965 && my > 484 && my < 667 && move[0][2] == 0)
			{
				move[0][2] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition();
			}
			if (mx > 426 && mx < 609 && my > 309 && my < 481 && move[1][0] == 0)
			{
				move[1][0] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition();
			}
			if (mx > 612 && mx < 790 && my > 309 && my < 481 && move[1][1] == 0)
			{
				move[1][1] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition();
			}
			if (mx > 794 && mx < 965 && my > 309 && my < 481 && move[1][2] == 0)
			{
				move[1][2] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition();
			}
			if (mx > 426 && mx < 609 && my > 136 && my < 300 && move[2][0] == 0)
			{
				move[2][0] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition();
			}
			if (mx > 612 && mx < 790 && my > 136 && my < 300 && move[2][1] == 0)
			{
				move[2][1] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition();
			}
			if (mx > 794 && mx < 965 && my > 136 && my < 300 && move[2][2] == 0)
			{
				move[2][2] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition();
			}
		}

		else if (singlevsc_idx == 1)
		{
			if ((mx > 520 && mx < 880) && (my > 420 && my < 510))
			{
				singlevsc_idx = 0;
				vscmp_x_idx = 1;
			}
			else if ((mx > 520 && mx < 880) && (my > 305 && my < 395))
			{
				singlevsc_idx = 0;
				vscmp_o_idx = 1;
			}
			else if ((mx > 520 && mx < 880) && (my > 190 && my < 280))
			{
				singlevsc_idx = 0;
				playpage_idx = 1;
			}
			else if ((mx > 520 && mx < 880) && (my > 80 && my < 167))
			{
				singlevsc_idx = 0;
				startpage_idx = 1;
			}
		}

		else if (vscmp_x_idx == 1)
		{
			if (mx > 426 && mx < 609 && my > 484 && my < 667 && move[0][0] == 0)
			{
				move[0][0] = 1;
				compmove();
				win_condition_vsc_x();
			}
			if (mx > 612 && mx < 790 && my > 484 && my < 667 && move[0][1] == 0)
			{
				move[0][1] = 1;
				compmove();
				win_condition_vsc_x();
			}
			if (mx > 794 && mx < 965 && my > 484 && my < 667 && move[0][2] == 0)
			{
				move[0][2] = 1;
				compmove();
				win_condition_vsc_x();
			}
			if (mx > 426 && mx < 609 && my > 309 && my < 481 && move[1][0] == 0)
			{
				move[1][0] = 1;
				compmove();
				win_condition_vsc_x();
			}
			if (mx > 612 && mx < 790 && my > 309 && my < 481 && move[1][1] == 0)
			{
				move[1][1] = 1;
				compmove();
				win_condition_vsc_x();
			}
			if (mx > 794 && mx < 965 && my > 309 && my < 481 && move[1][2] == 0)
			{
				move[1][2] = 1;
				compmove();
				win_condition_vsc_x();
			}
			if (mx > 426 && mx < 609 && my > 136 && my < 300 && move[2][0] == 0)
			{
				move[2][0] = 1;
				compmove();
				win_condition_vsc_x();
			}
			if (mx > 612 && mx < 790 && my > 136 && my < 300 && move[2][1] == 0)
			{
				move[2][1] = 1;
				compmove();
				win_condition_vsc_x();
			}
			if (mx > 794 && mx < 965 && my > 136 && my < 300 && move[2][2] == 0)
			{
				move[2][2] = 1;
				compmove();
				win_condition_vsc_x();
			}
		}

		else if (vscmp_o_idx == 1)
		{
			if (mx > 426 && mx < 609 && my > 484 && my < 667 && move[0][0] == 0)
			{
				
				move[0][0] = -1;
				compmove2();
				win_condition_vsc_o();
			}
			if (mx > 612 && mx < 790 && my > 484 && my < 667 && move[0][1] == 0)
			{
				
				move[0][1] = -1;
				compmove2();
				win_condition_vsc_o();
			}
			if (mx > 426 && mx < 609 && my > 309 && my < 481 && move[1][0] == 0)
			{
				
				move[1][0] = -1;
				compmove2();
				win_condition_vsc_o();
			}
			if (mx > 612 && mx < 790 && my > 309 && my < 481 && move[1][1] == 0)
			{
				
				move[1][1] = -1;
				compmove2();
				win_condition_vsc_o();
			}
			if (mx > 794 && mx < 965 && my > 309 && my < 481 && move[1][2] == 0)
			{
				
				move[1][2] = -1;
				compmove2();
				win_condition_vsc_o();
			}
			if (mx > 426 && mx < 609 && my > 136 && my < 300 && move[2][0] == 0)
			{
				
				move[2][0] = -1;
				compmove2();
				win_condition_vsc_o();
			}
			if (mx > 612 && mx < 790 && my > 136 && my < 300 && move[2][1] == 0)
			{
				
				move[2][1] = -1;
				compmove2();
				win_condition_vsc_o();
			}
			if (mx > 794 && mx < 965 && my > 136 && my < 300 && move[2][2] == 0)
			{
				
				move[2][2] = -1;
				compmove2();
				win_condition_vsc_o();
			}
		}


		else if (vsplayer_idx == 1 && (mx > 875 && mx < 1232) && (my > 420 && my < 510))
		{
			vsplayer_idx = 0;
			in_a_row_3_idx = 1;
			new_game();
		}

		else if (in_a_row_3_idx == 1)
		{
			if (mx > 775 && mx < 958 && my > 484 && my < 667 && move[0][0] == 0)
			{
				move[0][0] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition_for_3();
			}
			if (mx > 961 && mx < 1139 && my > 484 && my < 667 && move[0][1] == 0)
			{
				move[0][1] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition_for_3();
			}
			if (mx > 1143 && mx < 1314 && my > 484 && my < 667 && move[0][2] == 0)
			{
				move[0][2] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition_for_3();
			}
			if (mx > 775 && mx < 958 && my > 309 && my < 481 && move[1][0] == 0)
			{
				move[1][0] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition_for_3();
			}
			if (mx > 961 && mx < 1139 && my > 309 && my < 481 && move[1][1] == 0)
			{
				move[1][1] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition_for_3();
			}
			if (mx > 1143 && mx < 1314 && my > 309 && my < 481 && move[1][2] == 0)
			{
				move[1][2] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition_for_3();
			}
			if (mx > 775 && mx < 958 && my > 136 && my < 300 && move[2][0] == 0)
			{
				move[2][0] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition_for_3();
			}
			if (mx > 961 && mx < 1139 && my > 136 && my < 300 && move[2][1] == 0)
			{
				move[2][1] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition_for_3();
			}
			if (mx > 1143 && mx < 1314 && my > 136 && my < 300 && move[2][2] == 0)
			{
				move[2][2] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition_for_3();
			}
		}

		else if (vsplayer_idx == 1 && (mx > 165 && mx < 520) && (my > 260 && my < 350))
		{
			vsplayer_idx = 0;
			in_a_row_5_idx = 1;
			new_game();
		}

		else if (in_a_row_5_idx == 1)
		{
			if (mx > 775 && mx < 958 && my > 484 && my < 667 && move[0][0] == 0)
			{
				move[0][0] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition_for_5();
			}
			if (mx > 961 && mx < 1139 && my > 484 && my < 667 && move[0][1] == 0)
			{
				move[0][1] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition_for_5();
			}
			if (mx > 1143 && mx < 1314 && my > 484 && my < 667 && move[0][2] == 0)
			{
				move[0][2] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition_for_5();
			}
			if (mx > 775 && mx < 958 && my > 309 && my < 481 && move[1][0] == 0)
			{
				move[1][0] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition_for_5();
			}
			if (mx > 961 && mx < 1139 && my > 309 && my < 481 && move[1][1] == 0)
			{
				move[1][1] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition_for_5();
			}
			if (mx > 1143 && mx < 1314 && my > 309 && my < 481 && move[1][2] == 0)
			{
				move[1][2] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition_for_5();
			}
			if (mx > 775 && mx < 958 && my > 136 && my < 300 && move[2][0] == 0)
			{
				move[2][0] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition_for_5();
			}
			if (mx > 961 && mx < 1139 && my > 136 && my < 300 && move[2][1] == 0)
			{
				move[2][1] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition_for_5();
			}
			if (mx > 1143 && mx < 1314 && my > 136 && my < 300 && move[2][2] == 0)
			{
				move[2][2] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition_for_5();
			}
		}

		else if (vsplayer_idx == 1 && (mx > 875 && mx < 1232) && (my > 260 && my < 350))
		{
			vsplayer_idx = 0;
			golden_3_idx = 1;
			new_game();
		}

		else if (golden_3_idx == 1)
		{
			if (mx > 775 && mx < 958 && my > 484 && my < 667 && move[0][0] == 0)
			{
				move[0][0] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition_for_golden3();
			}
			if (mx > 961 && mx < 1139 && my > 484 && my < 667 && move[0][1] == 0)
			{
				move[0][1] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition_for_golden3();
			}
			if (mx > 1143 && mx < 1314 && my > 484 && my < 667 && move[0][2] == 0)
			{
				move[0][2] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition_for_golden3();
			}
			if (mx > 775 && mx < 958 && my > 309 && my < 481 && move[1][0] == 0)
			{
				move[1][0] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition_for_golden3();
			}
			if (mx > 961 && mx < 1139 && my > 309 && my < 481 && move[1][1] == 0)
			{
				move[1][1] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition_for_golden3();
			}
			if (mx > 1143 && mx < 1314 && my > 309 && my < 481 && move[1][2] == 0)
			{
				move[1][2] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition_for_golden3();
			}
			if (mx > 775 && mx < 958 && my > 136 && my < 300 && move[2][0] == 0)
			{
				move[2][0] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition_for_golden3();
			}
			if (mx > 961 && mx < 1139 && my > 136 && my < 300 && move[2][1] == 0)
			{
				move[2][1] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition_for_golden3();
			}
			if (mx > 1143 && mx < 1314 && my > 136 && my < 300 && move[2][2] == 0)
			{
				move[2][2] = turn;
				turn = (turn == 1) ? -1 : 1;
				win_condition_for_golden3();
			}
		}

		else if (vsplayer_idx == 1 && (mx > 520 && mx < 880) && (my > 80 && my < 167))
		{
			vsplayer_idx = 0;
			startpage_idx = 1;
		}

		else if (startpage_idx == 1 && (mx > 165 && mx < 520) && (my > 260 && my < 350))
		{
			startpage_idx = 0;
			howtoplaypage_idx = 1;
		}
		else if (startpage_idx == 1 && (mx > 875 && mx < 1232) && (my > 420 && my < 510))
		{
			startpage_idx = 0;
			aboutpage_idx = 1;
		}

		else if (aboutpage_idx == 1 && (mx > 520 && mx < 880) && (my > 0 && my < 90))
		{
			aboutpage_idx = 0;
			startpage_idx = 1;
		}

		else if (startpage_idx == 1 && (mx > 875 && mx < 1232) && (my > 260 && my < 350))
		{
			startpage_idx = 0;
			didyouknowpage_idx = 1;
		}
		else if (startpage_idx == 1 && (mx > 520 && mx < 880) && (my > 80 && my < 167))
		{
			exit(0);
		}
		else if (howtoplaypage_idx == 1 && (mx > 520 && mx < 880) && (my > 80 && my < 167))
		{
			howtoplaypage_idx = 0;
			startpage_idx = 1;
		}
		else if (didyouknowpage_idx == 1 && (mx > 165 && mx < 520) && (my > 420 && my < 510))
		{
			didyouknowpage_idx = 0;
			fact1page_idx = 1;
		}
		else if (didyouknowpage_idx == 1 && (mx > 165 && mx < 520) && (my > 260 && my < 350))
		{
			didyouknowpage_idx = 0;
			fact2page_idx = 1;
		}
		else if (didyouknowpage_idx == 1 && (mx > 875 && mx < 1232) && (my > 420 && my < 510))
		{
			didyouknowpage_idx = 0;
			fact3page_idx = 1;
		}
		else if (didyouknowpage_idx == 1 && (mx > 875 && mx < 1232) && (my > 260 && my < 350))
		{
			didyouknowpage_idx = 0;
			fact4page_idx = 1;
		}
		else if (didyouknowpage_idx == 1 && (mx > 520 && mx < 880) && (my > 80 && my < 167))
		{
			didyouknowpage_idx = 0;
			startpage_idx = 1;
		}
		else if ((fact1page_idx == 1 || fact2page_idx == 1 || fact3page_idx == 1 || fact4page_idx == 1) && (mx > 330 && mx < 686) && (my > 80 && my < 170))
		{
			fact1page_idx = 0;
			fact2page_idx = 0;
			fact3page_idx = 0;
			fact4page_idx = 0;
			didyouknowpage_idx = 1;
		}
		else if ((fact1page_idx == 1 || fact2page_idx == 1 || fact3page_idx == 1 || fact4page_idx == 1) && (mx > 715 && mx < 1070) && (my > 80 && my < 170))
		{
			fact1page_idx = 0;
			fact2page_idx = 0;
			fact3page_idx = 0;
			fact4page_idx = 0;
			startpage_idx = 1;
		}

		else if (win_1_idx == 1 && (mx > 414 && mx < 678) && (my > 16 && my < 82))
		{
			win_1_idx = 0;
			startpage_idx = 1;
		}
		else if (win_2_idx == 1 && (mx > 414 && mx < 678) && (my > 16 && my < 82))
		{
			win_2_idx = 0;
			startpage_idx = 1;
		}
		else if (draw_idx == 1 && (mx > 414 && mx < 678) && (my > 16 && my < 82))
		{
			draw_idx = 0;
			startpage_idx = 1;
		}
		
		
		else if (win_1_idx == 1 && (mx > 723 && mx < 985) && (my > 16 && my < 82))
		{
			win_1_idx = 0;
			vsplayer_idx = 1;
		}
		else if (win_2_idx == 1 && (mx > 723 && mx < 985) && (my > 16 && my < 82))
		{
			win_2_idx = 0;
			vsplayer_idx = 1;
		}
		else if (draw_idx == 1 && (mx > 723 && mx < 985) && (my > 16 && my < 82))
		{
			draw_idx = 0;
			vsplayer_idx = 1;
		}


		else if (win_1_for_3_idx == 1 && (mx > 414 && mx < 678) && (my > 16 && my < 82))
		{
			win_1_for_3_idx = 0;
			startpage_idx = 1;
		}
		else if (win_2_for_3_idx == 1 && (mx > 414 && mx < 678) && (my > 16 && my < 82))
		{
			win_2_for_3_idx = 0;
			startpage_idx = 1;
		}
		else if (draw_for_3_idx == 1 && (mx > 414 && mx < 678) && (my > 16 && my < 82))
		{
			draw_for_3_idx = 0;
			startpage_idx = 1;
		}
		
		
		else if (win_1_for_3_idx == 1 && (mx > 723 && mx < 985) && (my > 16 && my < 82))
		{
			win_1_for_3_idx = 0;
			vsplayer_idx = 1;
		}
		else if (win_2_for_3_idx == 1 && (mx > 723 && mx < 985) && (my > 16 && my < 82))
		{
			win_2_for_3_idx = 0;
			vsplayer_idx = 1;
		}
		else if (draw_for_3_idx == 1 && (mx > 723 && mx < 985) && (my > 16 && my < 82))
		{
			draw_for_3_idx = 0;
			vsplayer_idx = 1;
		}

		else if (win_1_for_5_idx == 1 && (mx > 414 && mx < 678) && (my > 16 && my < 82))
		{
			win_1_for_5_idx = 0;
			startpage_idx = 1;
		}
		else if (win_2_for_5_idx == 1 && (mx > 414 && mx < 678) && (my > 16 && my < 82))
		{
			win_2_for_5_idx = 0;
			startpage_idx = 1;
		}
		else if (draw_for_5_idx == 1 && (mx > 414 && mx < 678) && (my > 16 && my < 82))
		{
			draw_for_5_idx = 0;
			startpage_idx = 1;
		}
		
		
		else if (win_1_for_5_idx == 1 && (mx > 723 && mx < 985) && (my > 16 && my < 82))
		{
			win_1_for_5_idx = 0;
			vsplayer_idx = 1;
		}
		else if (win_2_for_5_idx == 1 && (mx > 723 && mx < 985) && (my > 16 && my < 82))
		{
			win_2_for_5_idx = 0;
			vsplayer_idx = 1;
		}
		else if (draw_for_5_idx == 1 && (mx > 723 && mx < 985) && (my > 16 && my < 82))
		{
			draw_for_5_idx = 0;
			vsplayer_idx = 1;
		}

		else if (winvsc_idx == 1 && (mx > 414 && mx < 678) && (my > 16 && my < 82))
		{
			winvsc_idx = 0;
			startpage_idx = 1;
			new_game();
		}
		else if (losevsc_idx == 1 && (mx > 414 && mx < 678) && (my > 16 && my < 82))
		{
			losevsc_idx = 0;
			startpage_idx = 1;
			new_game();
		}
		else if (drawvsc_idx == 1 && (mx > 414 && mx < 678) && (my > 16 && my < 82))
		{
			drawvsc_idx = 0;
			startpage_idx = 1;
			new_game();
		}
		
		
		else if (winvsc_idx == 1 && (mx > 723 && mx < 985) && (my > 16 && my < 82))
		{
			winvsc_idx = 0;
			singlevsc_idx = 1;
			new_game();
		}
		else if (losevsc_idx == 1 && (mx > 723 && mx < 985) && (my > 16 && my < 82))
		{
			losevsc_idx = 0;
			singlevsc_idx = 1;
			new_game();
		}
		else if (drawvsc_idx == 1 && (mx > 723 && mx < 985) && (my > 16 && my < 82))
		{
			drawvsc_idx = 0;
			singlevsc_idx = 1;
			new_game();
		}

		// place your codes here
		printf("x = %d, y= %d\n", mx, my);
		// x += 10;
		// y += 10;
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		x -= 10;
		y -= 10;
	}
}

void iKeyboard(unsigned char key)
{
	if (key == '\r')
	{
		if (homepage_idx == 1)
		{
			homepage_idx = 0;
			startpage_idx = 1;
			//startidx=0;
		}
	}
}

void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_END)
	{
		exit(0);
	}
}

void homepage()
{
	iShowBMP(0, 0, home[homeidx]);
}

void startpage()
{
	iShowBMP(0, 0, "pic//2.bmp");
	//iShowBMP(0, 0, start[startidx]);
}

void playpage()
{
	iShowBMP(0, 0, "pic//Play.bmp");
}

void howtoplaypage()
{
	iShowBMP(0, 0, "pic//how_to_play.bmp");
}
void aboutpage()
{
	iShowBMP(0, 0, "pic//credit.bmp");
}
void didyouknowpage()
{
	iShowBMP(0, 0, "pic//did_you_know.bmp");
}
void fact1page()
{
	iShowBMP(0, 0, "pic//Fact_1.bmp");
}
void fact2page()
{
	iShowBMP(0, 0, "pic//Fact_2.bmp");
}
void fact3page()
{
	iShowBMP(0, 0, "pic//Fact_3.bmp");
}
void fact4page()
{
	iShowBMP(0, 0, "pic//Fact_4.bmp");
}
void win_1()
{
	iShowBMP(0, 0, "pic//win_1.bmp");
	if (move[0][0] == 1)
			iShowBMP2(426, 484, "pic//cross.bmp", 16777215);
		if (move[0][1] == 1)
			iShowBMP2(620, 484, "pic//cross.bmp", 16777215);
		if (move[0][2] == 1)
			iShowBMP2(805, 484, "pic//cross.bmp", 16777215);
		if (move[1][0] == 1)
			iShowBMP2(426, 309, "pic//cross.bmp", 16777215);
		if (move[1][1] == 1)
			iShowBMP2(620, 309, "pic//cross.bmp", 16777215);
		if (move[1][2] == 1)
			iShowBMP2(805, 309, "pic//cross.bmp", 16777215);
		if (move[2][0] == 1)
			iShowBMP2(426, 136, "pic//cross.bmp", 16777215);
		if (move[2][1] == 1)
			iShowBMP2(620, 136, "pic//cross.bmp", 16777215);
		if (move[2][2] == 1)
			iShowBMP2(805, 136, "pic//cross.bmp", 16777215);

		if (move[0][0] == -1)
			iShowBMP2(426, 484, "pic//dot.bmp", 16777215);
		if (move[0][1] == -1)
			iShowBMP2(620, 484, "pic//dot.bmp", 16777215);
		if (move[0][2] == -1)
			iShowBMP2(805, 484, "pic//dot.bmp", 16777215);
		if (move[1][0] == -1)
			iShowBMP2(426, 309, "pic//dot.bmp", 16777215);
		if (move[1][1] == -1)
			iShowBMP2(620, 309, "pic//dot.bmp", 16777215);
		if (move[1][2] == -1)
			iShowBMP2(805, 309, "pic//dot.bmp", 16777215);
		if (move[2][0] == -1)
			iShowBMP2(426, 136, "pic//dot.bmp", 16777215);
		if (move[2][1] == -1)
			iShowBMP2(620, 136, "pic//dot.bmp", 16777215);
		if (move[2][2] == -1)
			iShowBMP2(805, 136, "pic//dot.bmp", 16777215);
}
void win_2()
{
	iShowBMP(0, 0, "pic//win_2.bmp");
		if (move[0][0] == 1)
			iShowBMP2(426, 484, "pic//cross.bmp", 16777215);
		if (move[0][1] == 1)
			iShowBMP2(620, 484, "pic//cross.bmp", 16777215);
		if (move[0][2] == 1)
			iShowBMP2(805, 484, "pic//cross.bmp", 16777215);
		if (move[1][0] == 1)
			iShowBMP2(426, 309, "pic//cross.bmp", 16777215);
		if (move[1][1] == 1)
			iShowBMP2(620, 309, "pic//cross.bmp", 16777215);
		if (move[1][2] == 1)
			iShowBMP2(805, 309, "pic//cross.bmp", 16777215);
		if (move[2][0] == 1)
			iShowBMP2(426, 136, "pic//cross.bmp", 16777215);
		if (move[2][1] == 1)
			iShowBMP2(620, 136, "pic//cross.bmp", 16777215);
		if (move[2][2] == 1)
			iShowBMP2(805, 136, "pic//cross.bmp", 16777215);

		if (move[0][0] == -1)
			iShowBMP2(426, 484, "pic//dot.bmp", 16777215);
		if (move[0][1] == -1)
			iShowBMP2(620, 484, "pic//dot.bmp", 16777215);
		if (move[0][2] == -1)
			iShowBMP2(805, 484, "pic//dot.bmp", 16777215);
		if (move[1][0] == -1)
			iShowBMP2(426, 309, "pic//dot.bmp", 16777215);
		if (move[1][1] == -1)
			iShowBMP2(620, 309, "pic//dot.bmp", 16777215);
		if (move[1][2] == -1)
			iShowBMP2(805, 309, "pic//dot.bmp", 16777215);
		if (move[2][0] == -1)
			iShowBMP2(426, 136, "pic//dot.bmp", 16777215);
		if (move[2][1] == -1)
			iShowBMP2(620, 136, "pic//dot.bmp", 16777215);
		if (move[2][2] == -1)
			iShowBMP2(805, 136, "pic//dot.bmp", 16777215);
}
void draw()
{
	iShowBMP(0, 0, "pic//draw.bmp");
		if (move[0][0] == 1)
			iShowBMP2(426, 484, "pic//cross.bmp", 16777215);
		if (move[0][1] == 1)
			iShowBMP2(620, 484, "pic//cross.bmp", 16777215);
		if (move[0][2] == 1)
			iShowBMP2(805, 484, "pic//cross.bmp", 16777215);
		if (move[1][0] == 1)
			iShowBMP2(426, 309, "pic//cross.bmp", 16777215);
		if (move[1][1] == 1)
			iShowBMP2(620, 309, "pic//cross.bmp", 16777215);
		if (move[1][2] == 1)
			iShowBMP2(805, 309, "pic//cross.bmp", 16777215);
		if (move[2][0] == 1)
			iShowBMP2(426, 136, "pic//cross.bmp", 16777215);
		if (move[2][1] == 1)
			iShowBMP2(620, 136, "pic//cross.bmp", 16777215);
		if (move[2][2] == 1)
			iShowBMP2(805, 136, "pic//cross.bmp", 16777215);

		if (move[0][0] == -1)
			iShowBMP2(426, 484, "pic//dot.bmp", 16777215);
		if (move[0][1] == -1)
			iShowBMP2(620, 484, "pic//dot.bmp", 16777215);
		if (move[0][2] == -1)
			iShowBMP2(805, 484, "pic//dot.bmp", 16777215);
		if (move[1][0] == -1)
			iShowBMP2(426, 309, "pic//dot.bmp", 16777215);
		if (move[1][1] == -1)
			iShowBMP2(620, 309, "pic//dot.bmp", 16777215);
		if (move[1][2] == -1)
			iShowBMP2(805, 309, "pic//dot.bmp", 16777215);
		if (move[2][0] == -1)
			iShowBMP2(426, 136, "pic//dot.bmp", 16777215);
		if (move[2][1] == -1)
			iShowBMP2(620, 136, "pic//dot.bmp", 16777215);
		if (move[2][2] == -1)
			iShowBMP2(805, 136, "pic//dot.bmp", 16777215);
}
void vsplayerpage()
{
	iShowBMP(0, 0, "pic//VSP.bmp");
}

void single_play()
{
	if (turn==1) iShowBMP(0, 0, "pic//Gamebox_1.bmp");
	if (turn==-1) iShowBMP(0, 0, "pic//Gamebox_2.bmp");
}

void vscmp_x()
{
	iShowBMP (0,0,"pic//vscmp_x.bmp");
}

void vscmp_o()
{
	iShowBMP (0,0,"pic//vscmp_o.bmp");
}

void compmove()
{

	if (move[0][2]==0 && move[0][2]!=1) move[0][2] = -1;
	else if (move[2][2]==0 && move[2][2]!=1) move[2][2] = -1;
	else if (move[1][1]==0 && move[1][1]!=1) move[1][1] = -1;
	else if (move[0][0]==0 && move[0][0]!=1) move[0][0] = -1;
	else if (move[2][0]==0 && move[2][0]!=1) move[2][0] = -1;
	else if (move[0][1]==0 && move[0][1]!=1) move[0][1] = -1;
	else if (move[1][0]==0 && move[1][0]!=1) move[1][0] = -1;
	else if (move[1][2]==0 && move[1][2]!=1) move[1][2] = -1;
	else if (move[2][1]==0 && move[2][1]!=1) move[2][1] = -1;
	
}

void compmove2()
{
	if (move[0][1]==0 && move[0][1]!=-1) move[0][1] = 1;
	else if (move[1][1]==0 && move[1][1]!=-1) move[1][1] = 1;
	else if (move[2][0]==0 && move[2][0]!=-1) move[2][0] = 1; 
	else if (move[2][2]==0 && move[2][2]!=-1) move[2][2] = 1;
	else if (move[1][0]==0 && move[1][0]!=-1) move[1][0] = 1;
	else if (move[0][0]==0 && move[0][0]!=-1) move[0][0] = 1;
	else if (move[1][2]==0 && move[1][2]!=-1) move[1][2] = 1;
	else if (move[2][1]==0 && move[2][1]!=-1) move[2][1] = 1;
	
}

void in_a_row_3()
{
	if (player1win == 0 && player2win == 0) 
	{
		if (turn==1) iShowBMP(0, 0, "pic//3_0_0_1.bmp");
		if (turn==-1) iShowBMP(0, 0, "pic//3_0_0_2.bmp");
	}
	else if (player1win == 1 && player2win == 0)
	{
		if (turn==1) iShowBMP(0, 0, "pic//3_1_0_1.bmp");
		if (turn==-1) iShowBMP(0, 0, "pic//3_1_0_2.bmp");
	}
	else if (player1win == 0 && player2win == 1)
	{
		if (turn==1) iShowBMP(0, 0, "pic//3_0_1_1.bmp");
		if (turn==-1) iShowBMP(0, 0, "pic//3_0_1_2.bmp");
	}
	else if (player1win == 1 && player2win == 1) 
	{
		if (turn==1) iShowBMP(0, 0, "pic//3_1_1_1.bmp");
		if (turn==-1) iShowBMP(0, 0, "pic//3_1_1_2.bmp");
	}

}

void in_a_row_5()
{
	if (player1win == 0 && player2win == 0) 
	{
		if (turn==1) iShowBMP(0, 0, "pic//5_0_0_1.bmp");
		if (turn==-1) iShowBMP(0, 0, "pic//5_0_0_2.bmp");
	}
	else if (player1win == 1 && player2win == 0)
	{
		if (turn==1) iShowBMP(0, 0, "pic//5_1_0_1.bmp");
		if (turn==-1) iShowBMP(0, 0, "pic//5_1_0_2.bmp");
	}
	else if (player1win == 2 && player2win == 0)
	{
		if (turn==1) iShowBMP(0, 0, "pic//5_2_0_1.bmp");
		if (turn==-1) iShowBMP(0, 0, "pic//5_2_0_2.bmp");
	}
	else if (player1win == 0 && player2win == 1) 
	{
		if (turn==1) iShowBMP(0, 0, "pic//5_0_1_1.bmp");
		if (turn==-1) iShowBMP(0, 0, "pic//5_0_1_2.bmp");
	}
	else if (player1win == 1 && player2win == 1)
	{
		if (turn==1) iShowBMP(0, 0, "pic//5_1_1_1.bmp");
		if (turn==-1) iShowBMP(0, 0, "pic//5_1_1_2.bmp");
	}
	else if (player1win == 2 && player2win == 1)
	{
		if (turn==1) iShowBMP(0, 0, "pic//5_2_1_1.bmp");
		if (turn==-1) iShowBMP(0, 0, "pic//5_2_1_2.bmp");
	}
	else if (player1win == 0 && player2win == 2) 
	{
		if (turn==1) iShowBMP(0, 0, "pic//5_0_2_1.bmp");
		if (turn==-1) iShowBMP(0, 0, "pic//5_0_2_2.bmp");
	}
	else if (player1win == 1 && player2win == 2)
	{
		if (turn==1) iShowBMP(0, 0, "pic//5_1_2_1.bmp");
		if (turn==-1) iShowBMP(0, 0, "pic//5_1_2_2.bmp");
	}
	else if (player1win == 2 && player2win == 2)
	{
		if (turn==1) iShowBMP(0, 0, "pic//5_2_2_1.bmp");
		if (turn==-1) iShowBMP(0, 0, "pic//5_2_2_2.bmp");
	}


}

void golden_3()
{
	if (player1win == 0 && player2win == 0) 
	{
		if (turn==1) iShowBMP(0, 0, "pic//5_0_0_1.bmp");
		if (turn==-1) iShowBMP(0, 0, "pic//5_0_0_2.bmp");
	}
	else if (player1win == 1 && player2win == 0)
	{
		if (turn==1) iShowBMP(0, 0, "pic//5_1_0_1.bmp");
		if (turn==-1) iShowBMP(0, 0, "pic//5_1_0_2.bmp");
	}
	else if (player1win == 2 && player2win == 0)
	{
		if (turn==1) iShowBMP(0, 0, "pic//5_2_0_1.bmp");
		if (turn==-1) iShowBMP(0, 0, "pic//5_2_0_2.bmp");
	}
	else if (player1win == 0 && player2win == 1) 
	{
		if (turn==1) iShowBMP(0, 0, "pic//5_0_1_1.bmp");
		if (turn==-1) iShowBMP(0, 0, "pic//5_0_1_2.bmp");
	}
	else if (player1win == 1 && player2win == 1)
	{
		if (turn==1) iShowBMP(0, 0, "pic//5_1_1_1.bmp");
		if (turn==-1) iShowBMP(0, 0, "pic//5_1_1_2.bmp");
	}
	else if (player1win == 2 && player2win == 1)
	{
		if (turn==1) iShowBMP(0, 0, "pic//5_2_1_1.bmp");
		if (turn==-1) iShowBMP(0, 0, "pic//5_2_1_2.bmp");
	}
	else if (player1win == 0 && player2win == 2) 
	{
		if (turn==1) iShowBMP(0, 0, "pic//5_0_2_1.bmp");
		if (turn==-1) iShowBMP(0, 0, "pic//5_0_2_2.bmp");
	}
	else if (player1win == 1 && player2win == 2)
	{
		if (turn==1) iShowBMP(0, 0, "pic//5_1_2_1.bmp");
		if (turn==-1) iShowBMP(0, 0, "pic//5_1_2_2.bmp");
	}
	else if (player1win == 2 && player2win == 2)
	{
		if (turn==1) iShowBMP(0, 0, "pic//5_2_2_1.bmp");
		if (turn==-1) iShowBMP(0, 0, "pic//5_2_2_2.bmp");
	}

}

void win_condition()
{
	if (move[0][0] == move[0][1] && move[0][0] == move[0][2])
	{

		if (move[0][0] == 1)
		{
			singleplay_idx = 0;
			win_1_idx = 1;
		}
		if (move[0][0] == -1)
		{
			singleplay_idx = 0;
			win_2_idx = 1;
		}
	}
	else if (move[1][0] == move[1][1] && move[1][0] == move[1][2])
	{
		if (move[1][0] == 1)
		{
			singleplay_idx = 0;
			win_1_idx = 1;
		}
		if (move[1][0] == -1)
		{
			singleplay_idx = 0;
			win_2_idx = 1;
		}
	}
	else if (move[2][0] == move[2][1] && move[2][0] == move[2][2])
	{
		if (move[2][0] == 1)
		{
			singleplay_idx = 0;
			win_1_idx = 1;
		}
		if (move[2][0] == -1)
		{
			singleplay_idx = 0;
			win_2_idx = 1;
		}
	}
	else if (move[0][0] == move[1][0] && move[0][0] == move[2][0])
	{
		if (move[0][0] == 1)
		{
			singleplay_idx = 0;
			win_1_idx = 1;
		}
		if (move[0][0] == -1)
		{
			singleplay_idx = 0;
			win_2_idx = 1;
		}
	}
	else if (move[0][1] == move[1][1] && move[0][1] == move[2][1])
	{
		if (move[0][1] == 1)
		{
			singleplay_idx = 0;
			win_1_idx = 1;
		}
		if (move[0][1] == -1)
		{
			singleplay_idx = 0;
			win_2_idx = 1;
		}
	}
	else if (move[0][2] == move[1][2] && move[0][2] == move[2][2])
	{
		if (move[0][2] == 1)
		{
			singleplay_idx = 0;
			win_1_idx = 1;
		}
		if (move[0][2] == -1)
		{
			singleplay_idx = 0;
			win_2_idx = 1;
		}
	}
	else if (move[0][0] == move[1][1] && move[0][0] == move[2][2])
	{
		if (move[0][0] == 1)
		{
			singleplay_idx = 0;
			win_1_idx = 1;
		}
		if (move[0][0] == -1)
		{
			singleplay_idx = 0;
			win_2_idx = 1;
		}
	}
	else if (move[0][2] == move[1][1] && move[0][2] == move[2][0])
	{
		if (move[0][2] == 1)
		{
			singleplay_idx = 0;
			win_1_idx = 1;
		}
		if (move[0][2] == -1)
		{
			singleplay_idx = 0;
			win_2_idx = 1;
		}
	}
	else if ((move[0][0] == 1 || move[0][0] == -1) && (move[0][1] == 1 || move[0][1] == -1) && (move[0][2] == 1 || move[0][2] == -1) && (move[1][0] == 1 || move[1][0] == -1) && (move[1][1] == 1 || move[1][1] == -1) && (move[1][2] == 1 || move[1][2] == -1) && (move[2][0] == 1 || move[2][0] == -1) && (move[2][1] == 1 || move[2][1] == -1) && (move[2][2] == 1 || move[2][2] == -1))
	{
		{
			singleplay_idx = 0;
			draw_idx = 1;
		}
	}
}

void win_condition_vsc_x()
{
		if (move[0][0] == move[0][1] && move[0][0] == move[0][2])
	{

		if (move[0][0] == 1)
		{
			vscmp_x_idx = 0;
			winvsc_idx = 1;
		}
		if (move[0][0] == -1)
		{
			vscmp_x_idx = 0;
			losevsc_idx = 1;
		}
	}
	else if (move[1][0] == move[1][1] && move[1][0] == move[1][2])
	{
		if (move[1][0] == 1)
		{
			vscmp_x_idx = 0;
			winvsc_idx = 1;
		}
		if (move[1][0] == -1)
		{
			vscmp_x_idx = 0;
			losevsc_idx = 1;
		}
	}
	else if (move[2][0] == move[2][1] && move[2][0] == move[2][2])
	{
		if (move[2][0] == 1)
		{
			vscmp_x_idx = 0;
			winvsc_idx = 1;
		}
		if (move[2][0] == -1)
		{
			vscmp_x_idx = 0;
			losevsc_idx = 1;
		}
	}
	else if (move[0][0] == move[1][0] && move[0][0] == move[2][0])
	{
		if (move[0][0] == 1)
		{
			vscmp_x_idx = 0;
			winvsc_idx = 1;
		}
		if (move[0][0] == -1)
		{
			vscmp_x_idx = 0;
			losevsc_idx = 1;
		}
	}
	else if (move[0][1] == move[1][1] && move[0][1] == move[2][1])
	{
		if (move[0][1] == 1)
		{
			vscmp_x_idx = 0;
			winvsc_idx = 1;
		}
		if (move[0][1] == -1)
		{
			vscmp_x_idx = 0;
			losevsc_idx = 1;
		}
	}
	else if (move[0][2] == move[1][2] && move[0][2] == move[2][2])
	{
		if (move[0][2] == 1)
		{
			vscmp_x_idx = 0;
			winvsc_idx = 1;
		}
		if (move[0][2] == -1)
		{
			vscmp_x_idx = 0;
			losevsc_idx = 1;
		}
	}
	else if (move[0][0] == move[1][1] && move[0][0] == move[2][2])
	{
		if (move[0][0] == 1)
		{
			vscmp_x_idx = 0;
			winvsc_idx = 1;
		}
		if (move[0][0] == -1)
		{
			vscmp_x_idx = 0;
			losevsc_idx = 1;
		}
	}
	else if (move[0][2] == move[1][1] && move[0][2] == move[2][0])
	{
		if (move[0][2] == 1)
		{
			vscmp_x_idx = 0;
			winvsc_idx = 1;
		}
		if (move[0][2] == -1)
		{
			vscmp_x_idx = 0;
			losevsc_idx = 1;
		}
	}
	else if ((move[0][0] == 1 || move[0][0] == -1) && (move[0][1] == 1 || move[0][1] == -1) && (move[0][2] == 1 || move[0][2] == -1) && (move[1][0] == 1 || move[1][0] == -1) && (move[1][1] == 1 || move[1][1] == -1) && (move[1][2] == 1 || move[1][2] == -1) && (move[2][0] == 1 || move[2][0] == -1) && (move[2][1] == 1 || move[2][1] == -1) && (move[2][2] == 1 || move[2][2] == -1))
	{
		{
			vscmp_x_idx = 0;
			drawvsc_idx = 1;
		}
	}

}

void win_condition_vsc_o()
{
		if (move[0][0] == move[0][1] && move[0][0] == move[0][2])
	{

		if (move[0][0] == 1)
		{
			vscmp_o_idx = 0;
			losevsc_idx = 1;
		}
		if (move[0][0] == -1)
		{
			vscmp_o_idx = 0;
			winvsc_idx = 1;
		}
	}
	else if (move[1][0] == move[1][1] && move[1][0] == move[1][2])
	{
		if (move[1][0] == 1)
		{
			vscmp_o_idx = 0;
			losevsc_idx = 1;
		}
		if (move[1][0] == -1)
		{
			vscmp_o_idx = 0;
			winvsc_idx = 1;
		}
	}
	else if (move[2][0] == move[2][1] && move[2][0] == move[2][2])
	{
		if (move[2][0] == 1)
		{
			vscmp_o_idx = 0;
			losevsc_idx = 1;
		}
		if (move[2][0] == -1)
		{
			vscmp_o_idx = 0;
			winvsc_idx = 1;
		}
	}
	else if (move[0][0] == move[1][0] && move[0][0] == move[2][0])
	{
		if (move[0][0] == 1)
		{
			vscmp_o_idx = 0;
			losevsc_idx = 1;
		}
		if (move[0][0] == -1)
		{
			vscmp_o_idx = 0;
			winvsc_idx = 1;
		}
	}
	else if (move[0][1] == move[1][1] && move[0][1] == move[2][1])
	{
		if (move[0][1] == 1)
		{
			vscmp_o_idx = 0;
			losevsc_idx = 1;
		}
		if (move[0][1] == -1)
		{
			vscmp_o_idx = 0;
			winvsc_idx = 1;
		}
	}
	else if (move[0][2] == move[1][2] && move[0][2] == move[2][2])
	{
		if (move[0][2] == 1)
		{
			vscmp_o_idx = 0;
			losevsc_idx = 1;
		}
		if (move[0][2] == -1)
		{
			vscmp_o_idx = 0;
			winvsc_idx = 1;
		}
	}
	else if (move[0][0] == move[1][1] && move[0][0] == move[2][2])
	{
		if (move[0][0] == 1)
		{
			vscmp_o_idx = 0;
			losevsc_idx = 1;
		}
		if (move[0][0] == -1)
		{
			vscmp_o_idx = 0;
			winvsc_idx = 1;
		}
	}
	else if (move[0][2] == move[1][1] && move[0][2] == move[2][0])
	{
		if (move[0][2] == 1)
		{
			vscmp_o_idx = 0;
			losevsc_idx = 1;
		}
		if (move[0][2] == -1)
		{
			vscmp_o_idx = 0;
			winvsc_idx = 1;
		}
	}
	else if ((move[0][0] == 1 || move[0][0] == -1) && (move[0][1] == 1 || move[0][1] == -1) && (move[0][2] == 1 || move[0][2] == -1) && (move[1][0] == 1 || move[1][0] == -1) && (move[1][1] == 1 || move[1][1] == -1) && (move[1][2] == 1 || move[1][2] == -1) && (move[2][0] == 1 || move[2][0] == -1) && (move[2][1] == 1 || move[2][1] == -1) && (move[2][2] == 1 || move[2][2] == -1))
	{
		{
			vscmp_o_idx = 0;
			drawvsc_idx = 1;
		}
	}

}

void win_condition_for_3()
{

	if (move[0][0] == move[0][1] && move[0][0] == move[0][2])
	{

		if (move[0][0] == 1)
		{

			player1win++;
			game_count_func();
		}
		if (move[0][0] == -1)

		{

			player2win++;
			game_count_func();
		}
	}
	else if (move[1][0] == move[1][1] && move[1][0] == move[1][2])
	{

		if (move[1][0] == 1)
		{
			player1win++;
			game_count_func();
		}
		if (move[1][0] == -1)
		{
			player2win++;
			game_count_func();
		}
	}
	else if (move[2][0] == move[2][1] && move[2][0] == move[2][2])
	{

		if (move[2][0] == 1)
		{
			player1win++;
			game_count_func();
		}
		if (move[2][0] == -1)
		{
			player2win++;
			game_count_func();
		}
	}
	else if (move[0][0] == move[1][0] && move[0][0] == move[2][0])
	{

		if (move[0][0] == 1)
		{
			player1win++;
			game_count_func();
		}
		if (move[0][0] == -1)
		{
			player2win++;
			game_count_func();
		}
	}
	else if (move[0][1] == move[1][1] && move[0][1] == move[2][1])
	{

		if (move[0][1] == 1)
		{
			player1win++;
			game_count_func();
		}
		if (move[0][1] == -1)
		{
			player2win++;
			game_count_func();
		}
	}
	else if (move[0][2] == move[1][2] && move[0][2] == move[2][2])
	{

		if (move[0][2] == 1)
		{
			player1win++;
			game_count_func();
		}
		if (move[0][2] == -1)
		{
			player2win++;
			game_count_func();
		}
	}
	else if (move[0][0] == move[1][1] && move[0][0] == move[2][2])
	{

		if (move[0][0] == 1)
		{
			player1win++;
			game_count_func();
		}
		if (move[0][0] == -1)
		{
			player2win++;
			game_count_func();
		}
	}
	else if (move[0][2] == move[1][1] && move[0][2] == move[2][0])
	{
		if (move[0][2] == 1)
		{
			player1win++;
			game_count_func();
		}
		if (move[0][2] == -1)
		{
			player2win++;
			game_count_func();
		}
	}
	else if ((move[0][0] == 1 || move[0][0] == -1) && (move[0][1] == 1 || move[0][1] == -1) && (move[0][2] == 1 || move[0][2] == -1) && (move[1][0] == 1 || move[1][0] == -1) && (move[1][1] == 1 || move[1][1] == -1) && (move[1][2] == 1 || move[1][2] == -1) && (move[2][0] == 1 || move[2][0] == -1) && (move[2][1] == 1 || move[2][1] == -1) && (move[2][2] == 1 || move[2][2] == -1))
	{
		player1win = player1win + 0;
		player2win = player2win + 0;
		game_count_func();
	}
}

void win_condition_for_5()
{

	if (move[0][0] == move[0][1] && move[0][0] == move[0][2])
	{

		if (move[0][0] == 1)
		{

			player1win++;
			game_count_func_5();
		}
		if (move[0][0] == -1)

		{

			player2win++;
			game_count_func_5();
		}
	}
	else if (move[1][0] == move[1][1] && move[1][0] == move[1][2])
	{

		if (move[1][0] == 1)
		{
			player1win++;
			game_count_func_5();
		}
		if (move[1][0] == -1)
		{
			player2win++;
			game_count_func_5();
		}
	}
	else if (move[2][0] == move[2][1] && move[2][0] == move[2][2])
	{

		if (move[2][0] == 1)
		{
			player1win++;
			game_count_func_5();
		}
		if (move[2][0] == -1)
		{
			player2win++;
			game_count_func_5();
		}
	}
	else if (move[0][0] == move[1][0] && move[0][0] == move[2][0])
	{

		if (move[0][0] == 1)
		{
			player1win++;
			game_count_func_5();
		}
		if (move[0][0] == -1)
		{
			player2win++;
			game_count_func_5();
		}
	}
	else if (move[0][1] == move[1][1] && move[0][1] == move[2][1])
	{

		if (move[0][1] == 1)
		{
			player1win++;
			game_count_func_5();
		}
		if (move[0][1] == -1)
		{
			player2win++;
			game_count_func_5();
		}
	}
	else if (move[0][2] == move[1][2] && move[0][2] == move[2][2])
	{

		if (move[0][2] == 1)
		{
			player1win++;
			game_count_func_5();
		}
		if (move[0][2] == -1)
		{
			player2win++;
			game_count_func_5();
		}
	}
	else if (move[0][0] == move[1][1] && move[0][0] == move[2][2])
	{

		if (move[0][0] == 1)
		{
			player1win++;
			game_count_func_5();
		}
		if (move[0][0] == -1)
		{
			player2win++;
			game_count_func_5();
		}
	}
	else if (move[0][2] == move[1][1] && move[0][2] == move[2][0])
	{
		if (move[0][2] == 1)
		{
			player1win++;
			game_count_func_5();
		}
		if (move[0][2] == -1)
		{
			player2win++;
			game_count_func_5();
		}
	}
	else if ((move[0][0] == 1 || move[0][0] == -1) && (move[0][1] == 1 || move[0][1] == -1) && (move[0][2] == 1 || move[0][2] == -1) && (move[1][0] == 1 || move[1][0] == -1) && (move[1][1] == 1 || move[1][1] == -1) && (move[1][2] == 1 || move[1][2] == -1) && (move[2][0] == 1 || move[2][0] == -1) && (move[2][1] == 1 || move[2][1] == -1) && (move[2][2] == 1 || move[2][2] == -1))
	{
		player1win = player1win + 0;
		player2win = player2win + 0;
		game_count_func_5();
	}
}

void win_condition_for_golden3()
{

	if (move[0][0] == move[0][1] && move[0][0] == move[0][2])
	{

		if (move[0][0] == 1)
		{
			player1win++;
			game_count_func_golden3();
			new_game();
		}
		if (move[0][0] == -1)

		{

			player2win++;
			game_count_func_golden3();
			new_game();
		}
	}
	else if (move[1][0] == move[1][1] && move[1][0] == move[1][2])
	{

		if (move[1][0] == 1)
		{
			player1win++;
			game_count_func_golden3();
			new_game();
		}
		if (move[1][0] == -1)
		{
			player2win++;
			game_count_func_golden3();
			new_game();
		}
	}
	else if (move[2][0] == move[2][1] && move[2][0] == move[2][2])
	{

		if (move[2][0] == 1)
		{
			player1win++;
			game_count_func_golden3();
			new_game();
		}
		if (move[2][0] == -1)
		{
			player2win++;
			game_count_func_golden3();
			new_game();
		}
	}
	else if (move[0][0] == move[1][0] && move[0][0] == move[2][0])
	{

		if (move[0][0] == 1)
		{
			player1win++;
			game_count_func_golden3();
			new_game();
		}
		if (move[0][0] == -1)
		{
			player2win++;
			game_count_func_golden3();
			new_game();
		}
	}
	else if (move[0][1] == move[1][1] && move[0][1] == move[2][1])
	{

		if (move[0][1] == 1)
		{
			player1win++;
			game_count_func_golden3();
			new_game();
		}
		if (move[0][1] == -1)
		{
			player2win++;
			game_count_func_golden3();
			new_game();
		}
	}
	else if (move[0][2] == move[1][2] && move[0][2] == move[2][2])
	{

		if (move[0][2] == 1)
		{
			player1win++;
			game_count_func_golden3();
			new_game();
		}
		if (move[0][2] == -1)
		{
			player2win++;
			game_count_func_golden3();
			new_game();
		}
	}
	else if (move[0][0] == move[1][1] && move[0][0] == move[2][2])
	{

		if (move[0][0] == 1)
		{
			player1win++;
			game_count_func_golden3();
			new_game();
		}
		if (move[0][0] == -1)
		{
			player2win++;
			game_count_func_golden3();
			new_game();
		}
	}
	else if (move[0][2] == move[1][1] && move[0][2] == move[2][0])
	{
		if (move[0][2] == 1)
		{
			player1win++;
			game_count_func_golden3();
			new_game();
		}
		if (move[0][2] == -1)
		{
			player2win++;
			game_count_func_golden3();
			new_game();
		}
	}
	else if ((move[0][0] == 1 || move[0][0] == -1) && (move[0][1] == 1 || move[0][1] == -1) && (move[0][2] == 1 || move[0][2] == -1) && (move[1][0] == 1 || move[1][0] == -1) && (move[1][1] == 1 || move[1][1] == -1) && (move[1][2] == 1 || move[1][2] == -1) && (move[2][0] == 1 || move[2][0] == -1) && (move[2][1] == 1 || move[2][1] == -1) && (move[2][2] == 1 || move[2][2] == -1))
	{
		player1win = player1win + 0;
		player2win = player2win + 0;
		game_count_func_golden3();
		new_game();
	}

}

void game_count_func()
{
	if (game_count <3)
	{
	
		if (player1win == 2)
		{
			in_a_row_3_idx = 0;
			player1win=0;
			player2win=0;
			win_1_for_3_idx = 1;
			game_count=0;
		}

		else if (player2win == 2)
		{
			in_a_row_3_idx = 0;
			player1win=0;
			player2win=0;
			win_2_for_3_idx = 1;
			game_count=0;
		}

		else {
			game_count++;
			new_game();
		}

	}

	printf ("%d", game_count);

	if (game_count == 3)
	{
		if (player1win == player2win)
		{
			in_a_row_3_idx = 0;
			player1win=0;
			player2win=0;
			draw_for_3_idx = 1;
			game_count=0;
		}

		else if (player1win > player2win)
		{
			in_a_row_3_idx = 0;
			player1win=0;
			player2win=0;
			win_1_for_3_idx = 1;
			game_count=0;
		}

		else if (player1win < player2win)
		{
			in_a_row_3_idx = 0;
			player1win=0;
			player2win=0;
			win_2_for_3_idx = 1;
			game_count=0;
		}
	}
}

void game_count_func_5()
{
	if (game_count <5)
	{
	
		if (player1win == 3)
		{
			in_a_row_5_idx = 0;
			player1win=0;
			player2win=0;
			win_1_for_5_idx = 1;
			game_count=0;
		}

		else if (player2win == 3)
		{
			in_a_row_5_idx = 0;
			player1win=0;
			player2win=0;
			win_2_for_5_idx = 1;
			game_count=0;
		}

		else {
			game_count++;
			new_game();
		}

	}

	printf ("%d", game_count);

	if (game_count == 5)
	{
		if (player1win == player2win)
		{
			in_a_row_5_idx = 0;
			player1win=0;
			player2win=0;
			draw_for_5_idx = 1;
			game_count=0;
		}

		else if (player1win > player2win)
		{
			in_a_row_5_idx = 0;
			player1win=0;
			player2win=0;
			win_1_for_5_idx = 1;
			game_count=0;
		}

		else if (player1win < player2win)
		{
			in_a_row_5_idx = 0;
			player1win=0;
			player2win=0;
			win_2_for_5_idx = 1;
			game_count=0;
		}
	}
}

void game_count_func_golden3()
{

	if (player1win == 3)
		{
			golden_3_idx = 0;
			player1win=0;
			player2win=0;
			win_1_for_5_idx = 1;
		}

		else if (player2win == 3)
		{
			golden_3_idx = 0;
			player1win=0;
			player2win=0;
			win_2_for_5_idx = 1;
		}

}

void new_game()
{
	move[0][0] = 0;
	move[0][1] = 0;
	move[0][2] = 0;
	move[1][0] = 0;
	move[1][1] = 0;
	move[1][2] = 0;
	move[2][0] = 0;
	move[2][1] = 0;
	move[2][2] = 0;
	turn = 1;
}

void func()
{
	if (homeidx<89) homeidx++;
	//if (startidx<80) startidx++;
}

int main()
{
	// place your own initialization codes here.
	int t = iSetTimer (5,func);
	iInitialize(1400, 787, "Tic Tac Toe");
	
	// printf ("x=%d, y=%d, z=%d",x,y,r);
	return 0;
}
