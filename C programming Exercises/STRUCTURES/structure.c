#include <stdio.h>

struct carInstance{
	int maxSpeed;
	int maxRPM;
	int torque;
	int horsepower;
	int numberOfGears;
	char name[20];
};

// Looking for the fastest car among the three friends
struct carInstance bestMaxSpeed(struct carInstance a, struct carInstance b, struct carInstance c){
	if(a.maxSpeed >= b.maxSpeed && a.maxSpeed >= c.maxSpeed){
		printf("Fastest car is %s's\n", a.name);
		return a;
	}
	else if (b.maxSpeed >= a.maxSpeed && b.maxSpeed >= c.maxSpeed){
		printf("Fastest car is %s's\n", b.name);
		return b;
	}
	else{
		printf("Fastest car is %s's\n", c.name);
		return c;
	}
}

// Looking for a car with biggest maxRPM
struct carInstance mostRPM(struct carInstance a, struct carInstance b, struct carInstance c){
	if(a.maxRPM >= b.maxRPM && a.maxRPM >= c.maxRPM){
		printf("Most RMP has %s's car\n", a.name);
		return a;
	}
	else if (b.maxRPM >= a.maxRPM && b.maxRPM >= c.maxRPM){
		printf("Most RMP has %s's car\n", b.name);
		return b;
	}
	else{
		printf("Most RMP has %s's car\n", c.name);
		return c;
	}
}

// Looking for a car with most Torque
struct carInstance bestTorque(struct carInstance a, struct carInstance b, struct carInstance c){
	if(a.torque >= b.torque && a.torque >= c.torque){
		printf("Most torque has %s's car\n", a.name);
		return a;
	}
	else if (b.torque >= a.torque && b.torque >= c.torque){
		printf("Most torque has %s's car\n", b.name);
		return b;
	}
	else{
		printf("Most torque has %s's car\n", c.name);
		return c;
	}
}

// Looking for the most powerful car
struct carInstance mostHorses(struct carInstance a, struct carInstance b, struct carInstance c){
	if(a.horsepower >= b.horsepower && a.horsepower >= c.horsepower){
		printf("Most horse has %s's car\n", a.name);
		return a;
	}
	else if (b.horsepower >= a.horsepower && b.horsepower >= c.horsepower){
		printf("Most horse has %s's car\n", b.name);
		return b;
	}
	else{
		printf("Most horse has %s's car\n", c.name);
		return c;
	}
}

// Looking for the car with most gears
struct carInstance mostGears(struct carInstance a, struct carInstance b, struct carInstance c){
	if(a.numberOfGears >= b.numberOfGears && a.numberOfGears >= c.numberOfGears){
		printf("Most gears has %s's car\n", a.name);
		return a;
	}
	else if (b.numberOfGears >= a.numberOfGears && b.numberOfGears >= c.numberOfGears){
		printf("Most gears has %s's car\n", b.name);
		return b;
	}
	else{
		printf("Most gears has %s's car\n", c.name);
		return c;
	}
}

int main(){
	struct carInstance Miha = {200, 150, 300, 500, 6, "Miha"};
	struct carInstance Jaka = {150, 300, 500, 200, 5, "Jaka"};
	struct carInstance Marko = {300, 200, 200, 150, 3, "Marko"};

	struct carInstance fastestCar = bestMaxSpeed(Miha, Jaka, Marko);
	struct carInstance mostRPMCar = mostRPM(Miha, Jaka, Marko);
	struct carInstance bestTorqueCar = bestTorque(Miha, Jaka, Marko);
	struct carInstance mostHorsesCar = mostHorses(Miha, Jaka, Marko);
	struct carInstance mostGearsCar = mostGears(Miha, Jaka, Marko);
}