#include "ECardTypes.h"
#include"CStudent.h"
#include"CPlagiarismHearing.h"
#include"CCourseAccreditation.h"
#include"CFeedbackForum.h"
#include"CIndustrialPlacement .h"
#include"Type6Class.h"
#include"Type7Class.h"
#include"Type8Class.h"
#include"Type9Class.h"
#include"Type10Class.h"
#include"Type11Class.h"

CCard* NewCard(ECardTypes card, istream& file)
{
	CCard* CardPtr = nullptr;

	switch (card)
	{
		case ECardTypes::Type1:
	{
			CardPtr = new CStudent(file);
			break;
	}
	

		case ECardTypes::Type2:
		{
			CardPtr = new CPlagiarismHearing(file);
			break;
		}
	
		case ECardTypes::Type3:
		{
			CardPtr = new CCourseAccreditation(file);
			break;
		}
	
		case ECardTypes::Type4:
		{
			CardPtr = new CFeedbackForum(file);
			break;
		}
	
		case ECardTypes::Type5:
		{
			CardPtr = new Type5Class(file);
			break;
		}
	
		case ECardTypes::Type6:
		{
			CardPtr = new Type6Class(file);
			break;
		}
	
		case ECardTypes::Type7:
		{
			CardPtr = new Type7Class(file);
			break;
		}
	
		case ECardTypes::Type8:
		{
			CardPtr = new Type8Class(file);
			break;
		}
	
		case ECardTypes::Type9:
		{
			CardPtr = new Type9Class(file);
			break;
		}
	
		case ECardTypes::Type10:
		{
			CardPtr = new Type10Class(file);
			break;
		}
	
		case ECardTypes::Type11:
		{
			CardPtr = new Type11Class(file);
			break;
		}
	
	
		default:
		{
	
		}
		return CardPtr;
		}

	}

