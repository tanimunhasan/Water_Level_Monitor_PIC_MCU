char wlvl1[3];
int wlvl;
void main(){
ADC_Init();
delay_ms(250);
UART1_Init(9600);
delay_ms(250);

while(1){
wlvl = ADC_Read(0);
delay_ms(100);

IntToSTr(wlvl, wlvl1);
delay_ms(60);
if(UART1_Tx_Idle()==1) {
UART1_Write_Text(wlvl1);
delay_ms(100);
}
}
}