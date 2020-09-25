

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}
  double Termistor(int analogOkuma){

 double sicaklik;
 sicaklik = log(((10240000 / analogOkuma) - 10000));
 sicaklik = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * sicaklik * sicaklik)) * sicaklik);
 sicaklik = sicaklik - 273.15;
 return sicaklik;
}


// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int deger = analogRead(A0);
  double sicaklik = Termistor(deger);
  Serial.println(sicaklik);

  delay(500);
}
