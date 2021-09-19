function setup(){
	pinMode(0, INPUT);
	pinMode(1, OUTPUT); // output bernilai HIGH dan LOW
}

function loop(){
	var motion = digitalRead(0); // untuk mendeklarasikan motion sebagai inputan.
	Serial.println(motion); // mengeluarkan data motion.
	
	if (motion == 1023){ 
		digitalWrite(1, HIGH) // jika terjadi gerakan dari cursor mouse maka akan menyalakan lampu.
	}
	else {
		digitalWrite(1, LOW); // jika tidak terdapat gerakan maka lampu akan mati.
	}
}
