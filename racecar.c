#include <stdio.h>
#include <stdlib.h>
#include <pthread>
#include <unistd.h>
#include <time.h>


//cisc 220 assignment 6

//author: Connor Hannough

//global var

#define NUM_THREADS 6

int car1=0, car2=0, car3=0, car4=0, car5=0

int main() 
{

return 0;
}

void *ai_cars(void *ai) 
{
	srand ((unsigned)time(NULL));
	int flag = 0;
	while (flag == 0) 
	{
	int randy = rand() % 100 + 1;
	usleep(randy);
	*ai++;
	}
}

void *human_car(void *human)
{
	char c = getchar();
	if (char == '\n')
	*human++;
}

void *draw(void *car) 
{
	//draw start
	long cid;
	cid = (long)car;
	printf("|-> %40s\n","# Lane%ld #\n", cid);
	int flag = 0;
	while (flag == 0) 
	{
		// sleep 20 millisec // 5 fps
		//clear screen
		//draw
 	// if any car == 40
		//break
		//print winner
	}
}
