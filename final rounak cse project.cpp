 /*-----------------------------------------------------------Welcome to our laptop repair shop-------------------------------------------------------------------- */
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<string.h>
main()
{  
   
   
char UserName[20] = "rivu";char user[20];
int i,p=0;
printf("Please enter your username: \n");
scanf("%s", user);
printf("Please enter your password: \n");
char PassWord[20] ="rivu";
char pass[20];
char c;
for(i=0;i<4;i++)
{
	c=getch();
	pass[i]=c;
	c='*';
	printf("%c",c);
}
 
    for(i=0;i<strlen(PassWord);i++)
    {
    if (UserName[i]==user[i] && PassWord[i]==pass[i]) 
     {
     p=p+1;
     }
	}
    if(p==strlen(PassWord) && p==strlen(UserName))
    {
     printf("\n welcome");
    


   
    A:
	int choice1,choice2,choice3;
	int price_of_display,price_of_keyboard,price_of_hard_disk,price_of_graphicscard;
	int size,ram;
	 printf("\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~WELCOME TO OUR LAPTOP REPAIR SHOP~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("\n");
	printf("\n\t~~~~~~~~~~~~~~~~~~~~The name of various type of laptop company which repair here~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("\n 1=Lenovo");
	printf("\n 2=Dell");
	printf("\n 3=HP");
	printf("\n 4=Macbook");
	printf("\n 5=Asus");
	printf("\n 6=Sony");
	printf("\n");
	printf("\n\t Enter your choice which company laptop you want to repair:");
	scanf("%d",&choice1);
	switch(choice1)
	{
		case 1:
			
			{   printf("\n");
			    printf("\t\t                       -----you want to repair lenovo laptop--------");
		     	printf("\n 1=Display");
		    	printf("\n 2=keyboard");
			    printf("\n 3=hard_disk");
			    printf("\n 4=graphics_card");
			    printf("\n 5=Memory Ram");
			    printf("\n 6=touchpad");
			    printf("\n 7=camera");
			    printf("\n 8=speaker");
			    printf("\n 9=processor");
			    printf("\n 10=battery");
			    printf("\n");
			    printf("\n\t Enter which part you want to repair:");
		    	scanf("%d",&choice2);
			    switch(choice2)
			    {
			    case 1:
			    	printf("\n");
			    	printf("\n\t                      .....You want to repair display......\n");
			    	printf("\n   14,15.6,17,18 inch inch IPS hd display are available here to repair\n");
			    	printf("\n press 1 for 14 inch display");
			    	printf("\n press 2 for 15.6 inch display");
			    	printf("\n press 3 for 17 inch display");
			    	printf("\n press 4 for 18 inch display");
					printf("\n\t which size of display you want to repair: ");
					scanf("%d",&size);
					if(size==1)
					{
						printf("\n");
						printf("\n\t The price to repair this 14 inch IPS hd display is 10200 ");
						printf(" \n thank you visit again");
					}
					else if(size==2)
					{
						printf("\n");
						printf("\n\t The price to repair this 15.6 inch display is 11450 ");
						printf(" \n thank you visit again");
					}
					else if(size==3)
					{
						printf("\n");
						printf("\n\t The price to repair this 17 inch display is 12500 ");
						printf(" \n thank you visit again");
					}
					else if(size==4)
					{
						printf("\n");
						printf("\n\t The price to repair this 18 inch display is 13500 ");
						printf(" \n thank you visit again");
					}
					else
					{
						printf("\n\t ,,,, you have enter a wrong input which is not available in this shop,,,,\n");
						goto A;
						printf("\n");
					}
					break;
				case 2:
					printf("\n");
					printf("\t                     .....You want to repair keyboard...... ");
					printf("\n\t 3 type of keyboard are available here ");
					printf("\n press 1 to repair with_numberpad keyboard");
					printf("\n press 2 to repair without_numberpad keyboard");
					printf("\n press 3 to repair azerty_keyboard");
					scanf("%d",&size);
					if(size==1)
					{
						printf("\n");
						printf("\n\t The price to repair with_numberpad keyboard is 750");
						printf(" \n thank you visit again");
					}
					else if(size==2)
					{
						printf("\n");
						printf("\n\t The price to repair without_numberpad keyboard is 650");
						printf(" \n thank you visit again");
					}
					else if(size==3)
					{
						printf("\n");
						printf("\n\t The price to repair azerty keyboard is 850 ");
						printf(" \n thank you visit again");
					}
					else
					{
						printf("\n");
						printf("\n\t ,,,, you have enter a wrong input which is not available in this shop,,,,\n");
						goto A;
					}
					break;
				case 3:
					printf("\n");
					printf("\t                     .....You want to repair harddisk.......");
				    printf("\n\t 500 GB,1 TB,2 TB size harddisk are available here to repair ");
				    printf("\n\t Enter anyne which you want to repair:");
				    scanf("%d",&size);
				    if(size==500)
				    {
				    	printf("\n");
				    	printf("\n\t The price to repair 500 GB hard_disk is 4500 ");
				    	printf(" \n thank you visit again");
					}
					else if(size==1)
					{
						printf("\n");
						printf("\n\t The price to repair 1 TB hard_disk is 6000 ");
						printf(" \n thank you visit again");
					}
					else if(size==2)
					{
						printf("\n");
						printf("\n\t The price to repair 2 TB  hard_disk is 9500 ");
						printf(" \n thank you visit again");
					}
					else
					{
						printf("\n");
						printf("\n\t ,,,, you have enter a wrong input which is not available in this shop,,,,\n");
						goto A;
					}
					break;
				case 4:
					printf("\n");
					printf("\t                     ....You want to repair graphics_card....");
					printf("\n\t 2 GB nvdia and amd radeon graphics are available here ");
					printf("\n press 1 to repair 2 GB nvdia geforce graphics card ");
					printf("\n press 2 to repair 2 GB amd radeon graphics card ");
					scanf("%d",&size);
					if(size==1)
					{
						printf("\n");
						printf("\n \t The price to repair 2 GB nvdia geforce graphics card is 12000 ");
					}
					else if(size==2)
					{
						printf("\n");
						printf("\n\t The price to repair 2 GB AMD radeon graphics card is 10500 ");
					}
					else
					{
						printf("\n");
						printf("\n     ,,,, you have enter a wrong input which is not available in this shop,,,,");
					}
					break;
				case 5:
					printf("\n");
				    printf("\n\t                     ........you want to repair memory_ram......");
				    //all memory_ram are in G.B unit
				    printf("\n");
				    printf("\n   4,8 and 16 G.B ram are available here" );
				    printf("\n");
				    printf("\n\t Which size of memory_ram you want to repair: ");
				    scanf("%d",&size);
				    if(size==4)
				    {
				    	printf("\n");
				    	printf("\n\tThe price to repair this 4 G.B ram is 4500");
					}
					else if(size==8)
					{
						printf("\n\tThe price to repair this 8 G.B ram is 6500");
					}
					else if(size==16)
					{
						printf("\n\tThe price to repair this 16 G.B ram is 10500");
					}
					else
					{printf("\n\t,,,, you have enter a wrong input which is not available in this shop,,,,");
					}
					break;
				case 6:
					printf("\n");
					printf("\n\t                 ............you want to repair touchpad............");
					//all touchpad size are in sq cm unit
					printf("\n  20,30,45 sq.cm are repaired here");
					printf("\n");
					printf("\n Enter the size you want to repair here:");
					scanf("%d",&size);
					if (size==20)
					{
						printf("\n\t The price to repair this is 1500 ");
					}
					else if (size==30)
					{
						printf("\n\t the price to repair this is 2000");
					}
					else if (size==45)
					{
						printf("\n\t the price to repair this is 3500");
					}
					else
					{
						printf("\n\t,,,,,,,,  you have enter a wrong input which is not available in this shop,,,,,,,,,\n");
						goto A;
					}
				    break;
				case 7:
					printf("\n");
					printf("\n\t               .............you want to repair camera................");
					//all cmera are in mega pixel unit
					printf("\n 2,5,8,13 mp camera are available here to repair\n");
					printf("\n Enter the camera you want to repair: ");
					scanf("%d",&size);
					if(size==2)
					{
						printf("\n\t the price to repair this is 750");
					}
					else if(size==5)
					{
						printf("\n\t the price to repair this is 1500 ");
					}
					else if(size==8)
					{
						printf("\n\t the price to repair this is 3000 ");
					}
					else if(size==13)
					{
						printf("\n\t the price to repair this is 5000  ");
					}
					else
					{
						printf("\n \t ,,,,,,,,,,,you have enter a wrong input which is not available in this shop,,,,,,,,,,,,,, ");
					}
					break;
				case 8:
					printf("\n");
					printf("\n\t                .................you want to repair speaker...................");
					printf("\n\t jbl,bose,sony speaker are available to put in your laptop..");
					printf("\n press 1 for JBL");
					printf("\n press 2 for sony");
					printf("\n press 3 for bose");
					printf("\n\t choose any of them you want to put in your laptop:");
					scanf("%d",&size);
					if (size==1)
					{
						printf("\n\t the price to repair this is 4200 ");
					}
					else if (size==2)
					{
						printf("\n\t the price to repair this is 6200 ");
					}
					else if(size==3)
					{
						printf("\n\t the price to repair this is 4500 ");
					}
					else
					{
						printf("\n\t     ,,,,,,,,,,,you have enter a wrong input which is not available in this shop,,,,,,,,,,,,,, ");
						goto A;
					}
					break;
				case 9:
				    printf("\n");
					printf("\n\t               ...................you want to repair processor.................");
					printf("\n\t intel,AMD,ARM processor are available here to repair ");
					printf("\n\t press 1 to repair with intel processor ");
					printf("\n\t press 2 to repair with AMD processor ");
					printf("\n\t press 3 to repair with ARM processor ");
					printf("\n\t Choose any of them you want to repair in your laptop:");
					scanf("%d",&size);
					if(size==1)
					{   
						printf("\n");
						printf("\n\t The price to repair this intel processor is 14800 ");
					}
						else if(size==2)
						{
						printf("\n");
						printf("\n\t The price to repair this AMD radeon processor 12600 ");
					    }
					    else if(size==3)
					    {
					    	printf("\n");
					    	printf("\n\t The price to repair this ARM processor 10500 ");
						}
						else
						{
							printf("\n\t   ,,,, you have enter a wrong input which is not available in this shop,,,,\n");
							goto A;
						}
						break;
					case 10:
					    printf("\n");
						printf("\n\t           .......................you want to repair battery........................ ");
						printf("\n\t 4050,6000,8000 mah size battery are available in this shop ");
						printf("\n\t press 1 to repair with 4050 mah battery ");
					    printf("\n\t press 2 to repair with 6000 mah battery ");
					    printf("\n\t press 3 to repair with 8000 mah battery ");
						printf("\n\t Choose any of them you want to repair in your laptop:");
						scanf("%d",&size);
						if(size==1)
						{
							printf("\n");
							printf("\n\t The price to repair this is 5000 ");
						}
						else if(size==2)
						{
							printf("\n");
							printf("\n\t The price to repair this is 6700 ");
						}
						else if(size==3)
						{
							printf("\n");
							printf("\n\t The price to repair this is 8800 ");
						}
						else
						{
							printf("\n\t     ,,,, you have enter a wrong input which is not available in this shop,,,, ");
						    goto A;
						}
						break;
							
				}
			
			}
			goto A;
			printf("\n\tIF you want to buy anything else then choose:");
			break;
		case 2 :
			{
				B:
				printf("\n");
			    printf("\t\t                       -----you want to repair Dell laptop--------");
		     	printf("\n 1=Display");
		    	printf("\n 2=keyboard");
			    printf("\n 3=hard_disk");
			    printf("\n 4=graphics_card");
			    printf("\n 5=Memory Ram");
			    printf("\n 6=touchpad");
			    printf("\n 7=camera");
			    printf("\n 8=speaker");
			    printf("\n 9=processor");
			    printf("\n 10=battery");
			    printf("\n");
			    printf("\n\t Enter which part you want to repair:");
				scanf("%d",&choice2);
				switch(choice2)
				
				{
				case 1:
					printf("\n");
			    	printf("\n\t                      .....You want to repair display......\n");
			    	printf("\n   14,15.6,17,18 inch inch IPS hd display are available here to repair\n");
					printf("\n\t which size of display you want to repair: ");
					scanf("%d",&size);
					if(size==14)
					{
						printf("\n");
						printf("\n\t The price to repair this 14 inch IPS hd display is 9800 ");
					}
					else if(size==15.6)
					{
						printf("\n");
						printf("\n\t The price to repair this 15.6 inch display is 12450 ");
					}
					else if(size==17)
					{
						printf("\n");
						printf("\n\t The price to repair this 17 inch display is 11500 ");
					}
					else if(size==18)
					{
						printf("\n");
						printf("\n\t The price to repair this 18 inch display is 12500 ");
					}
					else
					{
						printf("\n\t ,,,, you have enter a wrong input which is not available in this shop,,,,");
						goto B;
					}
					break;
				case 2:
					printf("\n");
					printf("\t                     .....You want to repair keyboard...... ");
					printf("\n\t 3 type of keyboard are available here ");
					printf("\n press 1 to repair with_numberpad keyboard");
					printf("\n press 2 to repair without_numberpad keyboard");
					printf("\n press 3 to repair azerty_keyboard");
					scanf("%d",&size);
					if(size==1)
					{
						printf("\n");
						printf("\n\t The price to repair with_numberpad keyboard is 850");
					}
					else if(size==2)
					{
						printf("\n");
						printf("\n\t The price to repair without_numberpad keyboard is 975");
					}
					else if(size==3)
					{
						printf("\n");
						printf("\n\t The price to repair azerty keyboard is 1075 ");
					}
					else
					{
						printf("\n");
						printf("\n\t ,,,, you have enter a wrong input which is not available in this shop,,,,");
					    goto B;
					}
					break;
				case 3:
					printf("\n");
					printf("\t                     .....You want to repair harddisk.......");
				    printf("\n\t 500 GB,1 TB,2 TB size harddisk are available here to repair ");
				    printf("\n\t Enter anyne which you want to repair:");
				    scanf("%d",&size);
				    if(size==500)
				    {
				    	printf("\n");
				    	printf("\n\t The price to repair 500 GB hard_disk is 4750 ");
					}
					else if(size==1)
					{
						printf("\n");
						printf("\n\t The price to repair 1 TB hard_disk is 6250 ");
					}
					else if(size==2)
					{
						printf("\n");
						printf("\n\t The price to repair 2 TB  hard_disk is 9750 ");
					}
					else
					{
						printf("\n");
						printf("\n\t ,,,, you have enter a wrong input which is not available in this shop,,,,");
					    goto B;
					}
					break;
				case 4:
					printf("\n");
					printf("\t                     ....You want to repair graphics_card....");
					printf("\n\t 2 GB nvdia and amd radeon graphics are available here ");
					printf("\n press 1 to repair 2 GB nvdia geforce graphics card ");
					printf("\n press 2 to repair 2 GB amd radeon graphics card ");
					scanf("%d",&size);
					if(size==1)
					{
						printf("\n");
						printf("\n \t The price to repair 2 GB nvdia geforce graphics card is 12350 ");
					}
					else if(size==2)
					{
						printf("\n");
						printf("\n\t The price to repair 2 GB AMD radeon graphics card is 12500 ");
					}
					else
					{
						printf("\n");
						printf("\n     ,,,, you have enter a wrong input which is not available in this shop,,,,");
					    goto B;
					}
					break;
				case 5:
					printf("\n");
				    printf("\n\t                     ........you want to repair memory_ram......");
				    //all memory_ram are in G.B unit
				    printf("\n");
				    printf("\n   4,8 and 16 G.B ram are available here" );
				    printf("\n");
				    printf("\n\t Which size of memory_ram you want to repair: ");
				    scanf("%d",&size);
				    if(size==4)
				    {
				    	printf("\n");
				    	printf("\n\tThe price to repair this 4 G.B ram is 4500");
					}
					else if(size==8)
					{
						printf("\n\tThe price to repair this 8 G.B ram is 6500");
					}
					else if(size==16)
					{
						printf("\n\tThe price to repair this 16 G.B ram is 10500");
					}
					else
					{printf("\n\t,,,, you have enter a wrong input which is not available in this shop,,,,");
					}
					break;
				case 6:
					printf("\n");
					printf("\n\t                 ............you want to repair touchpad............");
					//all touchpad size are in sq cm unit
					printf("\n  20,30,45 sq.cm are repaired here");
					printf("\n");
					printf("\n Enter the size you want to repair here:");
					scanf("%d",&size);
					if (size==20)
					{
						printf("\n\t The price to repair this is 1500 ");
					}
					else if (size==30)
					{
						printf("\n\t the price to repair this is 2000");
					}
					else if (size==45)
					{
						printf("\n\t the price to repair this is 3500");
					}
					else
					{
						printf("\n\t,,,,,,,,  you have enter a wrong input which is not available in this shop,,,,,,,,,");
					}
				    break;
				case 7:
					printf("\n");
					printf("\n\t               .............you want to repair camera................");
					//all cmera are in mega pixel unit
					printf("\n 2,5,8,13 mp camera are available here to repair\n");
					printf("\n Enter the camera you want to repair: ");
					scanf("%d",&size);
					if(size==2)
					{
						printf("\n\t the price to repair this is 750");
					}
					else if(size==5)
					{
						printf("\n\t the price to repair this is 1500 ");
					}
					else if(size==8)
					{
						printf("\n\t the price to repair this is 3000 ");
					}
					else if(size==13)
					{
						printf("\n\t the price to repair this is 5000  ");
					}
					else
					{
						printf("\n \t ,,,,,,,,,,,you have enter a wrong input which is not available in this shop,,,,,,,,,,,,,, ");
					}
					break;
				case 8:
					printf("\n");
					printf("\n\t                .................you want to repair speaker...................");
					printf("\n\t jbl,bose,sony speaker are available to put in your laptop..");
					printf("\n press 1 for JBL");
					printf("\n press 2 for sony");
					printf("\n press 3 for bose");
					printf("\n\t choose any of them you want to put in your laptop:");
					scanf("%d",&size);
					if (size==1)
					{
						printf("\n\t the price to repair this is 4200 ");
					}
					else if (size==2)
					{
						printf("\n\t the price to repair this is 6200 ");
					}
					else if(size==3)
					{
						printf("\n\t the price to repair this is 4500 ");
					}
					else
					{
						printf("\n\t     ,,,,,,,,,,,you have enter a wrong input which is not available in this shop,,,,,,,,,,,,,, ");
					}
					break;
				case 9:
				    printf("\n");
					printf("\n\t               ...................you want to repair processor.................");
					printf("\n\t intel,AMD,ARM processor are available here to repair ");
					printf("\n\t press 1 to repair with intel processor ");
					printf("\n\t press 2 to repair with AMD processor ");
					printf("\n\t press 3 to repair with ARM processor ");
					printf("\n\t Choose any of them you want to repair in your laptop:");
					scanf("%d",&size);
					if(size==1)
					{   
						printf("\n");
						printf("\n\t The price to repair this intel processor is 14800 ");
					}
						else if(size==2)
						{
						printf("\n");
						printf("\n\t The price to repair this AMD radeon processor 12600 ");
					    }
					    else if(size==3)
					    {
					    	printf("\n");
					    	printf("\n\t The price to repair this ARM processor 10500 ");
						}
						else
						{
							printf("\n\t   ,,,, you have enter a wrong input which is not available in this shop,,,,");
						}
						break;
					case 10:
					    printf("\n");
						printf("\n\t           .......................you want to repair battery........................ ");
						printf("\n\t 4050,6000,8000 mah size battery are available in this shop ");
						printf("\n\t press 1 to repair with 4050 mah battery ");
					    printf("\n\t press 2 to repair with 6000 mah battery ");
					    printf("\n\t press 3 to repair with 8000 mah battery ");
						printf("\n\t Choose any of them you want to repair in your laptop:");
						scanf("%d",&size);
						if(size==1)
						{
							printf("\n");
							printf("\n\t The price to repair this is 5000 ");
						}
						else if(size==2)
						{
							printf("\n");
							printf("\n\t The price to repair this is 6700 ");
						}
						else if(size==3)
						{
							printf("\n");
							printf("\n\t The price to repair this is 8800 ");
						}
						else
						{
							printf("\n\t     ,,,, you have enter a wrong input which is not available in this shop,,,, ");
						}
						break;
			    }
		    }
		    break;
		case 3:
			
		    	{
		    	    
		        c:
				printf("\n");
			    printf("\t\t                       -----you want to repair HP laptop--------");
		     	printf("\n 1=Display");
		    	printf("\n 2=keyboard");
			    printf("\n 3=hard_disk");
			    printf("\n 4=graphics_card");
			    printf("\n 5=Memory Ram");
			    printf("\n 6=touchpad");
			    printf("\n 7=camera");
			    printf("\n 8=speaker");
			    printf("\n 9=processor");
			    printf("\n 10=battery");
			    printf("\n");
			    printf("\n\t Enter which part you want to repair:");
				scanf("%d",&choice2);
				
				switch(choice2)
				
				{
				case 1:
					printf("\n");
			    	printf("\n\t                      .....You want to repair display......\n");
			    	printf("\n   14,15.6,17,18 inch inch IPS hd display are available here to repair\n");
					printf("\n\t which size of display you want to repair: ");
					scanf("%d",&size);
					if(size==14)
					{
						printf("\n");
						printf("\n\t The price to repair this 14 inch IPS hd display is 9800 ");
					}
					else if(size==15.6)
					{
						printf("\n");
						printf("\n\t The price to repair this 15.6 inch display is 12450 ");
					}
					else if(size==17)
					{
						printf("\n");
						printf("\n\t The price to repair this 17 inch display is 11500 ");
					}
					else if(size==18)
					{
						printf("\n");
						printf("\n\t The price to repair this 18 inch display is 12500 ");
					}
					else
					{
						printf("\n\t ,,,, you have enter a wrong input which is not available in this shop,,,,");
					    goto c;
					}goto c;
					break;
				case 2:
					printf("\n");
					printf("\t                     .....You want to repair keyboard...... ");
					printf("\n\t 3 type of keyboard are available here ");
					printf("\n press 1 to repair with_numberpad keyboard");
					printf("\n press 2 to repair without_numberpad keyboard");
					printf("\n press 3 to repair azerty_keyboard");
					scanf("%d",&size);
					if(size==1)
					{
						printf("\n");
						printf("\n\t The price to repair with_numberpad keyboard is 850");
					}
					else if(size==2)
					{
						printf("\n");
						printf("\n\t The price to repair without_numberpad keyboard is 975");
					}
					else if(size==3)
					{
						printf("\n");
						printf("\n\t The price to repair azerty keyboard is 1075 ");
					}
					else
					{
						printf("\n");
						printf("\n\t ,,,, you have enter a wrong input which is not available in this shop,,,,");
					    goto c;
					}goto c;
					break;
				case 3:
					printf("\n");
					printf("\t                     .....You want to repair harddisk.......");
				    printf("\n\t 500 GB,1 TB,2 TB size harddisk are available here to repair ");
				    printf("\n\t Enter anyne which you want to repair:");
				    scanf("%d",&size);
				    if(size==500)
				    {
				    	printf("\n");
				    	printf("\n\t The price to repair 500 GB hard_disk is 4750 ");
					}
					else if(size==1)
					{
						printf("\n");
						printf("\n\t The price to repair 1 TB hard_disk is 6250 ");
					}
					else if(size==2)
					{
						printf("\n");
						printf("\n\t The price to repair 2 TB  hard_disk is 9750 ");
					}
					else
					{
						printf("\n");
						printf("\n\t ,,,, you have enter a wrong input which is not available in this shop,,,,");
					    goto c;
					}goto c;
					break;
				case 4:
					printf("\n");
					printf("\t                     ....You want to repair graphics_card....");
					printf("\n\t 2 GB nvdia and amd radeon graphics are available here ");
					printf("\n press 1 to repair 2 GB nvdia geforce graphics card ");
					printf("\n press 2 to repair 2 GB amd radeon graphics card ");
					scanf("%d",&size);
					if(size==1)
					{
						printf("\n");
						printf("\n \t The price to repair 2 GB nvdia geforce graphics card is 12350 ");
					}
					else if(size==2)
					{
						printf("\n");
						printf("\n\t The price to repair 2 GB AMD radeon graphics card is 12500 ");
					}
					else
					{
						printf("\n");
						printf("\n     ,,,, you have enter a wrong input which is not available in this shop,,,,");
					    goto c;
					}goto c;
					break;
				case 5:
					printf("\n");
				    printf("\n\t                     ........you want to repair memory_ram......");
				    //all memory_ram are in G.B unit
				    printf("\n");
				    printf("\n   4,8 and 16 G.B ram are available here" );
				    printf("\n");
				    printf("\n\t Which size of memory_ram you want to repair: ");
				    scanf("%d",&size);
				    if(size==4)
				    {
				    	printf("\n");
				    	printf("\n\tThe price to repair this 4 G.B ram is 4500");
					}
					else if(size==8)
					{
						printf("\n\tThe price to repair this 8 G.B ram is 6500");
					}
					else if(size==16)
					{
						printf("\n\tThe price to repair this 16 G.B ram is 10500");
					}
					else
					{printf("\n\t,,,, you have enter a wrong input which is not available in this shop,,,,");
					goto c;
					}
					printf("If you want to repair any other thing then pls enter.");
					goto c;
					break;
				case 6:
					printf("\n");
					printf("\n\t                 ............you want to repair touchpad............");
					//all touchpad size are in sq cm unit
					printf("\n  20,30,45 sq.cm are repaired here");
					printf("\n");
					printf("\n Enter the size you want to repair here:");
					scanf("%d",&size);
					if (size==20)
					{
						printf("\n\t The price to repair this is 1500 ");
					}
					else if (size==30)
					{
						printf("\n\t the price to repair this is 2000");
					}
					else if (size==45)
					{
						printf("\n\t the price to repair this is 3500");
					}
					else
					{
						printf("\n\t,,,,,,,,  you have enter a wrong input which is not available in this shop,,,,,,,,,");
					    goto c;
					}
					goto c;
				    break;
				case 7:
					printf("\n");
					printf("\n\t               .............you want to repair camera................");
					//all cmera are in mega pixel unit
					printf("\n 2,5,8,13 mp camera are available here to repair\n");
					printf("\n Enter the camera you want to repair: ");
					scanf("%d",&size);
					if(size==2)
					{
						printf("\n\t the price to repair this is 750");
					}
					else if(size==5)
					{
						printf("\n\t the price to repair this is 1500 ");
					}
					else if(size==8)
					{
						printf("\n\t the price to repair this is 3000 ");
					}
					else if(size==13)
					{
						printf("\n\t the price to repair this is 5000  ");
					}
					else
					{
						printf("\n \t ,,,,,,,,,,,you have enter a wrong input which is not available in this shop,,,,,,,,,,,,,, ");
						goto c;
					}
					goto c;
					break;
				case 8:
					printf("\n");
					printf("\n\t                .................you want to repair speaker...................");
					printf("\n\t jbl,bose,sony speaker are available to put in your laptop..");
					printf("\n press 1 for JBL");
					printf("\n press 2 for sony");
					printf("\n press 3 for bose");
					printf("\n\t choose any of them you want to put in your laptop:");
					scanf("%d",&size);
					if (size==1)
					{
						printf("\n\t the price to repair this is 4200 ");
					}
					else if (size==2)
					{
						printf("\n\t the price to repair this is 6200 ");
					}
					else if(size==3)
					{
						printf("\n\t the price to repair this is 4500 ");
					}
					else
					{
						printf("\n\t     ,,,,,,,,,,,you have enter a wrong input which is not available in this shop,,,,,,,,,,,,,, ");
						goto c;
					}
					goto c;
					break;
				case 9:
				    printf("\n");
					printf("\n\t               ...................you want to repair processor.................");
					printf("\n\t intel,AMD,ARM processor are available here to repair ");
					printf("\n\t press 1 to repair with intel processor ");
					printf("\n\t press 2 to repair with AMD processor ");
					printf("\n\t press 3 to repair with ARM processor ");
					printf("\n\t Choose any of them you want to repair in your laptop:");
					scanf("%d",&size);
					if(size==1)
					{   
						printf("\n");
						printf("\n\t The price to repair this intel processor is 14800 ");
					}
						else if(size==2)
						{
						printf("\n");
						printf("\n\t The price to repair this AMD radeon processor 12600 ");
					    }
					    else if(size==3)
					    {
					    	printf("\n");
					    	printf("\n\t The price to repair this ARM processor 10500 ");
						}
						else
						{
							printf("\n\t   ,,,, you have enter a wrong input which is not available in this shop,,,,");
						    goto c;
						}
						goto c;
						break;
					case 10:
					    printf("\n");
						printf("\n\t           .......................you want to repair battery........................ ");
						printf("\n\t 4050,6000,8000 mah size battery are available in this shop ");
						printf("\n\t press 1 to repair with 4050 mah battery ");
					    printf("\n\t press 2 to repair with 6000 mah battery ");
					    printf("\n\t press 3 to repair with 8000 mah battery ");
						printf("\n\t Choose any of them you want to repair in your laptop:");
						scanf("%d",&size);
						if(size==1)
						{
							printf("\n");
							printf("\n\t The price to repair this is 5000 ");
						}
						else if(size==2)
						{
							printf("\n");
							printf("\n\t The price to repair this is 6700 ");
						}
						else if(size==3)
						{
							printf("\n");
							printf("\n\t The price to repair this is 8800 ");
						}
						else
						{
							printf("\n\t     ,,,, you have enter a wrong input which is not available in this shop,,,, ");
						    goto c;
						}
						goto c;
						break;
			    }
			
		}
			break;	    	
		case 4:
		    	{
				 printf("\n");
			    printf("\t\t                       -----you want to repair Macbook laptop--------");
		     	printf("\n 1=Display");
		    	printf("\n 2=keyboard");
			    printf("\n 3=hard_disk");
			    printf("\n 4=graphics_card");
			    printf("\n 5=Memory Ram");
			    printf("\n 6=touchpad");
			    printf("\n 7=camera");
			    printf("\n 8=speaker");
			    printf("\n 9=processor");
			    printf("\n 10=battery");
			    printf("\n");
			    printf("\n\t Enter which part you want to repair:");
				scanf("%d",&choice2);
				switch(choice2)
				
				{
				case 1:
					printf("\n");
			    	printf("\n\t                      .....You want to repair display......\n");
			    	printf("\n   14,15.6,17,18 inch inch IPS hd display are available here to repair\n");
					printf("\n\t which size of display you want to repair: ");
					scanf("%d",&size);
					if(size==14)
					{
						printf("\n");
						printf("\n\t The price to repair this 14 inch IPS hd display is 9800 ");
					}
					else if(size==15.6)
					{
						printf("\n");
						printf("\n\t The price to repair this 15.6 inch display is 12450 ");
					}
					else if(size==17)
					{
						printf("\n");
						printf("\n\t The price to repair this 17 inch display is 11500 ");
					}
					else if(size==18)
					{
						printf("\n");
						printf("\n\t The price to repair this 18 inch display is 12500 ");
					}
					else
					{
						printf("\n\t ,,,, you have enter a wrong input which is not available in this shop,,,,");
					}
					break;
				case 2:
					printf("\n");
					printf("\t                     .....You want to repair keyboard...... ");
					printf("\n\t 3 type of keyboard are available here ");
					printf("\n press 1 to repair with_numberpad keyboard");
					printf("\n press 2 to repair without_numberpad keyboard");
					printf("\n press 3 to repair azerty_keyboard");
					scanf("%d",&size);
					if(size==1)
					{
						printf("\n");
						printf("\n\t The price to repair with_numberpad keyboard is 850");
					}
					else if(size==2)
					{
						printf("\n");
						printf("\n\t The price to repair without_numberpad keyboard is 975");
					}
					else if(size==3)
					{
						printf("\n");
						printf("\n\t The price to repair azerty keyboard is 1075 ");
					}
					else
					{
						printf("\n");
						printf("\n\t ,,,, you have enter a wrong input which is not available in this shop,,,,");
					}
					break;
				case 3:
					printf("\n");
					printf("\t                     .....You want to repair harddisk.......");
				    printf("\n\t 500 GB,1 TB,2 TB size harddisk are available here to repair ");
				    printf("\n\t Enter anyne which you want to repair:");
				    scanf("%d",&size);
				    if(size==500)
				    {
				    	printf("\n");
				    	printf("\n\t The price to repair 500 GB hard_disk is 4750 ");
					}
					else if(size==1)
					{
						printf("\n");
						printf("\n\t The price to repair 1 TB hard_disk is 6250 ");
					}
					else if(size==2)
					{
						printf("\n");
						printf("\n\t The price to repair 2 TB  hard_disk is 9750 ");
					}
					else
					{
						printf("\n");
						printf("\n\t ,,,, you have enter a wrong input which is not available in this shop,,,,");
					}
					break;
				case 4:
					printf("\n");
					printf("\t                     ....You want to repair graphics_card....");
					printf("\n\t 2 GB nvdia and amd radeon graphics are available here ");
					printf("\n press 1 to repair 2 GB nvdia geforce graphics card ");
					printf("\n press 2 to repair 2 GB amd radeon graphics card ");
					scanf("%d",&size);
					if(size==1)
					{
						printf("\n");
						printf("\n \t The price to repair 2 GB nvdia geforce graphics card is 12350 ");
					}
					else if(size==2)
					{
						printf("\n");
						printf("\n\t The price to repair 2 GB AMD radeon graphics card is 12500 ");
					}
					else
					{
						printf("\n");
						printf("\n     ,,,, you have enter a wrong input which is not available in this shop,,,,");
					}
					break;
				case 5:
					printf("\n");
				    printf("\n\t                     ........you want to repair memory_ram......");
				    //all memory_ram are in G.B unit
				    printf("\n");
				    printf("\n   4,8 and 16 G.B ram are available here" );
				    printf("\n");
				    printf("\n\t Which size of memory_ram you want to repair: ");
				    scanf("%d",&size);
				    if(size==4)
				    {
				    	printf("\n");
				    	printf("\n\tThe price to repair this 4 G.B ram is 4500");
					}
					else if(size==8)
					{
						printf("\n\tThe price to repair this 8 G.B ram is 6500");
					}
					else if(size==16)
					{
						printf("\n\tThe price to repair this 16 G.B ram is 10500");
					}
					else
					{printf("\n\t,,,, you have enter a wrong input which is not available in this shop,,,,");
					}
					break;
				case 6:
					printf("\n");
					printf("\n\t                 ............you want to repair touchpad............");
					//all touchpad size are in sq cm unit
					printf("\n  20,30,45 sq.cm are repaired here");
					printf("\n");
					printf("\n Enter the size you want to repair here:");
					scanf("%d",&size);
					if (size==20)
					{
						printf("\n\t The price to repair this is 1500 ");
					}
					else if (size==30)
					{
						printf("\n\t the price to repair this is 2000");
					}
					else if (size==45)
					{
						printf("\n\t the price to repair this is 3500");
					}
					else
					{
						printf("\n\t,,,,,,,,  you have enter a wrong input which is not available in this shop,,,,,,,,,");
					}
				    break;
				case 7:
					printf("\n");
					printf("\n\t               .............you want to repair camera................");
					//all cmera are in mega pixel unit
					printf("\n 2,5,8,13 mp camera are available here to repair\n");
					printf("\n Enter the camera you want to repair: ");
					scanf("%d",&size);
					if(size==2)
					{
						printf("\n\t the price to repair this is 750");
					}
					else if(size==5)
					{
						printf("\n\t the price to repair this is 1500 ");
					}
					else if(size==8)
					{
						printf("\n\t the price to repair this is 3000 ");
					}
					else if(size==13)
					{
						printf("\n\t the price to repair this is 5000  ");
					}
					else
					{
						printf("\n \t ,,,,,,,,,,,you have enter a wrong input which is not available in this shop,,,,,,,,,,,,,, ");
					}
					break;
				case 8:
					printf("\n");
					printf("\n\t                .................you want to repair speaker...................");
					printf("\n\t jbl,bose,sony speaker are available to put in your laptop..");
					printf("\n press 1 for JBL");
					printf("\n press 2 for sony");
					printf("\n press 3 for bose");
					printf("\n\t choose any of them you want to put in your laptop:");
					scanf("%d",&size);
					if (size==1)
					{
						printf("\n\t the price to repair this is 4200 ");
					}
					else if (size==2)
					{
						printf("\n\t the price to repair this is 6200 ");
					}
					else if(size==3)
					{
						printf("\n\t the price to repair this is 4500 ");
					}
					else
					{
						printf("\n\t     ,,,,,,,,,,,you have enter a wrong input which is not available in this shop,,,,,,,,,,,,,, ");
					}
					break;
				case 9:
				    printf("\n");
					printf("\n\t               ...................you want to repair processor.................");
					printf("\n\t intel,AMD,ARM processor are available here to repair ");
					printf("\n\t press 1 to repair with intel processor ");
					printf("\n\t press 2 to repair with AMD processor ");
					printf("\n\t press 3 to repair with ARM processor ");
					printf("\n\t Choose any of them you want to repair in your laptop:");
					scanf("%d",&size);
					if(size==1)
					{   
						printf("\n");
						printf("\n\t The price to repair this intel processor is 14800 ");
					}
						else if(size==2)
						{
						printf("\n");
						printf("\n\t The price to repair this AMD radeon processor 12600 ");
					    }
					    else if(size==3)
					    {
					    	printf("\n");
					    	printf("\n\t The price to repair this ARM processor 10500 ");
						}
						else
						{
							printf("\n\t   ,,,, you have enter a wrong input which is not available in this shop,,,,");
						}
						break;
					case 10:
					    printf("\n");
						printf("\n\t           .......................you want to repair battery........................ ");
						printf("\n\t 4050,6000,8000 mah size battery are available in this shop ");
						printf("\n\t press 1 to repair with 4050 mah battery ");
					    printf("\n\t press 2 to repair with 6000 mah battery ");
					    printf("\n\t press 3 to repair with 8000 mah battery ");
						printf("\n\t Choose any of them you want to repair in your laptop:");
						scanf("%d",&size);
						if(size==1)
						{
							printf("\n");
							printf("\n\t The price to repair this is 5000 ");
						}
						else if(size==2)
						{
							printf("\n");
							printf("\n\t The price to repair this is 6700 ");
						}
						else if(size==3)
						{
							printf("\n");
							printf("\n\t The price to repair this is 8800 ");
						}
						else
						{
							printf("\n\t     ,,,, you have enter a wrong input which is not available in this shop,,,, ");
						}
						break;
			    }
		    }
		    break;
		case 5:
		    	{
				 printf("\n");
			    printf("\t\t                       -----you want to repair ASUS laptop--------");
		     	printf("\n 1=Display");
		    	printf("\n 2=keyboard");
			    printf("\n 3=hard_disk");
			    printf("\n 4=graphics_card");
			    printf("\n 5=Memory Ram");
			    printf("\n 6=touchpad");
			    printf("\n 7=camera");
			    printf("\n 8=speaker");
			    printf("\n 9=processor");
			    printf("\n 10=battery");
			    printf("\n");
			    printf("\n\t Enter which part you want to repair:");
				scanf("%d",&choice2);
				switch(choice2)
				
				{
				case 1:
					printf("\n");
			    	printf("\n\t                      .....You want to repair display......\n");
			    	printf("\n   14,15.6,17,18 inch inch IPS hd display are available here to repair\n");
					printf("\n\t which size of display you want to repair: ");
					scanf("%d",&size);
					if(size==14)
					{
						printf("\n");
						printf("\n\t The price to repair this 14 inch IPS hd display is 9800 ");
					}
					else if(size==15.6)
					{
						printf("\n");
						printf("\n\t The price to repair this 15.6 inch display is 12450 ");
					}
					else if(size==17)
					{
						printf("\n");
						printf("\n\t The price to repair this 17 inch display is 11500 ");
					}
					else if(size==18)
					{
						printf("\n");
						printf("\n\t The price to repair this 18 inch display is 12500 ");
					}
					else
					{
						printf("\n\t ,,,, you have enter a wrong input which is not available in this shop,,,,");
					}
					break;
				case 2:
					printf("\n");
					printf("\t                     .....You want to repair keyboard...... ");
					printf("\n\t 3 type of keyboard are available here ");
					printf("\n press 1 to repair with_numberpad keyboard");
					printf("\n press 2 to repair without_numberpad keyboard");
					printf("\n press 3 to repair azerty_keyboard");
					scanf("%d",&size);
					if(size==1)
					{
						printf("\n");
						printf("\n\t The price to repair with_numberpad keyboard is 850");
					}
					else if(size==2)
					{
						printf("\n");
						printf("\n\t The price to repair without_numberpad keyboard is 975");
					}
					else if(size==3)
					{
						printf("\n");
						printf("\n\t The price to repair azerty keyboard is 1075 ");
					}
					else
					{
						printf("\n");
						printf("\n\t ,,,, you have enter a wrong input which is not available in this shop,,,,");
					}
					break;
				case 3:
					printf("\n");
					printf("\t                     .....You want to repair harddisk.......");
				    printf("\n\t 500 GB,1 TB,2 TB size harddisk are available here to repair ");
				    printf("\n\t Enter anyne which you want to repair:");
				    scanf("%d",&size);
				    if(size==500)
				    {
				    	printf("\n");
				    	printf("\n\t The price to repair 500 GB hard_disk is 4750 ");
					}
					else if(size==1)
					{
						printf("\n");
						printf("\n\t The price to repair 1 TB hard_disk is 6250 ");
					}
					else if(size==2)
					{
						printf("\n");
						printf("\n\t The price to repair 2 TB  hard_disk is 9750 ");
					}
					else
					{
						printf("\n");
						printf("\n\t ,,,, you have enter a wrong input which is not available in this shop,,,,");
					}
					break;
				case 4:
					printf("\n");
					printf("\t                     ....You want to repair graphics_card....");
					printf("\n\t 2 GB nvdia and amd radeon graphics are available here ");
					printf("\n press 1 to repair 2 GB nvdia geforce graphics card ");
					printf("\n press 2 to repair 2 GB amd radeon graphics card ");
					scanf("%d",&size);
					if(size==1)
					{
						printf("\n");
						printf("\n \t The price to repair 2 GB nvdia geforce graphics card is 12350 ");
					}
					else if(size==2)
					{
						printf("\n");
						printf("\n\t The price to repair 2 GB AMD radeon graphics card is 12500 ");
					}
					else
					{
						printf("\n");
						printf("\n     ,,,, you have enter a wrong input which is not available in this shop,,,,");
					}
					break;
				case 5:
					printf("\n");
				    printf("\n\t                     ........you want to repair memory_ram......");
				    //all memory_ram are in G.B unit
				    printf("\n");
				    printf("\n   4,8 and 16 G.B ram are available here" );
				    printf("\n");
				    printf("\n\t Which size of memory_ram you want to repair: ");
				    scanf("%d",&size);
				    if(size==4)
				    {
				    	printf("\n");
				    	printf("\n\tThe price to repair this 4 G.B ram is 4500");
					}
					else if(size==8)
					{
						printf("\n\tThe price to repair this 8 G.B ram is 6500");
					}
					else if(size==16)
					{
						printf("\n\tThe price to repair this 16 G.B ram is 10500");
					}
					else
					{printf("\n\t,,,, you have enter a wrong input which is not available in this shop,,,,");
					}
					break;
				case 6:
					printf("\n");
					printf("\n\t                 ............you want to repair touchpad............");
					//all touchpad size are in sq cm unit
					printf("\n  20,30,45 sq.cm are repaired here");
					printf("\n");
					printf("\n Enter the size you want to repair here:");
					scanf("%d",&size);
					if (size==20)
					{
						printf("\n\t The price to repair this is 1500 ");
					}
					else if (size==30)
					{
						printf("\n\t the price to repair this is 2000");
					}
					else if (size==45)
					{
						printf("\n\t the price to repair this is 3500");
					}
					else
					{
						printf("\n\t,,,,,,,,  you have enter a wrong input which is not available in this shop,,,,,,,,,");
					}
				    break;
				case 7:
					printf("\n");
					printf("\n\t               .............you want to repair camera................");
					//all cmera are in mega pixel unit
					printf("\n 2,5,8,13 mp camera are available here to repair\n");
					printf("\n Enter the camera you want to repair: ");
					scanf("%d",&size);
					if(size==2)
					{
						printf("\n\t the price to repair this is 750");
					}
					else if(size==5)
					{
						printf("\n\t the price to repair this is 1500 ");
					}
					else if(size==8)
					{
						printf("\n\t the price to repair this is 3000 ");
					}
					else if(size==13)
					{
						printf("\n\t the price to repair this is 5000  ");
					}
					else
					{
						printf("\n \t ,,,,,,,,,,,you have enter a wrong input which is not available in this shop,,,,,,,,,,,,,, ");
					}
					break;
				case 8:
					printf("\n");
					printf("\n\t                .................you want to repair speaker...................");
					printf("\n\t jbl,bose,sony speaker are available to put in your laptop..");
					printf("\n press 1 for JBL");
					printf("\n press 2 for sony");
					printf("\n press 3 for bose");
					printf("\n\t choose any of them you want to put in your laptop:");
					scanf("%d",&size);
					if (size==1)
					{
						printf("\n\t the price to repair this is 4200 ");
					}
					else if (size==2)
					{
						printf("\n\t the price to repair this is 6200 ");
					}
					else if(size==3)
					{
						printf("\n\t the price to repair this is 4500 ");
					}
					else
					{
						printf("\n\t     ,,,,,,,,,,,you have enter a wrong input which is not available in this shop,,,,,,,,,,,,,, ");
					}
					break;
				case 9:
				    printf("\n");
					printf("\n\t               ...................you want to repair processor.................");
					printf("\n\t intel,AMD,ARM processor are available here to repair ");
					printf("\n\t press 1 to repair with intel processor ");
					printf("\n\t press 2 to repair with AMD processor ");
					printf("\n\t press 3 to repair with ARM processor ");
					printf("\n\t Choose any of them you want to repair in your laptop:");
					scanf("%d",&size);
					if(size==1)
					{   
						printf("\n");
						printf("\n\t The price to repair this intel processor is 14800 ");
					}
						else if(size==2)
						{
						printf("\n");
						printf("\n\t The price to repair this AMD radeon processor 12600 ");
					    }
					    else if(size==3)
					    {
					    	printf("\n");
					    	printf("\n\t The price to repair this ARM processor 10500 ");
						}
						else
						{
							printf("\n\t   ,,,, you have enter a wrong input which is not available in this shop,,,,");
						}
						break;
					case 10:
					    printf("\n");
						printf("\n\t           .......................you want to repair battery........................ ");
						printf("\n\t 4050,6000,8000 mah size battery are available in this shop ");
						printf("\n\t press 1 to repair with 4050 mah battery ");
					    printf("\n\t press 2 to repair with 6000 mah battery ");
					    printf("\n\t press 3 to repair with 8000 mah battery ");
						printf("\n\t Choose any of them you want to repair in your laptop:");
						scanf("%d",&size);
						if(size==1)
						{
							printf("\n");
							printf("\n\t The price to repair this is 5000 ");
						}
						else if(size==2)
						{
							printf("\n");
							printf("\n\t The price to repair this is 6700 ");
						}
						else if(size==3)
						{
							printf("\n");
							printf("\n\t The price to repair this is 8800 ");
						}
						else
						{
							printf("\n\t     ,,,, you have enter a wrong input which is not available in this shop,,,, ");
						}
						break;
			    }
		    }
		    break;
		case 6:
		    	{
				 printf("\n");
			    printf("\t\t                       -----you want to repair sony laptop--------");
		     	printf("\n 1=Display");
		    	printf("\n 2=keyboard");
			    printf("\n 3=hard_disk");
			    printf("\n 4=graphics_card");
			    printf("\n 5=Memory Ram");
			    printf("\n 6=touchpad");
			    printf("\n 7=camera");
			    printf("\n 8=speaker");
			    printf("\n 9=processor");
			    printf("\n 10=battery");
			    printf("\n");
			    printf("\n\t Enter which part you want to repair:");
				scanf("%d",&choice2);
				switch(choice2)
				
				{
				case 1:
					printf("\n");
			    	printf("\n\t                      .....You want to repair display......\n");
			    	printf("\n   14,15.6,17,18 inch inch IPS hd display are available here to repair\n");
					printf("\n\t which size of display you want to repair: ");
					scanf("%d",&size);
					if(size==14)
					{
						printf("\n");
						printf("\n\t The price to repair this 14 inch IPS hd display is 9800 ");
					}
					else if(size==15.6)
					{
						printf("\n");
						printf("\n\t The price to repair this 15.6 inch display is 12450 ");
					}
					else if(size==17)
					{
						printf("\n");
						printf("\n\t The price to repair this 17 inch display is 11500 ");
					}
					else if(size==18)
					{
						printf("\n");
						printf("\n\t The price to repair this 18 inch display is 12500 ");
					}
					else
					{
						printf("\n\t ,,,, you have enter a wrong input which is not available in this shop,,,,");
					}
					break;
				case 2:
					printf("\n");
					printf("\t                     .....You want to repair keyboard...... ");
					printf("\n\t 3 type of keyboard are available here ");
					printf("\n press 1 to repair with_numberpad keyboard");
					printf("\n press 2 to repair without_numberpad keyboard");
					printf("\n press 3 to repair azerty_keyboard");
					scanf("%d",&size);
					if(size==1)
					{
						printf("\n");
						printf("\n\t The price to repair with_numberpad keyboard is 850");
					}
					else if(size==2)
					{
						printf("\n");
						printf("\n\t The price to repair without_numberpad keyboard is 975");
					}
					else if(size==3)
					{
						printf("\n");
						printf("\n\t The price to repair azerty keyboard is 1075 ");
					}
					else
					{
						printf("\n");
						printf("\n\t ,,,, you have enter a wrong input which is not available in this shop,,,,");
					}
					break;
				case 3:
					printf("\n");
					printf("\t                     .....You want to repair harddisk.......");
				    printf("\n\t 500 GB,1 TB,2 TB size harddisk are available here to repair ");
				    printf("\n\t Enter anyne which you want to repair:");
				    scanf("%d",&size);
				    if(size==500)
				    {
				    	printf("\n");
				    	printf("\n\t The price to repair 500 GB hard_disk is 4750 ");
					}
					else if(size==1)
					{
						printf("\n");
						printf("\n\t The price to repair 1 TB hard_disk is 6250 ");
					}
					else if(size==2)
					{
						printf("\n");
						printf("\n\t The price to repair 2 TB  hard_disk is 9750 ");
					}
					else
					{
						printf("\n");
						printf("\n\t ,,,, you have enter a wrong input which is not available in this shop,,,,");
					}
					break;
				case 4:
					printf("\n");
					printf("\t                     ....You want to repair graphics_card....");
					printf("\n\t 2 GB nvdia and amd radeon graphics are available here ");
					printf("\n press 1 to repair 2 GB nvdia geforce graphics card ");
					printf("\n press 2 to repair 2 GB amd radeon graphics card ");
					scanf("%d",&size);
					if(size==1)
					{
						printf("\n");
						printf("\n \t The price to repair 2 GB nvdia geforce graphics card is 12350 ");
					}
					else if(size==2)
					{
						printf("\n");
						printf("\n\t The price to repair 2 GB AMD radeon graphics card is 12500 ");
					}
					else
					{
						printf("\n");
						printf("\n     ,,,, you have enter a wrong input which is not available in this shop,,,,");
					}
					break;
				case 5:
					printf("\n");
				    printf("\n\t                     ........you want to repair memory_ram......");
				    //all memory_ram are in G.B unit
				    printf("\n");
				    printf("\n   4,8 and 16 G.B ram are available here" );
				    printf("\n");
				    printf("\n\t Which size of memory_ram you want to repair: ");
				    scanf("%d",&size);
				    if(size==4)
				    {
				    	printf("\n");
				    	printf("\n\tThe price to repair this 4 G.B ram is 4500");
					}
					else if(size==8)
					{
						printf("\n\tThe price to repair this 8 G.B ram is 6500");
					}
					else if(size==16)
					{
						printf("\n\tThe price to repair this 16 G.B ram is 10500");
					}
					else
					{printf("\n\t,,,, you have enter a wrong input which is not available in this shop,,,,");
					}
					break;
				case 6:
					printf("\n");
					printf("\n\t                 ............you want to repair touchpad............");
					//all touchpad size are in sq cm unit
					printf("\n  20,30,45 sq.cm are repaired here");
					printf("\n");
					printf("\n Enter the size you want to repair here:");
					scanf("%d",&size);
					if (size==20)
					{
						printf("\n\t The price to repair this is 1500 ");
					}
					else if (size==30)
					{
						printf("\n\t the price to repair this is 2000");
					}
					else if (size==45)
					{
						printf("\n\t the price to repair this is 3500");
					}
					else
					{
						printf("\n\t,,,,,,,,  you have enter a wrong input which is not available in this shop,,,,,,,,,");
					}
				    break;
				case 7:
					printf("\n");
					printf("\n\t               .............you want to repair camera................");
					//all cmera are in mega pixel unit
					printf("\n 2,5,8,13 mp camera are available here to repair\n");
					printf("\n Enter the camera you want to repair: ");
					scanf("%d",&size);
					if(size==2)
					{
						printf("\n\t the price to repair this is 750");
					}
					else if(size==5)
					{
						printf("\n\t the price to repair this is 1500 ");
					}
					else if(size==8)
					{
						printf("\n\t the price to repair this is 3000 ");
					}
					else if(size==13)
					{
						printf("\n\t the price to repair this is 5000  ");
					}
					else
					{
						printf("\n \t ,,,,,,,,,,,you have enter a wrong input which is not available in this shop,,,,,,,,,,,,,, ");
					}
					break;
				case 8:
					printf("\n");
					printf("\n\t                .................you want to repair speaker...................");
					printf("\n\t jbl,bose,sony speaker are available to put in your laptop..");
					printf("\n press 1 for JBL");
					printf("\n press 2 for sony");
					printf("\n press 3 for bose");
					printf("\n\t choose any of them you want to put in your laptop:");
					scanf("%d",&size);
					if (size==1)
					{
						printf("\n\t the price to repair this is 4200 ");
					}
					else if (size==2)
					{
						printf("\n\t the price to repair this is 6200 ");
					}
					else if(size==3)
					{
						printf("\n\t the price to repair this is 4500 ");
					}
					else
					{
						printf("\n\t     ,,,,,,,,,,,you have enter a wrong input which is not available in this shop,,,,,,,,,,,,,, ");
					}
					break;
				case 9:
				    printf("\n");
					printf("\n\t               ...................you want to repair processor.................");
					printf("\n\t intel,AMD,ARM processor are available here to repair ");
					printf("\n\t press 1 to repair with intel processor ");
					printf("\n\t press 2 to repair with AMD processor ");
					printf("\n\t press 3 to repair with ARM processor ");
					printf("\n\t Choose any of them you want to repair in your laptop:");
					scanf("%d",&size);
					if(size==1)
					{   
						printf("\n");
						printf("\n\t The price to repair this intel processor is 14800 ");
					}
						else if(size==2)
						{
						printf("\n");
						printf("\n\t The price to repair this AMD radeon processor 12600 ");
					    }
					    else if(size==3)
					    {
					    	printf("\n");
					    	printf("\n\t The price to repair this ARM processor 10500 ");
						}
						else
						{
							printf("\n\t   ,,,, you have enter a wrong input which is not available in this shop,,,,");
						}
						break;
					case 10:
					    printf("\n");
						printf("\n\t           .......................you want to repair battery........................ ");
						printf("\n\t 4050,6000,8000 mah size battery are available in this shop ");
						printf("\n\t press 1 to repair with 4050 mah battery ");
					    printf("\n\t press 2 to repair with 6000 mah battery ");
					    printf("\n\t press 3 to repair with 8000 mah battery ");
						printf("\n\t Choose any of them you want to repair in your laptop:");
						scanf("%d",&size);
						if(size==1)
						{
							printf("\n");
							printf("\n\t The price to repair this is 5000 ");
						}
						else if(size==2)
						{
							printf("\n");
							printf("\n\t The price to repair this is 6700 ");
						}
						else if(size==3)
						{
							printf("\n");
							printf("\n\t The price to repair this is 8800 ");
						}
						else
						{
							printf("\n\t     ,,,, you have enter a wrong input which is not available in this shop,,,, ");
						}
						break;
			    }
		    }				
		break;	   
	}}
	else
    {
     printf("The user name or password you entered is invalid.\n");
    }
 
getch();
}
            
	
	
	

