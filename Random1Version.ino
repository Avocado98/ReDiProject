long randOn = 0;                 
long randOff = 0;                 
void setup()                      
{
 randomSeed (analogRead (0));    
 pinMode(13, OUTPUT);            
 pinMode(12, OUTPUT);        
 pinMode(11, OUTPUT);        
 pinMode(10, OUTPUT);        
 pinMode(9, OUTPUT);        
}

void loop()                      
{
 digitalWrite = random( 10-130);
 randOn = random (50, 1000);    
 randOff = random (50,1000 );    
   digitalWrite(13, HIGH);   
   delay(randOn);                
   digitalWrite(13, LOW);    
   delay(randOff);               
   digitalWrite(12, HIGH);   
   delay(randOn);                
   digitalWrite(12, LOW);    
   delay(randOff);               
   digitalWrite(11, HIGH);   
   delay(randOn);                
   digitalWrite(11, LOW);    
   delay(randOff);               
   digitalWrite(10, HIGH);   
   delay(randOn);                
   digitalWrite(10, LOW);    
   delay(randOff);              
   digitalWrite(9, HIGH);   
   delay(randOn);                
   digitalWrite(9, LOW);    
   delay(randOff);               

   
}
