#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * printNil - Prints "(Nil)".
 *
 * Return: Nothing.
 */
void printNil()
{
	char *nil = "(Nil)";
	int i = 0;

	while (nil[i])
	{
		_putchar(nil[i]);
		i++;
	}
}
/**
 * printChar - Prints character according to format.
 * @args: character passed as args.
 *
 * Return: Nothing.
 */
void printChar(va_list args)
{
	int chara = va_arg(args, int);
	int i = 0;
	/*Imprime chara s'il est un caractère imprimable sinon, imprime "(Nil)"*/
	if (chara >= 32 && chara <= 126)
		_putchar(chara);
	else
		printNil();

	_putchar(0);
}
/**
 * printInt - Prints integer according to format.
 * @args: integer passed as args.
 *
 * Return: Nothing.
 */
void printInt(va_list args)
{
	short isNeg = 0;
	int integer = va_arg(args, int);
	int i = 0;
	char *intToStr = "";

        /**if (integer == NULL)
                printNil();*/
	/*Vérifie si integer est négatif et si oui, flag isNeg = 1*/
	if (integer < 0)
	{
		integer *= -1;
		isNeg = 1;
	}
	/*Peuple le tableau avec chacun des chiffres de integer en commençant
	 * par le dernier*/
	while (integer)
	{
		intToStr[i] = (integer % 10) + 48;
		integer /= 10;
		i++;
	}
	/*préfixe string avec '-' si integer est négatif*/
	if (isNeg == 1)
		_putchar('-');
	/*Imprime chaque élément de intToStr[] en commençant par le dernier*/
	while (i >= 0)
	{
		_putchar(intToStr[i]);
		i--;
	}
}
/**
 * printFloat - Prints float according to format.
 * @args: float passed as args.
 * @decimal: number of decimals to be printed.
 *
 * Return: Nothing.
 */
void printFloat(va_list args, unsigned int decimal)
{
	double floatNum = va_arg(args, double);
	unsigned int dec = decimal;
	/*Récupération de la partie entière*/
	int intPart = (int)floatNum;
	/*Récupération de la partie décimale; double nécessaire au lieu
	 * de float pour afficher plus de 7-8 chiffres significatifs avant
	 * ou après la virgule*/
	double getFloat = floatNum - (double)intPart;
	int decPart;
	int i = 0, j = 0, k = 0;
	short isNeg = 0;
	char *floatStr;
	char *intStr;

	/*si %f seul ou si %.xf > 6*/
	if (dec == 0 || dec > 6)
		dec = 6;
	/*Vérifie si FloatNum est négatif et si oui, flag isNeg = 1*/
	if (intPart < 0)
	{
		intPart *= -1;
		getFloat *= -1;
		isNeg = 1;
	}
	/*Fait passer la virgule à droite du nombre de décimales à
	 * conserver (cast en vers nécessaire pour éliminer les
	 * chiffres déchets après la virgule)*/
	while (i < dec)
	{
		getFloat *= 10;
		i++;
	}
	decPart = (int)getFloat;
	/*Conversion des chiffres qui composent les nombres des parties
	 * décimales et entières en string*/
	while (decPart)
	{
		floatStr[j] = (decPart % 10) + 48;
		decPart /= 10;
		j++;
	}
	while (intPart)
	{
		intStr[k] = (intPart % 10) + 48;
		intPart /= 10;
		k++;
	}
	/*Si floatNum est négatif imprimer signe '-'*/
	if (isNeg == 1)
		_putchar('-');
	/*Imprime successivement les parties entières et décimales
	 * séparées par un point*/
	while (k >= 0)
	{
		_putchar(intStr[k - 1]);
		k--;
	}
	_putchar('.'); /*A voir si condition nécessaire*/
	while (j >= 0)
	{
		_putchar(floatStr[j]);
		j--;
	}

}
/**
 * printStr - Prints strings according to format.
 * @args: string passed as args.
 *
 * Return: Nothing.
 */
void printStr(va_list args)
{
	char *string = va_arg(args, char*);
	int strLen = 0, i = 0;

	if (string == NULL)
		string = "(nil)";
	/*Récupère la longueur de string*/
	while(string[strLen])
		strLen++;
	/*Imprime chaque caractère contenu dans string*/
	while(i < strLen)
	{
		_putchar(string[i]);
		i++;
	}
	_putchar(0);
}
