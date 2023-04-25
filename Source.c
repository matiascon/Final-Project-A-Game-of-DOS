#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

typedef struct card_s {
char color[10];
int value;
char action[15];
struct card_s *pt;
} card;
