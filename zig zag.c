#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    int x;
    cmpc(0);
    cmpc(3);
    msleep(300);
    
   
    
    //ROBOT GOES STRAIGHT
    while(gmpc(0)<2000)   
        {
        x=gmpc(0);
        motor(0,100);
        motor(3,100);
        printf("location is %i\n",x);    
    }
        cmpc(3);
        //robot turn 90 degree right
    while(gmpc(3)<500)
    {
        x=gmpc(3);
        motor(0,-50);
        motor(3,50);
        printf("location is %i\n",x);    
    }
     //ROBOT GOES STRAIGHT
    cmpc(0);
    cmpc(3);
    msleep(200);
    while(gmpc(0)<5000)   
        {
        x=gmpc(0);
        motor(0,100);
        motor(3,100);
        printf("location is %i\n",x);    

  
    }  
        
    return 0;
}
