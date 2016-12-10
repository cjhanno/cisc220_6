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
unsigned int sleep(unsigned int 0.02); // for sleep 20 millisec


int main() {

return 0;
}

void *ai_cars(void *ai) {
	srand ((unsigned)time(NULL));
	int flag = 0;
	while (flag == 0) 
	{
	int randy = rand() % 100 + 1;
	usleep(randy);
	*ai++;
	}
}

void *human_car(void *human){
	char c = getchar();
	if (char == '\n')
	*human++;
}

void *draw(void *car) {
	//draw start
	long cid;
	int white;
	cid = (long)car;
	printf("|-> %40s\n","# Lane%ld #\n", cid);
	int flag = 0;
	while (flag == 0) 
	{
	sleep()	// sleep 20 millisec // 5 fps
	system("clear");//clear screen
	white = (40 - *car); 
	printf("~%d\n","|-> %s\n", *car, white);	//draw
 	if (car1 == 40 |car2 == 40 | car3 == 40 | car4 == 40 | car5 == 40) {
		break;
		if (car1 == 40){
			printf("You Won, Congratulations!\n"); }
		else if (car2 == 40){
                        printf("Car #2 Won!\n"); }
		else if (car3 == 40){
                        printf("Car #3 Won!\n"); }
		else if (car4 == 40){
                        printf("Car #4 Won!\n"); }
		else {
                        printf("Car #5 Won!\n"); }                
	}
}
