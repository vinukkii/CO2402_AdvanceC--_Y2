#pragma once
#include"CCard.h"

enum class ECardTypes :int
{
	Type1 = 1,
	Type2 = 2,
	Type3 = 3,
	Type4 = 4,
	Type5 = 5,
	Type6 = 6,
	Type7 = 7,
	Type8 = 8,
	Type9 = 9,
	Type10 = 10,
	Type11 = 11,
};

CCard* NewCard(ECardTypes card, istream& file);


