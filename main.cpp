#include "PinNames.h"
#include "mbed.h"

// Adjust pin name to your board specification.
// You can use LED1/LED2/LED3/LED4 if any is connected to PWM capable pin,
// or use any PWM capable pin, and see generated signal on logical analyzer.
PwmOut led(PWM_OUT);

int main()
{
    
    // specify period first
    int array[1] = {1};
    int array2[1] = {2};
    int array3[1] = {0};
    int i = 0;
    while(1){
        ThisThread::sleep_for(2000);
        if(array3[i] == 0){
            led.period(0.05f);      // 4 second period
            led.write(0.10f);
        }
        if(array3[i] == 1){
            led.period(0.05f);      // 4 second period
            led.write(0.50f);
        }
        if(array3[i] == 2){
            led.period(0.05f);      // 4 second period
            led.write(0.90f);
        }
        ThisThread::sleep_for(2000);
        if(array[i] == 0){
            led.period(0.05f);      // 4 second period
            led.write(0.10f);
        }
        if(array[i] == 1){
            led.period(0.05f);      // 4 second period
            led.write(0.50f);
        }
        if(array[i] == 2){
            led.period(0.05f);      // 4 second period
            led.write(0.90f);
        }
        ThisThread::sleep_for(2000);
        if(array2[i] == 0){
            led.period(0.05f);      // 4 second period
            led.write(0.10f);
        }
        if(array2[i] == 1){
            led.period(0.05f);      // 4 second period
            led.write(0.50f);
        }
        if(array2[i] == 2){
            led.period(0.05f);      // 4 second period
            led.write(0.90f);
        }
        
    }
    //led.period(0.05f);      // 4 second period
    //led.write(0.80f);      // 50% duty cycle, relative to period
    //led = 0.5f;          // shorthand for led.write()
    //led.pulsewidth(2);   // alternative to led.write, set duty cycle time in seconds
    
}
