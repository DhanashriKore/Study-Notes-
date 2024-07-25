#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int ch;
	char s[100];
	FILE *fp;
	do{
		    printf("****************************************************************************************");
			printf("\n C Programming Keywords Info:\n");
			printf("\n Select the Keyword:\n");
			printf("\t1.AUTO\t\t2.INT\t\t3.CHAR\t\t4.FLOAT\n\n");
			printf("\t5.SHORT\t\t6.LONG\t\t7.SIGNED\t8.UNSIGNED\n\n");
			printf("\t9.DOUBLE\t10.BREAK\t11.CONTINUE\t12.CASE\n\n");
			printf("\t13.DEFAULT\t14.SWITCH\t15.UNION\t16.STRUCT\n\n");
			printf("\t17.CONST\t18.IF\t\t19.ELSE\t\t20.DO\n\n");
			printf("\t21.WHILE\t22.FOR\t\t23.ENUM\t\t24.TYPEDEF\n\n");
	    	printf("\t25.EXTERN\t26.GOTO\t\t27.REGISTER\t28.RETURN\n\n");
	    	printf("\t29.SIZEOF\t30.STATIC\t31.VOID\t\t32.VOLATILE\n\n");
	    	printf("\t0.EXIT\n");

			printf("\n Enter Your Choice: ");
			scanf("%d",&ch);
           	printf("****************************************************************************************");
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
