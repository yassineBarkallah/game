 /** 
 * @file temps.h
*/ 
#ifndef JEU_H_INCLUDED
#define JEU_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>

/**  
* @struct temps
* @brief struct for time
*/
typedef struct 
{
	int heur1; /*!< integer*/ 
	int heur2; /*!< integer*/ 
	int minute1; /*!< integer*/ 
	int minute2; /*!< integer*/ 
	int seconde1; /*!< integer*/ 
	int seconde2; /*!< integer*/ 
	SDL_Surface *temp; /*!< surface*/ 
	SDL_Rect position_temp; /*!< position du temps dans l'ecran. */
	TTF_Font *police; /*!< police*/ 
	int tempactuel; /*!< integer*/ 
	int tempprecedent; /*!< integer*/ 
	char chaine[20]; /*!< char*/ 

	
}temps;

temps inisaliser_temp (temps temp); 
//void affichetemps ( temps * temp , SDL_Surface * screen ) ; 

#endif// JEU_H_INCLUDED
