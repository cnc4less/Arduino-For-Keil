#include "FileGroup.h"

void setup(){
	// put your setup code here, to run once:

}

void loop(){
	// put your main code here, to run repeatedly:
	
}

//*****************MAIN******************//
int main(void)
{
	Delay_Init();
	ADCx_Init(ADC1);
//	ADCx_DMA_Init();
	setup();
	for(;;)loop();
}
