// TEST.ino
int a;
int b;


int RightMotorA = 5;	int RightMotorB = 6;
int LeftMotorA = 7;		int LeftMotorB = 8; 




void setup() {
	Serial.begin(9600);
	pinMode(2, INPUT);
	pinMode(3, INPUT);
	pinMode(RightMotorA, OUTPUT);	pinMode(RightMotorB, OUTPUT);	
	pinMode(LeftMotorA, OUTPUT);	pinMode(LeftMotorB, OUTPUT);
}

void loop() {
	a = digitalRead(2);
	b = digitalRead(3);
	Serial.print("A: ");
	Serial.print(a);
	Serial.print("  B: ");
	Serial.println(b);
	


		if(a == 1 && b == 1 ){
			digitalWrite(RightMotorA, LOW);		digitalWrite(RightMotorB, LOW);
			digitalWrite(LeftMotorA, LOW);		digitalWrite(LeftMotorB, LOW);
		}
		else if(a == 0 && b == 0){
			digitalWrite(RightMotorA, HIGH);	digitalWrite(RightMotorB, LOW);
			digitalWrite(LeftMotorA, HIGH);		digitalWrite(LeftMotorB, LOW);
		}
		else if(a == 1 && b == 0){
			digitalWrite(RightMotorA,HIGH);		digitalWrite(RightMotorB, LOW);
			digitalWrite(LeftMotorA, LOW);		digitalWrite(LeftMotorB, HIGH);

		}
		else if(a == 0 && b == 1){
			digitalWrite(RightMotorA, LOW);		digitalWrite(RightMotorB, HIGH);
			digitalWrite(LeftMotorA, HIGH);		digitalWrite(LeftMotorB, LOW);

		}
		
}

// 	if(a == 1 && b == 1){
// 			digitalWrite(RightMotorA, HIGH);	digitalWrite(RightMotorB, LOW);
// 			digitalWrite(LeftMotorA, HIGH);		digitalWrite(LeftMotorB, LOW);
// 		}
// 		if(a == 0 && b == 0){
// 			digitalWrite(RightMotorA, HIGH);	digitalWrite(RightMotorB, LOW);
// 			digitalWrite(LeftMotorA, HIGH);		digitalWrite(LeftMotorB, LOW);
// 		}
// 		if(a == 1 && b == 0){
// 			digitalWrite(RightMotorA, LOW);	digitalWrite(RightMotorB, HIGH);
// 			digitalWrite(LeftMotorA, HIGH);		digitalWrite(LeftMotorB, LOW);
// 		}
// 		if(a == 0 && b == 1){
// 			digitalWrite(RightMotorA, HIGH);	digitalWrite(RightMotorB, LOW);
// 			digitalWrite(LeftMotorA, LOW);		digitalWrite(LeftMotorB, HIGH);
// 		}
// }

