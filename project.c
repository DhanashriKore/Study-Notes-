#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int ch;
	char s[100];
	FILE *fp;
	do{
		    printf("*****************************************************************************************************************************************************************");
			printf("\n C Programming Keywords Info:\n");
			printf("\n Select the Keyword:\n");
			printf("1.AUTO    2.INT     3.CHAR    4.FLOAT   5.SHORT   6.LONG    7.SIGNED  8.UNSIGNED\n9.DOUBLE  10.BREAK  11.CONTINUE 12.CASE   13.DEFAULT 14.SWITCH 15.UNION  16.STRUCT \n");
		   printf("17.CONST  18.IF     19.ELSE   20.DO     21.WHILE  22.FOR    23.ENUM   24.TYPEDEF\n25.EXTERN  26.GOTO   27.REGISTER 28.RETURN 29.SIZEOF  30.STATIC 31.VOID   32.VOLATILE\n0.EXIT\n");
	    	
			printf("\n Enter Your Choice: ");
			scanf("%d",&ch);
           	printf("***************************************************************************************************************************************************************");
			switch(ch)
			{
			  case 1:
			  		system("cls");
		            fp=fopen("auto.txt", "r");
		            if(fp==NULL)
		            {
		            	printf("\n Unable to open the file");
					}
					else
					{
						printf("****************************************************************************************");
						printf("\n \t \t            \t  WELCOME \t");
						while(fgets(s,80,fp)!=NULL)
						{
							printf("\n %s",s);
						}
					}
					fclose(fp);
					break;
					
			case 2:
				   system("cls");
		            fp=fopen("int.txt", "r");
		            if(fp==NULL)
		            {
		            	printf("\n Unable to open the file");
					}
					else
					{
						printf("****************************************************************************************");
						printf("\n \t \t            \t  WELCOME \t");
						while(fgets(s,80,fp)!=NULL)
						{
							printf("\n %s",s);
						}
					}
					fclose(fp);
					break;
			case 3:
				    system("cls");
		            fp=fopen("char.txt", "r");
		            if(fp==NULL)
		            {
		            	printf("\n Unable to open the file");
					}
					else
					{
						printf("****************************************************************************************");
						printf("\n \t \t            \t  WELCOME \t");
						while(fgets(s,80,fp)!=NULL)
						{
							printf("\n %s",s);
						}
					}
					fclose(fp);
					break;
					
			case 4:
				    system("cls");
		            fp=fopen("float.txt", "r");
		            if(fp==NULL)
		            {
		            	printf("\n Unable to open the file");
					}
					else
					{
					    printf("****************************************************************************************");
						printf("\n \t \t            \t  WELCOME \t");
						while(fgets(s,80,fp)!=NULL)
						{
							printf("\n %s",s);
						}
					}
					fclose(fp);
					break;
					
			case 5:
		            system("cls");
		            fp=fopen("double.txt", "r");
		            if(fp==NULL)
		            {
		            	printf("\n Unable to open the file");
					}
					else
					{
					    printf("****************************************************************************************");
						printf("\n \t \t            \t  WELCOME \t");
						while(fgets(s,80,fp)!=NULL)
						{
							printf("\n %s",s);
						}
					}
					fclose(fp);
					break;
					
			case 6:
			  		system("cls");
		            fp=fopen("short.txt", "r");
		            if(fp==NULL)
		            {
		            	printf("\n Unable to open the file");
					}
					else
					{
						printf("****************************************************************************************");
						printf("\n \t \t            \t  WELCOME \t");
						while(fgets(s,80,fp)!=NULL)
						{
							printf("\n %s",s);
						}
					}
					fclose(fp);
					break;
			case 7:
			  		system("cls");
		            fp=fopen("long.txt", "r");
		            if(fp==NULL)
		            {
		            	printf("\n Unable to open the file");
					}
					else
					{
						printf("****************************************************************************************");
						printf("\n \t \t            \t  WELCOME \t");
						while(fgets(s,80,fp)!=NULL)
						{
							printf("\n %s",s);
						}
					}
					fclose(fp);
					break;		
	       	case 8:
			  		system("cls");
		            fp=fopen("signed.txt", "r");
		            if(fp==NULL)
		            {
		            	printf("\n Unable to open the file");
					}
					else
					{
						printf("****************************************************************************************");
						printf("\n \t \t            \t  WELCOME \t");
						while(fgets(s,80,fp)!=NULL)
						{
							printf("\n %s",s);
						}
					}
					fclose(fp);
					break;
			case 9:
			  		system("cls");
		            fp=fopen("unsigned.txt", "r");
		            if(fp==NULL)
		            {
		            	printf("\n Unable to open the file");
					}
					else
					{
						printf("****************************************************************************************");
						printf("\n \t \t            \t  WELCOME \t");
						while(fgets(s,80,fp)!=NULL)
						{
							printf("\n %s",s);
						}
					}
					fclose(fp);
					break;
					
		case 10:
			  		system("cls");
		            fp=fopen("switch.txt", "r");
		            if(fp==NULL)
		            {
		            	printf("\n Unable to open the file");
					}
					else
					{
						printf("****************************************************************************************");
						printf("\n \t \t            \t  WELCOME \t");
						while(fgets(s,80,fp)!=NULL)
						{
							printf("\n %s",s);
						}
					}
					fclose(fp);
					break;
			case 11:
			  		system("cls");
		            fp=fopen("break.txt", "r");
		            if(fp==NULL)
		            {
		            	printf("\n Unable to open the file");
					}
					else
					{
						printf("****************************************************************************************");
						printf("\n \t \t            \t  WELCOME \t");
						while(fgets(s,80,fp)!=NULL)
						{
							printf("\n %s",s);
						}
					}
					fclose(fp);
					break;
			case 12:
			  		system("cls");
		            fp=fopen("continue.txt", "r");
		            if(fp==NULL)
		            {
		            	printf("\n Unable to open the file");
					}
					else
					{
						printf("****************************************************************************************");
						printf("\n \t \t            \t  WELCOME \t");
						while(fgets(s,80,fp)!=NULL)
						{
							printf("\n %s",s);
						}
					}
					fclose(fp);
					break;
			case 13:
			  		system("cls");
		            fp=fopen("case.txt", "r");
		            if(fp==NULL)
		            {
		            	printf("\n Unable to open the file");
					}
					else
					{
						printf("****************************************************************************************");
						printf("\n \t \t            \t  WELCOME \t");
						while(fgets(s,80,fp)!=NULL)
						{
							printf("\n %s",s);
						}
					}
					fclose(fp);
					break;
			case 14:
			  		system("cls");
		            fp=fopen("default.txt", "r");
		            if(fp==NULL)
		            {
		            	printf("\n Unable to open the file");
					}
					else
					{
						printf("****************************************************************************************");
						printf("\n \t \t            \t  WELCOME \t");
						while(fgets(s,80,fp)!=NULL)
						{
							printf("\n %s",s);
						}
					}
					fclose(fp);
					break;
			case 15:
			  		system("cls");
		            fp=fopen("struct.txt", "r");
		            if(fp==NULL)
		            {
		            	printf("\n Unable to open the file");
					}
					else
					{
						printf("****************************************************************************************");
						printf("\n \t \t            \t  WELCOME \t");
						while(fgets(s,80,fp)!=NULL)
						{
							printf("\n %s",s);
						}
					}
					fclose(fp);
					break;
			case 16:
			  		system("cls");
		            fp=fopen("union.txt", "r");
		            if(fp==NULL)
		            {
		            	printf("\n Unable to open the file");
					}
					else
					{
						printf("****************************************************************************************");
						printf("\n \t \t            \t  WELCOME \t");
						while(fgets(s,80,fp)!=NULL)
						{
							printf("\n %s",s);
						}
					}
					fclose(fp);
					break;
			case 17:
			  		system("cls");
		            fp=fopen("const.txt", "r");
		            if(fp==NULL)
		            {
		            	printf("\n Unable to open the file");
					}
					else
					{
						printf("****************************************************************************************");
						printf("\n \t \t            \t  WELCOME \t");
						while(fgets(s,80,fp)!=NULL)
						{
							printf("\n %s",s);
						}
					}
					fclose(fp);
					break;
			case 18:
			  		system("cls");
		            fp=fopen("if.txt", "r");
		            if(fp==NULL)
		            {
		            	printf("\n Unable to open the file");
					}
					else
					{
						printf("****************************************************************************************");
						printf("\n \t \t            \t  WELCOME \t");
						while(fgets(s,80,fp)!=NULL)
						{
							printf("\n %s",s);
						}
					}
					fclose(fp);
					break;
			case 19:
			  		system("cls");
		            fp=fopen("else.txt", "r");
		            if(fp==NULL)
		            {
		            	printf("\n Unable to open the file");
					}
					else
					{
						printf("****************************************************************************************");
						printf("\n \t \t            \t  WELCOME \t");
						while(fgets(s,80,fp)!=NULL)
						{
							printf("\n %s",s);
						}
					}
					fclose(fp);
					break;
			case 20:
			  		system("cls");
		            fp=fopen("do.txt", "r");
		            if(fp==NULL)
		            {
		            	printf("\n Unable to open the file");
					}
					else
					{
						printf("****************************************************************************************");
						printf("\n \t \t            \t  WELCOME \t");
						while(fgets(s,80,fp)!=NULL)
						{
							printf("\n %s",s);
						}
					}
					fclose(fp);
					break;
			case 21:
			  		system("cls");
		            fp=fopen("while.txt", "r");
		            if(fp==NULL)
		            {
		            	printf("\n Unable to open the file");
					}
					else
					{
						printf("****************************************************************************************");
						printf("\n \t \t            \t  WELCOME \t");
						while(fgets(s,80,fp)!=NULL)
						{
							printf("\n %s",s);
						}
					}
					fclose(fp);
					break;
			case 22:
			  		system("cls");
		            fp=fopen("for.txt", "r");
		            if(fp==NULL)
		            {
		            	printf("\n Unable to open the file");
					}
					else
					{
						printf("****************************************************************************************");
						printf("\n \t \t            \t  WELCOME \t");
						while(fgets(s,80,fp)!=NULL)
						{
							printf("\n %s",s);
						}
					}
					fclose(fp);
					break;
			case 23:
			  		system("cls");
		            fp=fopen("enum.txt", "r");
		            if(fp==NULL)
		            {
		            	printf("\n Unable to open the file");
					}
					else
					{
						printf("****************************************************************************************");
						printf("\n \t \t            \t  WELCOME \t");
						while(fgets(s,80,fp)!=NULL)
						{
							printf("\n %s",s);
						}
					}
					fclose(fp);
					break;
			case 24:
			  		system("cls");
		            fp=fopen("typedef.txt", "r");
		            if(fp==NULL)
		            {
		            	printf("\n Unable to open the file");
					}
					else
					{
						printf("****************************************************************************************");
						printf("\n \t \t            \t  WELCOME \t");
						while(fgets(s,80,fp)!=NULL)
						{
							printf("\n %s",s);
						}
					}
					fclose(fp);
					break;
			case 25:
			  		system("cls");
		            fp=fopen("extern.txt", "r");
		            if(fp==NULL)
		            {
		            	printf("\n Unable to open the file");
					}
					else
					{
						printf("****************************************************************************************");
						printf("\n \t \t            \t  WELCOME \t");
						while(fgets(s,80,fp)!=NULL)
						{
							printf("\n %s",s);
						}
					}
					fclose(fp);
					break;
			case 26:
			  		system("cls");
		            fp=fopen("goto.txt", "r");
		            if(fp==NULL)
		            {
		            	printf("\n Unable to open the file");
					}
					else
					{
						printf("****************************************************************************************");
						printf("\n \t \t            \t  WELCOME \t");
						while(fgets(s,80,fp)!=NULL)
						{
							printf("\n %s",s);
						}
					}
					fclose(fp);
					break;
			case 27:
			  		system("cls");
		            fp=fopen("register.txt", "r");
		            if(fp==NULL)
		            {
		            	printf("\n Unable to open the file");
					}
					else
					{
						printf("****************************************************************************************");
						printf("\n \t \t            \t  WELCOME \t");
						while(fgets(s,80,fp)!=NULL)
						{
							printf("\n %s",s);
						}
					}
					fclose(fp);
					break;
			case 28:
			  		system("cls");
		            fp=fopen("return.txt", "r");
		            if(fp==NULL)
		            {
		            	printf("\n Unable to open the file");
					}
					else
					{
						printf("****************************************************************************************");
						printf("\n \t \t            \t  WELCOME \t");
						while(fgets(s,80,fp)!=NULL)
						{
							printf("\n %s",s);
						}
					}
					fclose(fp);
					break;
		    case 29:
			  		system("cls");
		            fp=fopen("sizeof.txt", "r");
		            if(fp==NULL)
		            {
		            	printf("\n Unable to open the file");
					}
					else
					{
						printf("****************************************************************************************");
						printf("\n \t \t            \t  WELCOME \t");
						while(fgets(s,80,fp)!=NULL)
						{
							printf("\n %s",s);
						}
					}
					fclose(fp);
					break;
			case 30:
			  		system("cls");
		            fp=fopen("static.txt", "r");
		            if(fp==NULL)
		            {
		            	printf("\n Unable to open the file");
					}
					else
					{
						printf("****************************************************************************************");
						printf("\n \t \t            \t  WELCOME \t");
						while(fgets(s,80,fp)!=NULL)
						{
							printf("\n %s",s);
						}
					}
					fclose(fp);
					break;
			case 31:
			  		system("cls");
		            fp=fopen("void.txt", "r");
		            if(fp==NULL)
		            {
		            	printf("\n Unable to open the file");
					}
					else
					{
						printf("****************************************************************************************");
						printf("\n \t \t            \t  WELCOME \t");
						while(fgets(s,80,fp)!=NULL)
						{
							printf("\n %s",s);
						}
					}
					fclose(fp);
					break;
			case 32:
			  		system("cls");
		            fp=fopen("volatile.txt", "r");
		            if(fp==NULL)
		            {
		            	printf("\n Unable to open the file");
					}
					else
					{
						printf("****************************************************************************************");
						printf("\n \t \t            \t  WELCOME \t");
						while(fgets(s,80,fp)!=NULL)
						{
							printf("\n %s",s);
						}
					}
					fclose(fp);
					break;
																								
					
					
	       	case 0: exit(0);
			default:
				printf("Wrong choice");
		            	
		}
	}while(ch!=0);
	 
}
