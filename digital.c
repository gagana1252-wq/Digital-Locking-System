#include <reg51.h>

sbit buzzer = P2^0;
sbit rs = P3^0;
sbit rw = P3^1;
sbit en = P3^2;

char password[4] = {'1','2','3','4'};
char input[4];

void delay()
{
    int i,j;
    for(i=0;i<100;i++)
    for(j=0;j<1000;j++);
}

void lcd_cmd(char cmd)
{
    P1 = cmd;
    rs = 0;
    rw = 0;
    en = 1;
    delay();
    en = 0;
}

void lcd_data(char dat)
{
    P1 = dat;
    rs = 1;
    rw = 0;
    en = 1;
    delay();
    en = 0;
}

void lcd_string(char *str)
{
    while(*str)
    {
        lcd_data(*str++);
    }
}

void lcd_init()
{
    lcd_cmd(0x38);
    lcd_cmd(0x0C);
    lcd_cmd(0x06);
    lcd_cmd(0x01);
}

void main()
{
    int i;
    lcd_init();

    lcd_string("Enter Password");

    for(i=0;i<4;i++)
    {
        input[i] = '1';   
        delay();
    }

    for(i=0;i<4;i++)
    {
        if(input[i] != password[i])
        {
            lcd_cmd(0x01);
            lcd_string("Access Denied");
            buzzer = 1;
            while(1);
        }
    }

    lcd_cmd(0x01);
    lcd_string("Access Granted");
    buzzer = 0;

    while(1);
}
