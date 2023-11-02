#ifndef __LUGIA_H 
#define __LUGIA_H
#endif

#include "LPC17xx.h"
#include "../GLCD/GLCD.h" 

static uint8_t Lugia_Matrix[29][32]={{0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
														  {0,0,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
															{0,1,1,0,2,2,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
															{1,0,1,0,2,0,0,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0},
															{1,0,2,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,0},
															{1,0,0,0,0,0,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1},
															{1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,2,0,0,0,0,1},
															{0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1},
															{0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,1,1,0,0,1,0,0,1,0,0,0,2,1},
															{0,0,1,0,0,0,2,1,1,1,0,0,0,0,0,0,1,3,1,3,1,0,1,0,0,1,2,0,0,2,0,1},
															{0,0,1,1,0,1,1,0,0,1,0,0,0,0,0,1,0,0,2,4,2,1,1,0,0,2,0,0,0,0,1,0},
															{0,1,3,1,1,0,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,1,0,0,2,0,0,0,0,2,1,0},
															{0,1,3,1,0,0,0,0,4,3,1,0,0,0,0,0,0,0,1,2,2,1,0,0,0,0,0,0,0,1,0,0},
															{1,3,4,0,0,0,0,4,3,1,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,1,0,0,0},
															{1,3,2,0,0,0,4,3,3,1,1,1,3,1,0,0,1,1,0,1,0,0,0,0,0,0,1,1,0,0,0,0},
															{1,3,0,0,0,4,3,3,1,2,2,2,1,1,0,1,3,1,1,0,0,0,0,0,1,1,1,0,0,0,0,0},
															{1,1,0,0,0,3,0,3,2,2,2,0,0,0,1,4,1,0,0,0,1,1,0,0,1,0,0,0,0,0,0,0},
															{0,1,0,0,2,1,0,2,1,1,2,0,0,0,0,2,1,0,0,0,0,1,0,1,0,0,0,1,0,0,0,0},
															{0,1,1,0,2,0,2,1,0,0,1,0,0,0,0,2,0,0,0,1,1,0,1,0,0,0,2,1,0,0,0,0},
															{0,0,1,0,0,1,1,0,0,0,0,1,0,0,0,0,0,0,1,0,0,1,2,2,0,2,2,1,0,0,0,0},
															{0,0,0,1,1,0,0,0,0,0,1,2,3,0,3,4,0,0,0,0,0,0,1,2,2,2,1,0,0,0,0,0},
															{0,0,0,0,0,0,0,0,0,0,1,2,4,0,3,4,4,2,0,0,0,0,1,2,2,2,1,0,0,0,0,0},
															{0,0,0,0,0,0,0,0,0,0,1,2,4,3,3,3,4,2,0,0,0,0,2,1,2,1,0,0,0,0,0,0},
															{0,0,0,0,0,0,0,0,0,0,0,1,2,4,3,3,4,1,2,0,0,2,2,1,1,0,0,0,0,0,0,0},
															{0,0,0,0,0,0,0,0,0,0,0,0,1,1,4,4,4,4,1,2,2,2,2,1,0,0,0,0,0,0,0,0},
															{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,0,1,1,1,1,2,2,2,1,0,0,0,0,0,0,0},
															{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,2,1,0,0,0,1,0,2,1,0,0,0,0,0,0,0},
															{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0},
															{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0}};	
																
static uint8_t Lugia_Matrix_2[29][32]={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,0,0,0,0,0,0,0,0,0,0},
																{0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,1,3,1,3,1,0,0,0,0,0,0,0,0,0,0},
																{0,0,1,1,0,1,1,0,0,1,0,0,0,0,0,1,0,0,2,4,2,1,1,0,0,0,0,0,0,0,0},
																{0,1,3,1,1,0,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,2,1,1,0,0,0,0,0,0,0},
																{0,1,3,0,0,0,0,0,4,3,1,0,0,0,0,0,0,0,1,0,0,0,2,1,1,0,0,0,0,0,0},
																{1,3,4,0,0,0,0,4,3,1,0,1,1,0,0,0,0,0,0,1,1,0,0,0,1,0,0,0,0,0,0},
																{1,3,2,0,0,0,4,3,3,1,1,1,3,1,0,0,1,1,0,0,0,1,0,0,2,1,0,0,0,0,0},
																{1,3,0,0,0,4,3,3,1,2,2,2,1,1,0,1,3,1,1,1,0,1,0,0,2,1,1,0,0,0,0},
																{1,1,0,0,0,3,0,3,2,2,2,0,2,2,1,4,1,0,0,0,1,1,0,0,0,1,1,0,0,0,0},
																{0,1,0,0,2,1,0,2,1,1,2,0,0,0,2,2,2,0,0,0,0,0,1,0,0,2,2,1,0,0,0},
																{0,1,2,0,2,0,2,1,0,0,1,0,0,0,0,0,0,1,1,0,0,0,1,1,1,0,2,1,0,0,0},
																{0,0,1,0,0,1,1,0,0,1,2,1,0,0,0,0,0,0,1,1,0,0,0,0,1,1,2,1,0,0,0},
																{0,0,0,1,1,0,0,0,1,2,2,1,3,0,3,4,0,0,2,1,1,0,0,0,0,1,1,1,0,0,0},
																{0,0,0,0,0,0,0,1,2,2,1,2,4,0,3,4,4,0,0,2,1,0,0,0,0,0,1,1,0,0,0},
																{0,0,0,0,0,0,1,2,2,0,1,2,4,3,3,3,4,2,0,2,1,1,0,0,0,0,0,1,1,0,0},
																{0,0,0,0,0,1,2,0,0,0,1,1,2,4,3,3,4,1,0,2,2,1,0,0,0,0,0,0,1,0,0},
						  									{0,0,0,0,1,2,0,0,0,1,1,0,1,1,4,4,4,4,1,0,2,1,0,0,0,0,0,0,1,1,0},
																{0,0,0,1,2,0,0,0,0,1,0,0,0,0,1,2,0,1,1,1,1,1,1,0,0,0,0,0,0,1,0},
																{0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,2,2,1,0,0,0,1,1,0,0,0,0,0,0,1,0},
																{0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,1,1,0,0,0,0,1,1,0,2,0,0,0,0,1,0},
																{0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,2,0,0,0,1,1},
																{0,1,0,0,0,2,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,2,0,0,0,0,1},
																{0,1,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,2,0,0,2,0,1},
																{0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,2,0,1},
																{0,1,0,0,1,0,0,2,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,2,0,1},
																{0,1,0,0,1,0,0,2,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1,0,1,0},
																{0,1,0,0,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1,1,0,0},
																{0,1,1,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,1,1,0,0,0},
																{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0}};						
																	
static uint8_t Lugia_Matrix_Mirrored [29][32]={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0},
																							 {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,0,0,0},
																							 {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,2,2,0,1,1,0},
																							 {0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,0,0,2,0,1,0,1},
																							 {0,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,2,0,1},
																							 {1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,0,0,0,0,0,1},
																								{1,0,0,0,0,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1},
																								{1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0},
																								{1,2,0,0,0,1,0,0,1,0,0,1,1,0,1,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0},
																								{1,0,2,0,0,2,1,0,0,1,0,1,3,1,3,1,0,0,0,0,0,0,1,1,1,2,0,0,0,1,0,0},
																								{0,1,0,0,0,0,2,0,0,1,1,2,4,2,0,0,1,0,0,0,0,0,1,0,0,1,1,0,1,1,0,0},
																								{0,1,2,0,0,0,0,2,0,0,1,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,0,1,1,1,3,0},
																								{0,0,1,0,0,0,0,0,0,0,1,2,2,1,0,0,0,0,0,0,0,1,3,4,0,0,0,0,1,3,1,0},
																								{0,0,0,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,1,3,4,0,0,0,0,4,3,1},
																								{0,0,0,0,1,1,0,0,0,0,0,0,1,0,1,1,0,0,1,3,1,1,1,3,3,4,0,0,0,2,3,1},
																								{0,0,0,0,0,1,1,1,0,0,0,0,0,1,1,3,1,0,1,1,2,2,2,1,3,3,4,0,0,0,3,1},
																								{0,0,0,0,0,0,0,1,0,0,1,1,0,0,0,1,4,1,0,0,0,2,2,2,3,0,3,0,0,0,1,1},
																								{0,0,0,0,1,0,0,0,1,0,1,0,0,0,0,1,2,0,0,0,0,2,1,1,2,0,1,2,0,0,1,0},
																								{0,0,0,0,1,2,0,0,0,1,0,1,1,0,0,0,2,0,0,0,0,1,0,0,1,2,0,2,0,1,1,0},
																								{0,0,0,0,1,2,2,0,2,2,1,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,1,0,0,1,0,0},
																								{0,0,0,0,0,1,2,2,2,1,0,0,0,0,0,0,4,3,0,3,2,1,0,0,0,0,0,1,1,0,0,0},
																								{0,0,0,0,0,1,2,2,2,1,0,0,0,0,2,4,4,3,0,4,2,1,0,0,0,0,0,0,0,0,0,0},
																								{0,0,0,0,0,0,1,2,1,2,0,0,0,0,2,4,3,3,3,4,2,1,0,0,0,0,0,0,0,0,0,0},
																								{0,0,0,0,0,0,0,1,1,2,2,0,0,2,1,4,3,3,4,2,1,0,0,0,0,0,0,0,0,0,0,0},
																								{0,0,0,0,0,0,0,0,1,2,2,2,2,1,4,4,4,4,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
																								{0,0,0,0,0,0,0,1,2,2,2,1,1,1,1,0,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
																								{0,0,0,0,0,0,0,1,2,0,1,0,0,0,1,2,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
																								{0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
																								{0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
																									

															
static uint8_t Pokeball[12][12]={{0,0,0,0,1,1,1,1,0,0,0,0},
																	{0,0,1,1,3,3,3,3,1,1,0,0},
																	{0,1,3,3,3,3,3,3,3,3,1,0},
																	{0,1,3,3,3,3,3,3,3,3,1,0},
																	{1,3,3,3,3,1,1,3,3,3,3,1},
																	{1,3,3,3,1,0,2,1,3,3,3,1},
																	{1,1,1,1,1,2,2,1,1,1,1,1},
																	{1,0,0,0,0,1,1,0,0,0,2,1},
																	{0,1,0,0,0,0,0,0,2,2,1,0},
																	{0,1,0,0,0,0,0,2,2,2,1,0},
																	{0,0,1,1,0,2,2,2,1,1,0,0},
																	{0,0,0,0,1,1,1,1,0,0,0,0}};
												
static uint8_t Heart[13][13]={{0,0,1,1,1,0,0,0,1,1,1,0,0},
															{0,1,2,2,2,1,0,1,2,2,2,1,0},
															{1,2,2,2,2,2,1,2,2,2,2,2,1},
															{1,2,0,0,2,2,2,2,2,2,2,2,1},
															{1,2,0,2,2,2,2,2,2,2,2,2,1},
															{1,2,2,2,2,2,2,2,2,2,2,2,1},
															{1,2,0,2,2,2,2,2,2,2,2,2,1},
															{0,1,2,2,2,2,2,2,2,2,2,1,0},
															{0,0,1,2,2,2,2,2,2,2,1,0,0},
															{0,0,0,1,2,2,2,2,2,1,0,0,0},
															{0,0,0,0,1,2,2,2,1,0,0,0,0},
															{0,0,0,0,0,1,2,1,0,0,0,0,0},
															{0,0,0,0,0,0,1,0,0,0,0,0,0}};
															
														
																	
																	
void DrawSprite(uint8_t CharacterMatrix[29][32]);
void LugiaStartup(void);
void LugiaShiftRight(void);
void LugiaShiftLeft(void);
void LugiaShiftRightReturn(void);
void LugiaShiftLeftReturn(void);
void DrawApple(uint8_t Mela[12][11]);
void DrawFries(uint8_t Patatine[15][15]);
void LugiaDespawn(void);
void PokeballOnScreen(void);
void PokeballOffScreen(void);
int LugiaCuddled(void);
void DrawHeart(void);
void DespawnHeart(void);

																	
																	