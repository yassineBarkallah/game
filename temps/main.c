/**  
* @file main.c 
 * @brief Testing Program. 
 * @author  Yassine barkallah 
 * @version 0.1  
* @date jun 07, 2020  
*  
* Testing program for time
  *
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


int main () 
{

temps temp ; 
SDL_Surface * screen ; 
int done=0 ; 
SDL_Event event ; 
SDL_Color rouge = {255,255,255};
TTF_Init();
       if  ( SDL_Init ( SDL_INIT_VIDEO )  == -1 )  { 
         printf ( "Can not init SDL \n " ); 
 
     } 

temp=inisaliser_temp (temp);

     screen  =  SDL_SetVideoMode ( 1280 ,  720 ,  32 ,  SDL_HWSURFACE  |  SDL_DOUBLEBUF ); 
     if  ( screen  ==  NULL )  { 
         printf ( "Can not set video mode: \n "); 
         
     } 

     SDL_FillRect ( screen ,  NULL ,  SDL_MapRGB ( screen -> format,  0 ,  0 ,  0)); 




   while  ( ! done )  { 
         while  (SDL_PollEvent ( & event ))  { 
             switch  ( event . type )  { 
             case  SDL_QUIT : 
                 done  =  1 ; 
                 break ;  
}
 }


 
   SDL_FillRect ( screen ,  NULL ,  SDL_MapRGB ( screen -> format,  0 ,  0 ,  0)); 

temp.temp=TTF_RenderText_Blended(temp.police,temp.chaine,rouge);

temp.tempactuel=SDL_GetTicks();

if (temp.tempactuel- temp.tempprecedent >1000  )
{
temp.seconde1++;
temp.tempprecedent= temp.tempactuel;

}
if (temp.seconde1>9)
{
	temp.seconde1=0;
	temp.seconde2++;
}
if (temp.seconde2>=6)
{
	temp.seconde2=0;
	temp.minute1++;
}
if (temp.minute1>=9)
{
	temp.minute1=0;
	temp.minute2++;
}
if (temp.minute2>=6)
{
	temp.minute2=0;
	temp.heur1++;
}
if (temp.heur1>=9)
{
	temp.heur1=0;
	temp.heur2++;
}






sprintf(temp.chaine,"%d %d : %d %d : %d %d ",temp.heur2,temp.heur1,temp.minute2,temp.minute1,temp.seconde2,temp.seconde1);

SDL_BlitSurface(temp.temp,NULL,screen,&temp.position_temp);
SDL_Flip(screen) ; 

}




return 0 ; 
}
