#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <math.h>

int main()
{	
	double floatNum = -2147483647.2147463;
        unsigned int dec = 7;
        int intPart = (int)floatNum;
        /*Récupération de la partie décimale; double nécessaire pour
	 * afficher plus que 7-8 chiffres significatifs avant ou après
	 * la virgule*/
        double getFloat = floatNum - (double)intPart;
	int decPart;
        int i = 0, j = 0, k = 0;
        short isNeg = 0;
        char *floatStr;
        char *intStr;

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
         * conserver (cast vers int nécessaire) pour éliminer
	 * chiffres déchets après la virgule*/
        while(i < dec)
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
        /*Si floatNum est négatif imprimer signe - */
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
	return (0);
}
