#pragma once
#include <iostream>
#include <string>

using namespace std;

class Pet
{
private:
	string name;
	int count_paws;
	string sound;
public:
	Pet(string name_S, int count_paws_S, string sound_S) : name{ name_S }, count_paws{ count_paws_S }, sound{ sound_S } {};
};

class Dog : protected Pet 
{
private:
	string breed;
public:
	Dog(string breed_S) : Pet("Бобик", 4, "Гав гав"), breed{ breed_S } {};
};
class Cat : protected Pet 
{
private:
	string color;
public:
	Cat(string color_S) : Pet("Рыжик", 4, "Мяу иая"), color{ color_S } {};
};
class Parrot : protected Pet
{
private:
	string species;
public:
	Parrot(string species_S) : Pet("Кеша", 2, "Пиу пиу"), species{ species_S } {};
};