#define BuscarLed 1
#define BuscarNumero 2

int Led  = 0;
int Dato = 0;
int EstadoBusqueda = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Buenos Dias Estrellitas C:");
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()){
    char letra = Serial.read()
    Serial.print(letra);
    if (letra == "H"){
      EstadoBusqueda = BuscarNumero;
    }
    else if (letra == "D"){
      EstadoBusqueda = BuscarNumero;  
    }
    else if(letra == "."){
      analogWrite(Led,Dato);
      Serial.print(Led);
      Serial.print(" dato : ");
      Serial.println(Dato);
      Led  = 0;
      Dato = 0;
    }
    else if(letra>='0' && letra <='9'){
      int NumeroActual = int(letra - '0');
      if (EstadoBusqueda == BuscarLed){
        Led = Led * 10 + NumeroActual;
      }
      else if (EstadBusqueda == BuscarNumero){
        Dato = Dato * 10 + NumeroActual;
      }
    }
    }
}
