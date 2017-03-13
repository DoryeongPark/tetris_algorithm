#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <windows.h>
#include <stdio.h>

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

typedef struct Mask {
	int width;
	int height;
	char* kernal;
} Mask;

Mask make_mask(int width, int height, char* content) {

	Mask mask;
	mask.width = width;
	mask.height = height;
	mask.kernal = malloc(sizeof(char) * width * height);
	strcpy(mask.kernal, content);

	return mask;
}

int is_fit(int standard, int left, int right, int top, char* board, Mask mask) {

	if (left + right + 1 != mask.width) {
		printf("Width doesn't fit with mask's\n");
		return 0;
	}

	if (top != mask.height) {
		printf("Height doesn't fit with mask's\n");
		return 0;
	}

	int count = (left + right + 1) * top;
	int inserter = 0;
	int result = 1;

	while (top != 0) {
		--top;
		for (int i = standard - left; i <= standard + right; ++i) {
			char comp = '1';
			if (standard / 10 == i / 10)
				comp = board[i];
			if (comp != mask.kernal[inserter++]) {
				result = 0;
				goto inspection_end_point;
			}
		}
		standard += 10;
	}

	inspection_end_point:

	return result;
}

int get_max_height(char* board) {

	int max_height = 0;
	for (int i = 0; i < 20; ++i) {
		for (int j = 0; j < 10; ++j)
			if (board[i * 10 + j] == '1') {
				++max_height;
				break;
			}
	}
	return max_height;
}

void make_decision_i(int* bestX, int* bestRotation, char* board) {

	*bestRotation = 1;

	int max_height = get_max_height(board);
	Mask flat_mask1 = make_mask(4, 2, "00000000");

	for (int i = 0; i < 1; ++i) 
		for (int j = 0; j < 10; ++j) {
			int standard = i * 10 + j;
			if (is_fit(standard, 2, 1, 2, board, flat_mask1)) {
				*bestX = j + 1;
				printf("Fit Point Found - I1\n");
				goto decision_i_end_point;
			}
		}
	

	Mask flat_mask2 = make_mask(4, 3, "111100000000");

	for(int i = 0; i < max_height; ++i)
		for (int j = 0; j < 10; ++j) {
			int standard = i * 10 + j;
			if (is_fit(standard, 2, 1, 3, board, flat_mask2)) {
				*bestX = j + 1;
				printf("Fit Point Found - I1\n");
				goto decision_i_end_point;
			}
		}

	*bestRotation = 2;


	decision_i_end_point:;
}


int AI(int boardW, int boardH,
		char board[],
		char curPiece,
		int curX, int curY,
		int curR,
		char nextPiece,
		int* bestX, int* bestRotation)
{
	*bestX = 1;
	*bestRotation = 1;

	switch (curPiece) {
	case 'I':
		make_decision_i(bestX, bestRotation, board);
		break;
	default:
		break;
	}

	return 0;
}


DECLSPEC_EXPORT
int WINAPI AIPath(int boardW, int boardH,
		char board[],
		char curPiece,
		int curX, int curY,
		int curR,
		char nextPiece,
		char path[] )
{
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
