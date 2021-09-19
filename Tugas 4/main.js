function setup(){
	pinMode(0, INPUT);
	pinMode(1, OUTPUT);
}

function loop(){
	var motion = digitalRead(0);
	Serial.println(motion);
	
	if (motion == 1023){
		digitalWrite(1, HIGH)
	}
	else {
		digitalWrite(1, LOW);
	}
}
