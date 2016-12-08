# cisc220_6
cisc 220 assignment 6 public repository # car racing game

//global var

int car1=0, car2=0, car3=0, car4=0, car5=0;

void* ai_cars (void* args) // args == car#
{
//infinite loop
//each iteration 
	1 - generate rangom
	2 - usleep random
	3 - increment car i ++ (args , car#)
}

void* human_car (void* args) 
{
	char c = getchar()
		if (char == '\n' )
			car1++;
}

void* draw(void* args)
{
//draw start
//infinite loop
	//sleep 20 millisec 	5 fps
	//clear screen
	//draw  -- ** hint - use system() to draw
//break if any car == 40 // print winner
}


// rc = pthread_create(threads +t, Null, car_thread 
	// call 4 times for ai
	// call 1 for human
	// call 1 to draw 
