
#include "../../include/runlogic.h"


LogicBlockElement elementsCtrBlock_1 [] = {
	{0, 0, 0},
	{1, 1, 0},
};

LogicBlockElement elementsCtrBlock_2 [] = {
	{1, 2, 70.0},
	{1, 4, 15.0},
	{1, 6, 15.0},
};

LogicBlockElement elementsCtrBlock_3 [] = {
	{1, 3, 0},
	{0, 2, 0},
};

LogicBlockElement elementsCtrBlock_4 [] = {
	{0, 1, 0},
};

LogicBlockElement elementsCtrBlock_5 [] = {
	{1, 5, 0},
	{0, 2, 0},
};

LogicBlockElement elementsCtrBlock_6 [] = {
	{0, 3, 0},
};

LogicBlockElement elementsCtrBlock_7 [] = {
	{1, 7, 40.0},
	{1, 9, 60.0},
};

LogicBlockElement elementsCtrBlock_8 [] = {
	{1, 8, 0},
	{0, 2, 0},
};

LogicBlockElement elementsCtrBlock_9 [] = {
	{0, 4, 0},
	{0, 5, 0},
};

LogicBlockElement elementsCtrBlock_10 [] = {
	{1, 10, 0},
	{0, 6, 0},
	{1, 11, 0},
};

LogicBlockElement elementsCtrBlock_11 [] = {
	{0, 4, 0},
	{0, 5, 0},
};

LogicBlockElement elementsCtrBlock_12 [] = {
	{0, 7, 70.0},
	{0, 8, 30.0},
};

LogicBlockCtrl ctrlBlock[] = {
	{ "JCPenneyDotcom", NS_CTRLBLOCK_SEQUENCE, 2, elementsCtrBlock_1, 0, ""},
	{ "ProductAddedBlock", NS_CTRLBLOCK_PERCENT, 3, elementsCtrBlock_2, 0, ""},
	{ "BrowseBlock", NS_CTRLBLOCK_SEQUENCE, 2, elementsCtrBlock_3, 0, ""},
	{ "BrowseLoop", NS_CTRLBLOCK_COUNT, 2, elementsCtrBlock_4, 2, "", 1},
	{ "SearchBlock", NS_CTRLBLOCK_SEQUENCE, 2, elementsCtrBlock_5, 0, ""},
	{ "SearchLoop", NS_CTRLBLOCK_COUNT, 2, elementsCtrBlock_6, 2, "", 1},
	{ "AddToCartBlock", NS_CTRLBLOCK_PERCENT, 2, elementsCtrBlock_7, 0, ""},
	{ "SingleItemBlock", NS_CTRLBLOCK_SEQUENCE, 2, elementsCtrBlock_8, 0, ""},
	{ "SingleItemLoop", NS_CTRLBLOCK_COUNT, 1, elementsCtrBlock_9, 1, "", 2},
	{ "MultiItemBlock", NS_CTRLBLOCK_SEQUENCE, 3, elementsCtrBlock_10, 0, ""},
	{ "MultiItemLoop", NS_CTRLBLOCK_DOWHILE, 2, elementsCtrBlock_11, 0, "ProductLoop:1:>", Integer},
	{ "CheckOutBlock", NS_CTRLBLOCK_PERCENT, 2, elementsCtrBlock_12, 0, ""},
};

int numCtrlBlocks = 12;

int switchBlockDefaultValue = -1;
