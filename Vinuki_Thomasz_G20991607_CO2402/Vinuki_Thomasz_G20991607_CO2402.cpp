// Vinuki_Thomasz_G20991607_CO2402.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//#define CRTDBG_MAP_ALLOC
#include<crtdbg.h>
#include <iostream>
#include <vector>
#include "CCard.h"
#include<fstream>
#include "ECardTypes.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int type = 0;
int Random(int max)
{
	return int(float(rand()) / (RAND_MAX + 1) * float(max));

}

void initRandom(int seed)
{
	srand(seed);
}

int main()
{
	{	// for the random function : 
		void initRandom(int seed);
		int Random(int max);

		// vectors created  to read the files , to create the hand :
		vector<CCard*> plagiaristFile;
		vector<CCard*> piffle_paperFile;

		vector<CCard*> player1_Hand[2];
		vector<CCard*> player2_Hand[2];

		// the randomly taken card from the hand is saved here :
		vector<CCard*> Temp1[1];
		vector<CCard*> Temp2[1];

		vector<CCard*> player1_Table;
		vector<CCard*> player2_Table;


		// reading from files :
		ifstream file1("plagiarist.txt");
		ifstream file2("piffle-paper.txt");
		ifstream file_Seed("seed.txt");


		int seed = 0;

		// reading of files to the vector : 

		if (file1.is_open())
		{
			while (file1 >> type)

			{
				if (type != 0)
				{
					plagiaristFile.push_back(NewCard(ECardTypes(type), file1));
				}

			}
		}
		else
		{
			cout << "Could'nt open the file!";
		}

		if (file2.is_open())
		{
			while (file2 >> type)

			{
				if (type != 0)
				{
					piffle_paperFile.push_back(NewCard(ECardTypes(type), file2));
				}

			}
		}
		else
		{
			cout << "Could'nt open the file!";
		}


		if (file_Seed.is_open())
		{
			while (file_Seed)
			{
				file_Seed >> seed;
			}
		}
		// structure created for the professors : 

		struct SProfessor
		{
			string Name;
			int prestige = 30;


			int prestigeChange(int value)
			{
				prestige = prestige - value;
				return prestige;
			}
		} professor1, professor2;


		// declaring the name of the professor : 

		professor1.Name = "Professor Plagiarist";
		professor2.Name = "Professor Piffle-Paper";


		// Starting of the game 
		cout << "Welcome to U-Can’t. Let the winnowing begin..." << endl;
		cout << "\n";

		int index = 0;
		// Player 1 hand : 'starts with' function :
		player1_Hand->push_back(plagiaristFile[index]);
		plagiaristFile.erase(plagiaristFile.begin());
		cout << professor1.Name << " " << "starts with " << player1_Hand->back()->nameofCard() << endl;

		// Player 2 hand : 'starts with' function :
		player2_Hand->push_back(piffle_paperFile[index]);
		piffle_paperFile.erase(piffle_paperFile.begin());
		cout << professor1.Name << " " << "starts with " << player2_Hand->back()->nameofCard() << endl;

		cout << "\n" << "\n";

		// Game begins with the rounds of 30 
		for (int no_of_rounds = 1; no_of_rounds < 31; no_of_rounds++)
		{
			cout << "ROUND " << no_of_rounds << endl;
			cout << "=========" << "\n";
			cout << "\n";

			if (player1_Hand->size() < 2 && player2_Hand->size() < 2)
			{
				// player 1 drawing card
				player1_Hand->push_back(plagiaristFile[index]);
				plagiaristFile.erase(plagiaristFile.begin());

				cout << professor1.Name << " " << "draws" << " " << player1_Hand->back()->nameofCard() << endl;

				// For player 1 :
				// random funtion is used to obtain the random int from the hand and that randomly choosen int in fed to the temp1 vector :
				int random = Random(player1_Hand[0].size());
				Temp1->push_back(player1_Hand[0][random]);
				player1_Hand->erase(player1_Hand[0].begin() + random);
				cout << professor1.Name << " " << "plays" << " " << Temp1->back()->nameofCard() << endl;

				int type = Temp1->back()->typeofCard();
				int power = Temp1->back()->powerofCard();

				if (type == 1)
				{

					cout << Temp1->back()->nameofCard() << " " << "attacks " << professor2.Name << "." << professor2.Name << "'s prestige is now : " << professor2.prestigeChange(power) << endl << endl;

				}
				else
				{
					cout << endl;
				}

				// For player 2:
				// random funtion is used to obtain the random int from the hand and that randomly choosen int in fed to the temp2 vector :

				player2_Hand->push_back(piffle_paperFile[index]);
				piffle_paperFile.erase(piffle_paperFile.begin());

				cout << professor2.Name << " " << "draws" << " " << player2_Hand->back()->nameofCard() << endl;


				int random2 = Random(player2_Hand[0].size());
				Temp2->push_back(player2_Hand[0][random2]);
				player2_Hand->erase(player2_Hand[0].begin() + random2);

				int type2 = Temp2->back()->typeofCard();
				cout << professor2.Name << " " << "plays" << " " << Temp2->back()->nameofCard() << endl;

				if (type2 == 1)
				{
					cout << Temp2->back()->nameofCard() << " " << "attacks " << professor1.Name << "." << professor1.Name << "'s prestige is now : " << professor1.prestigeChange(Temp2->back()->powerofCard()) << endl << endl;

				}

			}

			if (professor1.prestige <= 0 || professor2.prestige <= 0)
			{
				break;
			}
		}


		if ((professor1.prestige <= 0) || (professor2.prestige <= 0))
		{
			cout << "Game Over!" << endl;

			if (professor1.prestige <= 0)
			{

				cout << professor1.Name << " " << "has no prestige and is sacked!" << "\n";
			}

			else if (professor2.prestige <= 0)
			{

				cout << professor2.Name << " " << "has no prestige and is sacked!" << "\n";
			}

			if (professor1.prestige > professor2.prestige)
			{
				cout << professor1.Name << " wins." << endl;
			}

			else if (professor1.prestige < professor2.prestige)
			{
				cout << professor2.Name << " wins." << endl;
			}





		}


		cout << professor1.Name << "'s prestige is:" << professor1.prestige << endl;
		cout << professor2.Name << "'s prestige is:" << professor2.prestige << endl;

		for (auto card : plagiaristFile, piffle_paperFile)
		{
			delete card;
		}



	}
	_CrtDumpMemoryLeaks();
}

















































