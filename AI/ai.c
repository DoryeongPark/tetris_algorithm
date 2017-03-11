#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <windows.h>

#define DECLSPEC_EXPORT __declspec(dllexport)
#define WINAPI __stdcall

#define true 1
#define false 0

typedef char bool;

char gName[64]; // 럿쀼츰俚痰，극伎홍애

char gPieceBitmap[8][4][4][4] =
{
	// NULL
	{
		{
			{0},
		},
	},
	// O
	{
		{
			{0, 0, 0, 0},
			{0, 1, 1, 0},
			{0, 1, 1, 0},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 0, 0},
			{0, 1, 1, 0},
			{0, 1, 1, 0},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 0, 0},
			{0, 1, 1, 0},
			{0, 1, 1, 0},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 0, 0},
			{0, 1, 1, 0},
			{0, 1, 1, 0},
			{0, 0, 0, 0},
		},
	},
	// I
	{
		{
			{0, 0, 0, 0},
			{1, 1, 1, 1},
			{0, 0, 0, 0},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 1, 0},
			{0, 0, 1, 0},
			{0, 0, 1, 0},
			{0, 0, 1, 0},
		},
		{
			{0, 0, 0, 0},
			{1, 1, 1, 1},
			{0, 0, 0, 0},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 1, 0},
			{0, 0, 1, 0},
			{0, 0, 1, 0},
			{0, 0, 1, 0},
		},
	},
	// S
	{
		{
			{0, 0, 0, 0},
			{0, 0, 1, 1},
			{0, 1, 1, 0},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 1, 0},
			{0, 0, 1, 1},
			{0, 0, 0, 1},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 0, 0},
			{0, 0, 1, 1},
			{0, 1, 1, 0},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 1, 0},
			{0, 0, 1, 1},
			{0, 0, 0, 1},
			{0, 0, 0, 0},
		},
	},
	// Z
	{
		{
			{0, 0, 0, 0},
			{0, 1, 1, 0},
			{0, 0, 1, 1},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 0, 1},
			{0, 0, 1, 1},
			{0, 0, 1, 0},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 0, 0},
			{0, 1, 1, 0},
			{0, 0, 1, 1},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 0, 1},
			{0, 0, 1, 1},
			{0, 0, 1, 0},
			{0, 0, 0, 0},
		},
	},
	// L
	{
		{
			{0, 0, 0, 0},
			{0, 1, 1, 1},
			{0, 1, 0, 0},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 1, 0},
			{0, 0, 1, 0},
			{0, 0, 1, 1},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 0, 1},
			{0, 1, 1, 1},
			{0, 0, 0, 0},
			{0, 0, 0, 0},
		},
		{
			{0, 1, 1, 0},
			{0, 0, 1, 0},
			{0, 0, 1, 0},
			{0, 0, 0, 0},
		},
	},
	// J
	{
		{
			{0, 0, 0, 0},
			{0, 1, 1, 1},
			{0, 0, 0, 1},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 1, 1},
			{0, 0, 1, 0},
			{0, 0, 1, 0},
			{0, 0, 0, 0},
		},
		{
			{0, 1, 0, 0},
			{0, 1, 1, 1},
			{0, 0, 0, 0},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 1, 0},
			{0, 0, 1, 0},
			{0, 1, 1, 0},
			{0, 0, 0, 0},
		},
	},
	// T
	{
		{
			{0, 0, 0, 0},
			{0, 1, 1, 1},
			{0, 0, 1, 0},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 1, 0},
			{0, 0, 1, 1},
			{0, 0, 1, 0},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 1, 0},
			{0, 1, 1, 1},
			{0, 0, 0, 0},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 1, 0},
			{0, 1, 1, 0},
			{0, 0, 1, 0},
			{0, 0, 0, 0},
		},
	},
};

#ifdef __cplusplus
extern "C" {
#endif

// 럿쀼AI츰俚，삔鞫刻瞳썹충
DECLSPEC_EXPORT
char* WINAPI Name()
{
	strcpy(gName, "Test");
	return gName;
}

/*
 * board角寧몸boardW*boardH낀똑痰01莉냥돨俚륜눔，覩듐黨璘苟실，邱契빈죗。
 * 절흔8*3돨끝뒈茄셥近榴：
 * 00000000
 * 00011001
 * 01111111
 * 橙꽝鑒board돨코휭槨："011111110001100100000000"。
 *
 * Piece꽝鑒賈痰俚륜 OISZLJT 섟왕목깊刻렘욥近榴。
 * nextPiece槨' '珂깊刻轟渡응。
 * curR角렘蕨날蕨，1角놓迦렘蕨，2角쾀珂濾90똑，3角180똑，4角糠珂濾90똑。
 * curX,curY돨麟깃，角鹿뎠품욥4*4앤黎돨鑒뒤랗契，塘鑒뒤랗죗槨샘硫，
 *     璘苟실槨x=1,y=1；塘苟실槨x=boardW,y=1；璘실槨x=1,y=boardH
 *     야竟렘욥近榴꽝敦寧섬커쩌苟돨pieces_orientations.jpg
 *     칵훰놓迦麟깃槨 curY==boardH-1, curX==boardW/2+1
 *
 * bestX,bestRotation 痰黨럿쀼離膽貫零，宅curX,curR돨방橙宮谿。
 *
 * 鬧雷：렘욥꾸鱗늴埼방땍槨邱旗瘻，疼틱盧，離빈렴苟。
 *       흼櫓쇌唐羸뎡랍AI넋埼청唐털뙤橙삔돔鈴댄轎겠렴。
 *       맡변鑒瞳놔君劤렘욥돨珂빅굳딧痰，寧몸렘욥딧痰寧늴。
 */
int AI(int boardW, int boardH,
		char board[],
		char curPiece,
		int curX, int curY,
		int curR,
		char nextPiece,
		int* bestX, int* bestRotation)
{
	*bestX = 1;
	*bestRotation = 3;

	return 0;
}

/*
 * path 痰黨쌈澗꾸鱗법넋깻럿쀼，꾸鱗俚륜섞：
 *      'l': 璘盧寧목
 *      'r': 塘盧寧목
 *      'd': 苟盧寧목
 *      'L': 璘盧돕庫
 *      'R': 塘盧돕庫
 *      'D': 苟盧돕뒀（뎃꼇瀾，옵셨崎盧땡）
 *      'z': 쾀珂濾旗瘻
 *      'c': 糠珂濾旗瘻
 * 俚륜눔칫棺狼속'\0'，깊刻쭝뒈꾸鱗（샀袒슉쭝）
 *
 * 굶변鑒連넣훨雷쨌쓺꾸鱗，흼꼇矜狼늪변鑒怜拳賈痰충寧몸돨뺐，橙딜굶변鑒섦옵
 * 흼닸瞳굶변鑒，橙품寧몸변鑒꼇삔굳딧痰
 */
DECLSPEC_EXPORT
int WINAPI AIPath(int boardW, int boardH,
		char board[],
		char curPiece,
		int curX, int curY,
		int curR,
		char nextPiece,
		char path[] )
{
	// 鹿苟늪뙈덜쯤槨쇗휭覩쌈왯賈痰，흼꼇矜狼옵鹿뇜
	//if (0)
	{
		int bestX = 0;
		int bestRotation = 1;
		AI(boardW, boardH,
			board,
			curPiece, 
			curX, curY,
			curR,
			nextPiece,
			&bestX, &bestRotation
			);
		while ( curR != bestRotation )
		{
			strcat(path, "z");
			curR = curR % 4 + 1;
		}
		while ( curX > bestX )
		{
			strcat(path, "l");
			curX -= 1;
		}
		while ( curX < bestX )
		{
			strcat(path, "r");
			curX += 1;
		}

	}
	//strcpy(path, "ddddddddddcccrrrrrrDL");

	return 1;
}

#ifdef __cplusplus
}
#endif
