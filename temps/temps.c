
 /** 
 * @file temps.c
*/ 
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <math.h>
#include <time.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <string.h>
#include "temps.h"





/** 
 * @brief  To initialize the time .
  * @param temp temps 
 * @return  temp
 */ 

temps inisaliser_temp (temps temp)
{
temp.heur1=0;
temp.minute1=0;
temp.seconde1=0;
temp.heur2=0;
temp.minute2=0;
temp.seconde2=0;
temp.tempactuel=0;
temp.temp=NULL;
temp.tempprecedent=0;
temp.position_temp.x=400;
temp.position_temp.y=0;
temp.police=TTF_OpenFont("arial.ttf",22);

	return temp;
}


