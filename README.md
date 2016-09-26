## EE_180_Activity_1

Groupwork:  With your group, create a c or c++ program that sets the ADC to right adjust. Attach a 10kohm to 25kohm potentiometer on ADC channel 3 and an LED on PORTD pin 2. Make your program such that the LED is if and only if when the resistance of the of the potentiometer is between 4kohms to 7kohms. Transmit via uart (9600, 8n1)also the adc value followed by a newline. 

**BONUS** : transmit the resistance value via UART    

You are not allowed to use existing functions except for the delay function.     
Deadline Sept 27, 2016. Defend by group.

**Task List 
- [ ] Set ADC, UART, PORTD *since digital pin 2 is in PORTD* and other Registers
- [ ] Set ADC to right adjust *ADLAR = 0*
- [ ] Transmit via UART (9600 , 8n1) *9600 baud rate and 8bit data, no parity bit, 1 stop bit
**


