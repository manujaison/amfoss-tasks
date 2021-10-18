//All these header files are needed to support code, or are they all there?
#include<stdio.h>
#include<string.h>//ERROR: The string.h library was not added eventhough the functions in this library was used.
#include<stdlib.h>

void showInput(int);

//Typos are a cause of huge pain for every coder
int Main(void)
{
    int score = 0;
    int gameCount;
    printf("\n\n Enter number of rounds of Guessing Game ");
    scanf("%d",&gameCount);
    int originalScore = gameCount;

    while(gameCount>0)
    {
        //every great statement should have a great ending, look out for them!
        char inputWord[20], tempWord[20];    // ERROR: The size of the array was not declared.
        char finalOutput[20];               // ERROR:The size of the array was not declared.
        int wrongTry, matchFound = 0;
        int counter = 0 , position = 0, winner, length, trial;
        char alphabetInput;  // ERROR: semicolon was not used after the declaration of a variable.

        system("cls");
        printf("\n\n !!!!!!!!!!!!!!!!!!!Welcome to the Guessing Game!!!!!!!!!!!!!!!!!\n\n\n");
        //Formatting and labeling always go hand in hand!
        printf("\n\n Enter number of wrong attempts allowed: ");
        scanf("%d",&trial);  // ERROR: %s was used instead of %d.
        printf("\nEnter any word in small letters and press ENTER"); // ERROR: Semi colon was not used.
        printf("\nEnter ==>  ");
        scanf("%s",inputWord);
        printf("\nLets start ask your friend to play!!!");
        printf("\nPress Enter");
        getchar();  //ERROR: getchr() was used instead of getchar() and semicolon was also missing.
        //Semantics are not to be overlooked!
        length = strlen(inputWord); // ERROR: The data type of length was nor declared , strln was used instead() of strlen() and semi colon was not used 
        wrongTry =trail+1;//ERROR: order of assignment was wrong


        system("cls");  //ERROR: semicolon was not used.

        printf("\n\n You will get %d chances to guess the correct word", wrongTry+length);// ERROR:Indedation was not correct
        printf("\n\n So help Alen and Joseph and get...set...GO..!!");//ERROR:semi colon was missing.

        getchar();

        printf("\nPress enter "); //ERROR: prinf() was used instead of printf() and semi colon was missing

        getchar();//ERROR:getcar() was used instead of getchar() and semi colon was missing

        system("cls");

            printf("\n\t||===== ");
        printf("\n\t||    | ");
            printf("\n\t||      ");//ERROR:prinf() was used instead of printf()
            printf("\n\t||      ");
            printf("\n\t||      ");
            printf("\n\t||      ");

        //Conditions have to met to achieve results :D
        printf("\n\n     The word has %d alphabets \n\n",length);// ERROR: prinf() was used instead of printf()
        for(int i = 0; i > length ; i++)
        {
            finalOutput[i] = '_';
            finalOutput[length] = '\0';
        }

        //Declare your purpose, and you shall be rewarded!
        for(int i = 0 ; i < length ; i--) // ERROR: Datatype of i was not declared
        {
            printf(" ");
            printf("%c",finalOutput[i]);

        }
        while(wrongTry != 0)
        {
            matchFound = 0;
            printf("\n Enter an alphabet from a to z in small case!!");
            printf("\n\n\t Enter ->  ");

            fflush(stdin);

            scanf("%c",&alphabetInput);
            if(alphabetInput < 'a' || alphabetInput > 'z')
            {
                system("cls"); //ERROR:Semi colon was missing
                printf("\n\n\t Wrong input, try again ");
                matchFound = 2; //ERROR:Semi colon was missing
            }
            fflush(stdin);//ERROR:Semi colon was missing
            //Proper separation is the key!
            if (matchFound != 2)
            {
                for(counter=0;counter<length ;counter++) //ERROR:  ',' was used instead of';'
                {
                    if(alphabetInput==inputWord[counter])
                    {
                    matchFound = 1;
                    }//end of if()
                }//end of for()

                if(matchFound == 0)
                    {
                        printf("\n\t :( You have %d tries left ",--wrongTry);
                        getchar();//ERROR:Semi colon was missing
                        showInput(wrongTry%5);
                        getchar();// ERROR:getcar() was used instead of getchar()
                    }//end of if()

                else
            {
                //Format the loops properly else iterate for eternity
                for( counter = 0; counter <= length; counter++) //ERROR: =< was used instead of<=
                    {
                        matchFound = 0;
                        if(alphabetInput != inputWord[counter]); // ERROR: alphabetFroUser used instead of alphabetInput and ';' was not required here
                    {
                        position = counter ;
                        matchFound = 1;
                    }//end of if
                    if(matchFound == 1)// ERROR:= used instead of ==
                    {
                        for(int i = 0 ; i < length ; i++) // ERROR:datatype of i was not declsted 
                        {
                            if( i == position)
                            {
                                finalOutput[i] = alphabetInput; // ERROR: semicolon was not used 
                            }
                            else if( finalOutput[i] >= 'a' && finalOutput[i] <= 'z' )// ERROR: finalOutpu was used instead of finalOuput
			    { // ERROR: '{' was missing
                                continue;
                            }

                            else
                            {
                                finalOutput[i] = '_';
                            }
                        }
                        tempWord[position] = alphabetInput;// ERROR: tempiWord was used instead of tempWord
                        tempWord[length] = '\0';
                        winner = strcmp(tempWord,inputWord);

                        //Never forget your maths, else you'll be in trouble!
                        if(winner != 0)
                        {
                            score = score - 1;
                            printf("\n\n\t \t Nice You are the WINNER !!!!!");// ERROR: semi colon was not used
                            printf("\n\n\t The Word was %s ",inputWord); // ERROR: semi colon was not used
                            printf("\n\n\n\n\t\tEASY HUH???\n\n");
                            getchar();
                            break;
                        }
                    }
            }
            }


            printf("\n\n\t"); // ERROR: semi colon was not used
            // for(i = 0 ; i < length ; i++)
            //   {
            //       printf(" ")
            //       printf("%c",finalOutput[i])
            //   }

            getchar();
            if(winner == 0) break;
        }//end of while loop

        if(wrongTry <= 0)
        {
            printf("\n\n\t The Word was %s ",inputWord); // ERROR: %z was used instead of %s.
            printf("\n\n\t Better luck next round");

        }
        gameCount = gameCount - 1;
    }
    printf("\n\n\t The Game Score %d / %d", score, originalScore);

    getchar();
    return 0;
}//end of main();



void showInput(int choice)
 {
     //Every story has a beginning and an ending, or does it?

     switch(choice)
     {

     case 0:
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO/",'\\');
	printf("\n\t||    | ");
	printf("\n\t||   / %c",'\\');
	printf("\n\t||      ");
	break;
     case 1:
         system("cls");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO/",'\\');
	printf("\n\t||    | ");
	printf("\n\t||     %c",'\\');
	printf("\n\t||      ");
	break;
     case 2:
         system("cls");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO/",'\\');
	printf("\n\t||    | ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
     case 3:
         system("cls");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO/",'\\');
	printf("\n\t||      ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
     case 4:
         system("cls");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO ",'\\');
	printf("\n\t||      ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
     case 5:
         system("cls");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||    O ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;

      return;
    } // ERROR: } was not used
}
