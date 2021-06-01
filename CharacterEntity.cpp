#include "CharacterEntity.h"
#include <string>
using namespace std;

CharacterEntity::CharacterEntity(string name)
{
	CharacterEntity::_name = name;
}

string CharacterEntity::GetName()
{
	return _name;
}

int CharacterEntity::GetLevel()
{
	return 0;
}

string CharacterEntity::Info()
{
	return CharacterEntity::_name + ":"
		+ " MaxHP " + GetMaxHp()
		+ " Power " + GetPower()
		+ " Armor " + GetArmor();
}
