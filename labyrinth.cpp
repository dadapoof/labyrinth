#include <iostream>
#include <string>

using namespace std;

int main()
{

const int starting_points = 0;
const int question_one_points = 1;
const int question_two_points = 2;
const int question_three_points = 3;


string name;

cout << "Come hither vile creature, what shall be your name?\n";
cin >> name;
cout << "Very well " << name << ". Welcome to my Labyrinth! Good luck!\n";
cout << "The only rules are:\n";
cout << "1) Answer questions with Y for yes and N for no.\n";
cout << "2) Have fun! Or not... hahaha...\n";
cout << "Go on " << name << "!! Entertain me!\n";

char y_or_n;

cout << "Sadly your annoying little brother, Tobi, is crying and shouting in your ear...\n";
cout << "Would you like to get rid of him?\n";
cin >> y_or_n;


if (y_or_n == 'Y')
{
cout << "Well done! He was really getting on my nerves too...\n";
cout << "The Goblin King has taken him to his secret lair.\n";
cout << "You now have an hour to go through the labyrinth and make it alive...\n";
}

if (y_or_n == 'N')
{
cout << "Ah... what a poor mistake you have made " << name << "...\n";
cout << "Unfortunately for you, I really cannot stand Tobi's screaming...\n";
cout << ".........\n";
cout << "You have been teleported to the outdoors.\n";
cout << "You have only earned " << starting_points << " points...\n";
cout << "That is just sad... Try again next time. And try harder too...\n";

	   return 0;
}

cout << "You keep walking deeper into the labyrinth...\n";
cout << "And you stumble upon a spooky ghost pirate!!!\n";
cout << "'YAAARRRR!!! What business have you 'ere ye swashbuckler! State yer purpose!'\n";
cout << "After explaining the story about Tobi's annoying shouting, the pirate laughs.\n";
cout << "Oliver the pirate, explains that he has come here to retrieve his ghost ship from the Goblin King's lair...\n";
cout << "He gives you two choices... Continue going through the labyrinth alone by choosing the left path filled with spiders or go with him down the right path!" << endl;
cout << "Shall you be on yer way with this mighty pirate?\n";
cin >> y_or_n;


if (y_or_n == 'Y')
{
cout << "Excellent! Follow me!\n";
cout << "With Oliver's help, you go down the right path and walk for 15 minutes.\n";
cout << "You enter a big green room with a big throne.\n";
cout << "You look up to the ceiling and see Tobi in a suspended cage.\n";
cout << "As you make eye contact, the throne rumbles and the floor in front of the throne BREAKS.\n";
cout << "Out from the now giant hole in the ground, comes the goblin king.\n";
cout << "You find a rock laying on the ground right besides you and pick it up.\n";
cout << "You know your aim is good since you were on the softball team...\n";
cout << "You are given two choices:\n";
cout << "1. Throw the rock at the string that holds your brother's cage and save him.\n";
cout << "2. Throw the rock at the Goblin King's eye and defeat him!\n";
cout << "Will you choose option 2 and defeat the Goblin King?\n";


}

if (y_or_n == 'N')
{
int total_question_2 = starting_points + question_one_points;
cout << "You venture down the left path alone...\n";
cout << "You are scared by the spiders and start running until...\n";
cout << "........\n";
cout << "You have been teleported to the outdoors.\n";
cout << "You have only won " << total_question_2 << " points.\n";
cout << "That is sad... Try again next time... And try harder too...\n";

        return 0;
}

cin >> y_or_n;

if (y_or_n == 'Y')
{
int total_points = question_one_points + question_two_points + question_three_points;
cout << "Congratulations on another perfect answer. You defeat the goblin and use the stone again to save your brother.\n";
cout << "The Labyrinth is now over. You have received " << total_points << " points. Well done.\n";
cout << "You have gotten a perfect score in record time... IMPRESSIVE!\n";
}

if (y_or_n == 'N')
{
int total_question_3 = question_one_points + question_two_points;
cout << "Wrong answer... You should act selfishly. Remember? Your brother annoys me... Prioritize your ego next time and defeat the King!\n";
cout << "You only got " << total_question_3 << " points. Meh, I suppose that is acceptable. Aim higher next time.\n";
        return 0;
}

        return 0;
}
