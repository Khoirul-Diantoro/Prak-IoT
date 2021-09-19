function setup(){
	pinMode(0, INPUT);
	pinMode(1, OUTPUT);
}

function loop(){
	var motion = digitalRead(0);
	Serial.println(motion);
	
	if (motion == 1023){ 
		digitalWrite(1, HIGH) // jika terjadi gerakan dari cursor mouse maka akan menyalakan lampu.
	}
	else {
		digitalWrite(1, LOW); // jika tidak terdapat gerakan maka lampu akan mati.
	}
}
