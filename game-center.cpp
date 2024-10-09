#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
using namespace std;
class gameCenter{
public:
    void MASH ()
    {
        string location1, location2, location3, location4;
        string car1,car2, car3, car4;
        string job1, job2, job3, job4;
        string kids1,kids2, kids3, kids4;
        string pets1, pets2, pets3, pets4;
        string pettype1, pettype2, pettype3, pettype4;
        string petname1, petname2, petname3, petname4;
        string honeymoon1, honeymoon2, honeymoon3, honeymoon4;
        string salary1, salary2, salary3, salary4;
        string bestfriend1, bestfriend2, bestfriend3, bestfriend4;
        string spouse1, spouse2, spouse3, spouse4;
        int number;
        cout << "Welcome to MASH! where your future will be decided " << endl;
        cout << "You will be asked to fill out each category with 4 options" << endl;
        cout << "2 that you want and 2 that you wouldnt want" << endl;
        cout << "Lets begin, where would you like to live?" << endl;
        cout << "1. ";
        getline(cin, location1);
        cout << "2. ";
        getline(cin, location2);
        cout << "Where would you not want to live?" << endl;
        cout << "3. ";
        getline(cin, location3);
        cout << "4. ";
        getline(cin, location4);
        cout<< "Next question, What kind of car do you want to drive? " << endl;
        cout << "1. ";
        getline(cin, car1);
        cout << "2. ";
        getline(cin, car2);
        cout << " What kind of car would you not want to drive? " << endl;
        cout << "3. ";
        getline(cin, car3);
        cout << "4. ";
        getline(cin, car4);
        cout << "What is your dream job?" << endl;
        cout << "1. ";
        getline(cin, job1);
        cout << "2. ";
        getline(cin, job2);
        cout << "What job would you hate to have?" << endl;
        cout << "3. ";
        getline(cin, job3);
        cout << "4. ";
        getline(cin, job4);
        cout << " How much money do you want to make a this job?" << endl;
        cout << "1. ";
        getline(cin, salary1);
        cout << "2. ";
        getline(cin, salary2);
        cout << " How much would you now want to make ?" << endl;
        cout << "3. ";
        getline(cin, salary3);
        cout << "4. ";
        getline(cin, salary4);
        cout << " How many kids do you want to have?" << endl;
        cout << "1. ";
        getline(cin, kids1);
        cout << "2. ";
        getline(cin, kids2);
        cout << " How many kids would you not want to have" << endl;
        cout << "3. ";
        getline(cin, kids3);
        cout << "4. ";
        getline(cin, kids4);
        cout << "How many pets do you want to have" << endl;
        cout << "1. ";
        getline(cin, pets1);
        cout << "2. ";
        getline(cin, pets2);
        cout << " How many pets would you not want to have?" << endl;
        cout << "3. ";
        getline(cin, pets3);
        cout << "4. ";
        getline(cin, pets4);
        cout << " What kind of pet woud you want?" << endl;
        cout << "1. ";
        getline(cin, pettype1);
        cout << "2. ";
        getline(cin, pettype2);
        cout << " What kind of pet would you not want to have?" << endl;
        cout << "3. ";
        getline(cin, pettype3);
        cout << "4. ";
        getline(cin, pettype4);
        cout << " What would you want your pets name to be?" << endl;
        cout << "1. ";
        getline(cin, petname1);
        cout << "2. ";
        getline(cin, petname2);
        cout << "What would you not want your pet to be named?" << endl;
        cout << "3. ";
        getline(cin, petname3);
        cout << "4. ";
        getline(cin, petname4);
        cout << "Who do you want to marry?" << endl;
        cout << "1. ";
        getline(cin, spouse1);
        cout << "2. ";
        getline(cin, spouse2);
        cout << "Who would you not want to marry?" <<endl;
        cout << "3. ";
        getline(cin, spouse3);
        cout << "4. ";
        getline(cin, spouse4);
        cout << " Where would you want your honeymoon to be?" << endl;
        cout << "1. ";
        getline(cin, honeymoon1);
        cout << "2. ";
        getline(cin, honeymoon2);
        cout << " Where would you not want to go for your honeymoon? " << endl;
        cout << "3. ";
        getline(cin, honeymoon3);
        cout << "4. ";
        getline(cin, honeymoon4);
        cout << " Last but not least who would you want your best fried to be?" << endl;
        cout << "1. ";
        getline(cin, bestfriend1);
        cout << "2. ";
        getline(cin, bestfriend2);
        cout << " Who would you not want your best friend to be?" << endl;
        cout << "3. ";
        getline(cin, bestfriend3);
        cout << "4. ";
        getline(cin, bestfriend4);
        cout << "Now pick a number between 3 and 10 to decide your future?" << endl;
        cin >> number;
        if (number==3){
            cout << "Your future is..." <<endl;
            cout << "You will live in " << location4 << endl;
            cout << "You will drive a " << car4 << endl;
            cout << "Your job will be " << job3 <<endl;
            cout << "You will make " << salary4 << " dollars " <<endl;
            cout << "You will have " <<kids4 << " kids" <<endl;
            cout << "You will have " << pets2 << " pets" << endl;
            cout << "You will have a " << pettype2 << " as a pet" << endl;
            cout << "Your pets name will be " << petname3 << endl;
            cout << "Your spouse will be " << spouse3 << endl;
            cout << "Your honeymoon will be in " <<honeymoon4<< endl;
            cout << "Your best friend will be "<< bestfriend4<< endl;
            cout << " Now lets MASH to see what type of home you will live in, Mansion, Apartment, Shack or House" << endl;
            cout << " M A S H " << endl;
            cout << " M A   H " << endl;
            cout << " M     H " << endl;
            cout << " M      " << endl;
            cout<< " Lucky you, looks like you'll be living in a Mansion" << endl;
        }
        else if ( number==4){
            cout << "Your future is..." <<endl;
            cout << "You will live in " << location1 << endl;
            cout << "You will drive a " << car2 << endl;
            cout << "Your job will be " << job1 <<endl;
            cout << "You will make " << salary1 << " dollars "<< endl;
            cout << "You will have " <<kids1 << " kids" <<endl;
            cout << "You will have " << pets2 << " pets" << endl;
            cout << "You will have a " << pettype3 << " as a pet" << endl;
            cout << "Your pets name will be " << petname1 << endl;
            cout << "Your spouse will be " << spouse1 << endl;
            cout << "Your honeymoon will be in " <<honeymoon2<< endl;
            cout << "Your best friend will be "<< bestfriend3<< endl;
            cout << " Now lets MASH to see what type of home you will live in, Mansion, Apartment, Shack or House" << endl;
            cout << " M A S H " << endl;
            cout << " M A S   " << endl;
            cout << "   A S   " << endl;
            cout << "   A      " << endl;
            cout<< " Not too bad, looks like you'll be living in an apartment" << endl;
        }
        else if (number==5) {
            cout << "Your future is..." <<endl;
            cout << "You will live in " << location2 << endl;
            cout << "You will drive a " << car2 << endl;
            cout << "Your job will be " << job3 <<endl;
            cout << "You will make " << salary2 << " dollars "<<endl;
            cout << "You will have " <<kids2 << " kids" <<endl;
            cout << "You will have " << pets2 << " pets" << endl;
            cout << "You will have a " << pettype3 << " as a pet" << endl;
            cout << "Your pets name will be " << petname1 << endl;
            cout << "Your spouse will be " << spouse4 << endl;
            cout << "Your honeymoon will be in " <<honeymoon1<< endl;
            cout << "Your best friend will be "<< bestfriend3<< endl;
            cout << " Now lets MASH to see what type of home you will live in, Mansion, Apartment, Shack or House" << endl;
            cout << " M A S H " << endl;
            cout << "   A S H " << endl;
            cout << "   A   H " << endl;
            cout << "   A      " << endl;
            cout<< " Not too bad, looks like you'll be living in an apartment" << endl;
        }
        else if (number==6) {
            cout << "Your future is..." <<endl;
            cout << "You will live in " << location1 << endl;
            cout << "You will drive a " << car4 << endl;
            cout << "Your job will be " << job1 <<endl;
            cout << "You will make " << salary3 <<" dollars "<<endl;
            cout << "You will have " <<kids1 << " kids" <<endl;
            cout << "You will have " << pets2 << " pets" << endl;
            cout << "You will have a " << pettype1 << " as a pet" << endl;
            cout << "Your pets name will be " << petname4 << endl;
            cout << "Your spouse will be " << spouse3 << endl;
            cout << "Your honeymoon will be in " <<honeymoon1<< endl;
            cout << "Your best friend will be "<< bestfriend1<< endl;
            cout << " Now lets MASH to see what type of home you will live in, Mansion, Apartment, Shack or House" << endl;
            cout << " M A S H " << endl;
            cout << " M   S H " << endl;
            cout << "     S H " << endl;
            cout << "     S   " << endl;
            cout<< " Oh no, looks like you'll be living in a shack" << endl;
        }
        else if (number==7) {
            cout << "Your future is..." <<endl;
            cout << "You will live in " << location4 << endl;
            cout << "You will drive a " << car4 << endl;
            cout << "Your job will be " << job1 <<endl;
            cout << "You will make " << salary4 <<" dollars "<<endl;
            cout << "You will have " <<kids1 << " kids" <<endl;
            cout << "You will have " << pets3 << " pets" << endl;
            cout << "You will have a " << pettype3 << " as a pet" << endl;
            cout << "Your pets name will be " << petname4 << endl;
            cout << "Your spouse will be " << spouse4 << endl;
            cout << "Your honeymoon will be in " <<honeymoon3<< endl;
            cout << "Your best friend will be "<< bestfriend1<< endl;
            cout << " Now lets MASH to see what type of home you will live in, Mansion, Apartment, Shack or House" << endl;
            cout << " M A S H " << endl;
            cout << " M A   H " << endl;
            cout << " M A     " << endl;
            cout << "   A     " << endl;
            cout<< " Not too bad, looks like you'll be living in an apartment" << endl;
        }
        else if (number==8) {
            cout << "Your future is..." <<endl;
            cout << "You will live in " << location1 << endl;
            cout << "You will drive a " << car1 << endl;
            cout << "Your job will be " << job1 <<endl;
            cout << "You will make " << salary2 <<" dollars "<<endl;
            cout << "You will have " <<kids2 << " kids" <<endl;
            cout << "You will have " << pets3 << " pets" << endl;
            cout << "You will have a " << pettype1 << " as a pet" << endl;
            cout << "Your pets name will be " << petname1 << endl;
            cout << "Your spouse will be " << spouse3 << endl;
            cout << "Your honeymoon will be in " <<honeymoon3<< endl;
            cout << "Your best friend will be "<< bestfriend2<< endl;
            cout << " Now lets MASH to see what type of home you will live in, Mansion, Apartment, Shack or House" << endl;
            cout << " M A S H " << endl;
            cout << " M A S   " << endl;
            cout << " M   S   " << endl;
            cout << "     S  " << endl;
            cout<< " Oh no, looks like you'll be living in a shack" << endl;
        }
        else if (number==9) {
            cout << "Your future is..." <<endl;
            cout << "You will live in " << location3 << endl;
            cout << "You will drive a " << car2 << endl;
            cout << "Your job will be " << job4 <<endl;
            cout << "You will make " << salary3 <<" dollars "<<endl;
            cout << "You will have " <<kids1 << " kids" <<endl;
            cout << "You will have " << pets3 << " pets" << endl;
            cout << "You will have a " << pettype1 << " as a pet" << endl;
            cout << "Your pets name will be " << petname4 << endl;
            cout << "Your spouse will be " << spouse3 << endl;
            cout << "Your honeymoon will be in " <<honeymoon3 << endl;
            cout << "Your best friend will be "<< bestfriend3 << endl;
            cout << " Now lets MASH to see what type of home you will live in, Mansion, Apartment, Shack or House" << endl;
            cout << " M A S H " << endl;
            cout << "   A S H " << endl;
            cout << "   A S   " << endl;
            cout << "     S   " << endl;
            cout<< " Oh no, looks like you'll be living in a shack" << endl;
        }
        else if (number==10) {
            cout << "Your future is..." <<endl;
            cout << "You will live in " << location1 << endl;
            cout << "You will drive a " << car1 << endl;
            cout << "Your job will be " << job1 <<endl;
            cout << "You will make " << salary4 <<" dollars "<<endl;
            cout << "You will have " <<kids2 << " kids" <<endl;
            cout << "You will have " << pets3 << " pets" << endl;
            cout << "You will have a " << pettype1 << " as a pet" << endl;
            cout << "Your pets name will be " << petname3 << endl;
            cout << "Your spouse will be " << spouse2 << endl;
            cout << "Your honeymoon will be in " <<honeymoon2 << endl;
            cout << "Your best friend will be "<< bestfriend3 << endl;
            cout << " Now lets MASH to see what type of home you will live in, Mansion, Apartment, Shack or House" << endl;
            cout << " M A S H " << endl;
            cout << " M   S H " << endl;
            cout << " M     H " << endl;
            cout << "       H " << endl;
            cout<< " Looks like you'll be living in a house" << endl;
        }
        cout << " Thanks for playing, enjoy your MASH future!" <<endl;
    }
    void ticTactoe()
    {
        int num=0;
        int player(1), mark = 0;
        int choice,choice2;
         char square1('1');
         char square2('2');
         char square3('3');
         char square4('4');
         char square5('5');
         char square6('6');
         char square7('7');
         char square8('8');
         char square9('9');
        cout << "Welcome to Tic Tac Toe" << endl;
        cout << "This is a two person game, when you find your partenr enter 1"<< endl;
        cin >> num;
        if(num==1){
            cout << "    " <<square1<< "  |  " <<square2<< "  |  " << square3 <<endl;
            cout << " -------------------" << endl;
            cout << "    " <<square4<< "  |  " <<square5<< "  |  " << square6 <<endl;
            cout << " -------------------" << endl;
            cout << "    " <<square7<< "  |  " <<square8<< "  |  " << square9 <<endl;
           
            while(num==1){
            cout << "Player " << player << " enter a number "<< endl;
            cin >> choice;
            if ((player = 1)){
                mark = 'X';
            }
            if (choice==1 && square1=='1')
                square1=mark;
           if(choice==2 && square2=='2')
                square2=mark;
             if(choice==3 && square3=='3')
                square3=mark;
             if(choice==4 && square4=='4')
                square4=mark;
             if(choice==5 && square5=='5')
                 square5=mark;
             if(choice==6 && square6=='6')
                square6=mark;
             if(choice==7 && square7=='7')
                square7=mark;
             if(choice==8 && square8=='8')
                square8=mark;
             if(choice==9 && square9=='9')
                square9=mark;
        cout << "    " <<square1<< "  |  " <<square2<< "  |  " << square3 <<endl;
        cout << " -------------------" << endl;
        cout << "    " <<square4<< "  |  " <<square5<< "  |  " << square6 <<endl;
        cout << " -------------------" << endl;
        cout << "    " <<square7<< "  |  " <<square8<< "  |  " << square9 <<endl;
                if (square1==square2 && square2==square3){
                    cout<< square1 << " You win!" << endl;
                    cout << "Thank you for playing!" << endl;
                    break;
                }
                else if (square4==square5 && square5==square6){
                    cout << square4 << " You win!" <<endl;
                    cout << "Thank you for playing!" << endl;
                    break;
                }
                else if (square7==square8 && square8==square9){
                    cout << square7 << " You win!" <<endl;
                    cout << "Thank you for playing!" << endl;
                    break;
                }
                else if (square1==square4 && square4==square7){
                    cout << square1 << " You win!" <<endl;
                    cout << "Thank you for playing!" << endl;
                    break;
                }
                else if (square2==square5 && square5==square8){
                    cout << square2 << " You win!" <<endl;
                    cout << "Thank you for playing!" << endl;
                    break;
                }
                else if (square3==square6 && square6==square9){
                    cout << square3 << " You win!" <<endl;
                    cout << "Thank you for playing!" << endl;
                    break;
                }
                else if (square1==square5 && square5==square9){
                    cout << square1 << " You win!" <<endl;
                    cout << "Thank you for playing!" << endl;
                    break;
                }
                else if (square3==square5 && square5==square7){
                    cout << square3 << " You win!" <<endl;
                    cout << "Thank you for playing!" << endl;
                    break;
                }
                else if (square1 != '1' && square2 != '2' && square3 != '3' && square4 != '4' && square5 != '5' && square6 != '6' && square7 != '7' && square8 != '8' && square9 != '9' ){
                    cout<< " Its a draw" << endl;
                    cout << "Thank you for playing!" << endl;
                    break;
                }
                player++;
            if ((player = 1)){
                mark = 'X';
            }
            if ((player = 2)){
                mark= 'O';
            }
            cout << "Player " << player << " enter a number "<< endl;
            cin >> choice2;
            if (choice2==1 && square1=='1')
                square1=mark;
            else if(choice2==2 && square2=='2')
                square2=mark;
            else if(choice2==3 && square3=='3')
                square3=mark;
            else if(choice2==4 && square4=='4')
                square4=mark;
            else if(choice2==5 && square5=='5')
                square5=mark;
            else if(choice2==6 && square6=='6')
                square6=mark;
            else if(choice2==7 && square7=='7')
                square7=mark;
            else if(choice2==8 && square8=='8')
                square8=mark;
            else if(choice2==9 && square9=='9')
                square9=mark;
            cout << "    " <<square1<< "  |  " <<square2<< "  |  " << square3 <<endl;
            cout << " -------------------" << endl;
            cout << "    " <<square4<< "  |  " <<square5<< "  |  " << square6 <<endl;
            cout << " -------------------" << endl;
            cout << "    " <<square7<< "  |  " <<square8<< "  |  " << square9 <<endl;
             player--;
                if (square1==square2 && square2==square3){
                    cout<< square1 << " You win!" << endl;
                    cout << "Thank you for playing!" << endl;
                    break;
                }
                else if (square4==square5 && square5==square6){
                    cout << square4 << " You win!" <<endl;
                     cout << "Thank you for playing!" << endl;
                    break;
                }
                else if (square7==square8 && square8==square9){
                    cout << square7 << " You win!" <<endl;
                     cout << "Thank you for playing!" << endl;
                    break;
                }
                else if (square1==square4 && square4==square7){
                    cout << square1 << " You win!" <<endl;
                     cout << "Thank you for playing!" << endl;
                    break;
                }
                else if (square2==square5 && square5==square8){
                    cout << square2 << " You win!" <<endl;
                     cout << "Thank you for playing!" << endl;
                    break;
                }
                else if (square3==square6 && square6==square9){
                    cout << square3 << " You win!" <<endl;
                     cout << "Thank you for playing!" << endl;
                    break;
                }
                else if (square1==square5 && square5==square9){
                    cout << square1 << " You win!" <<endl;
                     cout << "Thank you for playing!" << endl;
                    break;
                }
                else if (square3==square5 && square5==square7){
                    cout << square3 << " You win!" <<endl;
                     cout << "Thank you for playing!" << endl;
                    break;
                }
                else if (square1 != '1' && square2 != '2' && square3 != '3' && square4 != '4' && square5 != '5' && square6 != '6' && square7 != '7' && square8 != '8' && square9 != '9' ){
                    cout<< "Its a draw" << endl;
                     cout << "Thank you for playing!" << endl;
                    break;
                }
            }
        }
    }
    void Hangman()
    {
        int l = 0, i, n, a, j = 0, h;
        char letter, w1[20] = { 0 }, w2[20] = { 0 }, p1[20], p2[20];
        cout << endl;
        cout << "Welcome to Hangman!" << endl;
        while (j < 2)
        {
            cout << "\nPlayer 1, please enter your name: ";
            cin >> p1;
            cout << "\nPlayer 2, please enter your name: ";
            cin >> p2;
            cout << endl;
            cout << p1 << ", please enter a word for " << p2 << " to guess: ";
            cin >> w1;
            a = strlen(w1);
            cout << endl;
            cout << "HINT: The word is " << a << " letters long." << endl;
            cout << endl;
            cout << "+--|--\n|\n|\n|\n|-----";
            while (l <= 5 && strcmp(w2, w1) != 0)
            {
                n = 0;
                cout << endl << "Please guess a letter: ";
                cin >> letter;
                for (i = 0;i < 20;i++)
                {
                    if (w1[i] == letter)
                    {
                        w2[i] = w1[i];
                        n = 1;
                        cout << endl;
                        cout << "Good guess, that's right!" << endl;
                    }
                }
                if (n < 1)
                {
                    l = l + 1;
                    switch (l)
                    {
                        case 1:
                            cout << "+--|--\n|  O \n| \n| \n|-----" << endl << endl;
                            cout << "Not quite... guess again." << endl;
                            break;
                        case 2:
                            cout << "+--|--\n|  O \n|  | \n| \n|-----" << endl << endl;
                            cout << "Not quite... guess again." << endl;
                            break;
                        case 3:
                            cout << "+--|--\n|  O \n| /| \n| \n|-----" << endl << endl;
                            cout << "Not quite... guess again." << endl;
                            break;
                        case 4:
                            cout << "+--|--\n|  O\n| /|\\\n| \ \n|-----" << endl << endl;
                            cout << "Not quite... guess again." << endl;
                            break;
                        case 5:
                            cout << "+--|--\n|  O \n| /|\\\n| / \ \n|-----" << endl << endl;
                            cout << "Not quite... guess again." << endl;
                            break;
                    }
                }
            }
            if (l > 5)
            {
                cout << "+--|--\n|  O\n| /|\\\n| / \\\n|-----" << endl << endl;
                cout << endl << "Sorry " << p2 << ", you've run out of chances!" << endl;
                cout << "You lost!" << endl;
                cout << "The word was: " << w1 << "." << endl;
            }
            else
            {
                cout << endl << "Congrats " << p2 << ", you guessed the word correctly!" << endl;
                cout << "You win!" << endl;
                cout << "The word was: " << w1 << "." << endl;
            }
            cout << "\n\nDo you want to play again? \n Yes (1) or no (2).";
            cin >> h;
            if (h == 1)
            {
                j = 0;
            }
            if (h == 2)
            {
                j = 3;
            }
        }
        while ((j = 3)) {
            cout << endl;
            cout << "Thanks for playing!" << endl;
            cout << endl;
            break;
            cin.get();
            cin.get();
        }
    }
    void RPS()
    {
        srand(time(NULL));
        int cpu, w = 0, l = 0, n;
        char play = 'y';
        cout << "Let's play Rock Paper Scissors!" << endl;
        while (play == 'Y' || play == 'y')
        {
            cout << "What will you throw?" << endl;
            cout << "1. Rock" << endl;
            cout << "2. Paper" << endl;
            cout << "3. Scissors" << endl;
            cin >> n;
            cpu = rand() % 3 + 1;
            
            if (n == 1 && cpu == 2)
            {
                cout << "You threw rock. The CPU threw paper. YOU LOSE!" << endl;
                l++;
            }
            else if (n == 2 && cpu == 3)
            {
                cout << "You threw paper. The CPU threw scissors. YOU LOSE!" << endl;
                l++;
            }
            else if (n == 1 && cpu == 3)
            {
                cout << "You threw rock. The CPU threw scissors. YOU WIN!" << endl;
                w++;
            }
            else if (n == 3 && cpu == 2)
            {
                cout << "You threw scissors. The CPU threw paper. YOU WIN!" << endl;
                w++;
            }
            else if (n == 1 && cpu == 1)
            {
                cout << "It's a DRAW!" << endl;
            }
            else if (n == 2 && cpu == 2)
            {
                cout << "It's a DRAW!" << endl;
            }
            else if (n == 3 && cpu == 3)
            {
                cout << "It's a DRAW!" << endl;
            }
            
            cout << "You have won " << w << " games and lost " << l << " games." << endl;
            cout << "Play again? (y/n)" << endl;
            cin >> play;
        }
}
    void Trivia()
    {
        string name;
        int n = 0; // Number of Correct answers
        char x; // Answer Input
        
        cout << "WHO WANTS TO BE A MILLIONAIRE?!" << endl;
        cout << "What's your name?" << endl;
        cin >> name;
        
        cout << "Okay, " << name << ", for every question you get correct, you'll be one step closer towards ONE MILLION DOLLARS!" << endl;
        cout << "Let's get started!" << endl;
        cout << " First Question, for $100:\nWhat is the name of the Stevens Duck?" << endl;
        cout << "A. Donald\tB. Daffy \nC. Attila\tD. Steve" << endl;
        cin >> x;
        if (x == 'C' || x == 'c')
        {
            cout << "That's correct! Next Question, for $500:" << endl;
            n++;
        }
        else
        {
            cout << "Sorry, that's incorrect. You didn't win any money." << endl;
        }
        if (n == 1)
        {
            cout << "Which Sesame Street character is also known as the Grouch?" << endl;
            cout << "A. Elmo\tB. Ernie \nC. Bert\tD. Oscar" << endl;
            cin >> x;
        }
        if (x == 'D' || x == 'd')
        {
            cout << "That's correct! Next Question, for $1000:" << endl;
            n++;
        }
        else
        {
            cout << "Sorry, that's incorrect. You won $500!" << endl;
        }
        if (n == 2)
        {
            cout << "When was Stevens Institute of Technology founded?" << endl;
            cout << "A. 1870\tB. 1860 \nC. 1808\tD. 1999" << endl;
            cin >> x;
        }
        if (x == 'A' || x == 'a')
        {
            cout << "That's correct! Next Question, for $5000:" << endl;
            n++;
        }
        else
        {
            cout << "Sorry, that's incorrect. You won $1000!" << endl;
        }
        if (n == 3)
        {
            cout << "Which species is most abundant on Earth?" << endl;
            cout << "A. Humans\tB. Plankton \nC. Flies\tD. Sheep" << endl;
            cin >> x;
        }
        if (x == 'B' || x == 'b')
        {
            cout << "That's correct! Next Question, for $10000:" << endl;
            n++;
        }
        else
        {
            cout << "Sorry, that's incorrect. You won $5000!" << endl;
        }
        if (n == 4)
        {
            cout << "Who is Colonel John?" << endl;
            cout << "A. Founder of Hoboken\tB. Founder of Stevens \nC. WWII Veteran\t D. Founder of Stevens' Son" << endl;
            cin >> x;
        }
        if (x == 'A' || x == 'a')
        {
            cout << "That's correct! Next Question, for $50000:" << endl;
            n++;
        }
        else
        {
            cout << "Sorry, that's incorrect. You won $10000!" << endl;
        }
        if (n == 5)
        {
            cout << "What was Elton John’s first US No 1 hit?" << endl;
            cout << "A. Rocket Man\tB. Tiny Dancer \nC. Crocodile Rock\tD. Goodbye Yellow Brick Road" << endl;
            cin >> x;
        }
        if (x == 'C' || x == 'c')
        {
            cout << "That's correct! Next Question, for 100000:" << endl;
            n++;
        }
        else
        {
            cout << "Sorry, that's incorrect. You won $50000!" << endl;
        }
        if (n == 6)
        {
            cout << "What is sidonglobaphobia the fear of?" << endl;
            cout << "A. Cotton Balls\tB. Pool Noodles\nC. Bouncy Castles\tD. Tractor Trailers" << endl;
            cin >> x;
        }
        if (x == 'A' || x == 'a')
        {
            cout << "That's correct! Next Question, for $500000:" << endl;
            n++;
        }
        else
        {
            cout << "Sorry, that's incorrect. You won $100000!" << endl;
        }
        if (n == 7)
        {
            cout << "At the beginning of the 1990s which country had most camels?" << endl;
            cout << "A. Persia\tB. Niger \nC. Sudan\tD. Somalia" << endl;
            cin >> x;
        }
        if (x == 'D' || x == 'd')
        {
            cout << "That's correct! Next Question, for ONE MILLION DOLLARS:" << endl;
            n++;
        }
        else
        {
            cout << "Sorry, that's incorrect. You won $500000!" << endl;
        }
        if (n == 8)
        {
            cout << "The World's biggest what was made at Utica, New York in January 1998?" << endl;
            cout << "A. Pizza Slice\tB. Jelly Donut\nC. Pretzel\tD. Hot Dog" << endl;
            cin >> x;
        }
        if (x == 'B' || x == 'b')
        {
            cout << "That's correct! CONGRATULATIONS!" << endl;
            cout << name << ", YOU'RE A MILLIONAIRE!" << endl;
            cout << "Thanks for playing!" << endl;
        }
    }
    void madLibs()
    {
        int choice=0;
        string relative, adjective1, adjective2,adjective3,name1,adjective4, adjective5,verbed1, bodypart1,verbing1,nouns1,noun1,adverb1,verb1,verb2,relative2,name2;
        string adjective6, verbed2, nouns2, liquid1, nouns3, famousperson1, place1, occupation1, noun3, nationality1, femalecelebrity1, noun4, female1, nouns4, number1, adjective7;
        string adverb2, noun5, liquid2, verb3, number2, nouns5, verb4, adjective8, noun6, nouns6, illness1, occupation2, bodyparts1, bodypart2;
        string n1, n2, n3, n4, n5, n6, n7;
        string v1, v2, v3;
        string bp1, bp2, bp3, bp4;
        string av1;
        
        while (choice!= '0'){
        cout<< "Welcome to Madlibs" <<endl;
        cout <<"Which storyline would you like to choose?" <<endl;
        cout<< "1. A letter home from camp 2. How to wash your face 3. A Dating Profile Ad 4.Afarid of the dark"<< endl;
        cout<< "[1/2/3/4]" << endl;
            cin >> choice;
        if (choice==1){
            cout<< "Relative" <<endl;
            getline (cin,relative);
            cout <<"adjective" <<endl;
            getline (cin,adjective1);
            cout <<"adjective" <<endl;
            getline (cin,adjective2);
            cout <<"adjective" <<endl;
            getline (cin,adjective3);
            cout <<"Name of person in room" <<endl;
            getline (cin,name1);
            cout <<"adjective" <<endl;
            getline (cin,adjective4);
            cout <<"adjective" <<endl;
            getline (cin,adjective5);
            cout <<"Verb ending in -ed" <<endl;
            getline (cin,verbed1);
            cout <<"body part" <<endl;
            getline (cin,bodypart1);
            cout <<"verb ending in -ing" <<endl;
            getline (cin,verbing1);
            cout <<"plural noun" <<endl;
            getline (cin,nouns1);
            cout <<"noun" <<endl;
            getline (cin,noun1);
            cout <<"adverb" <<endl;
            getline (cin,adverb1);
            cout <<"verb" <<endl;
            getline (cin,verb1);
            cout <<"verb" <<endl;
            getline (cin,verb2);
            cout <<"Relative" <<endl;
            getline (cin,relative2);
            cout << "person in room" <<endl;
            getline (cin,name2);
            cout<< "Your story is..." <<endl;
            cout << "Dear " << relative<< endl;
            cout <<" I am having a(n) " << adjective1<< " time at camp."<<endl;
            cout<<"The counselour is"<< adjective2<< " and the food is "<< adjective3<< "." <<endl;
            cout <<"I met"<<name1<<" and we became "<< adjective4<<" friends. " <<endl;
            cout<<" Unfortunately," << name1<<  "is " <<adjective5<< "and I " <<verbed1<<" my " << bodypart1<<" so we couldn`t go" << verbing1 << "like everybody else." <<endl;
            cout<<" I need more "<<nouns1<<" and a "<< noun1<<" sharpener, so please" <<  adverb1<< verb1<< "more when you "<< verb2<<" back." <<endl;
            cout <<"Thanks, Love ya"<<endl;
            cout << "Your " <<relative2<<endl;
            cout<< name1;
            }
            if(choice==2){
                cout<< "adverb" <<endl;
                getline (cin,adverb2);
                cout <<"noun" <<endl;
                getline (cin,noun5);
                cout <<"liquid" <<endl;
                getline (cin,liquid2);
                cout <<"verb" <<endl;
                getline (cin,verb3);
                cout <<"number" <<endl;
                getline (cin,number2);
                cout <<"plural noun" <<endl;
                getline (cin,nouns5);
                cout <<"verb" <<endl;
                getline (cin,verb4);
                cout <<"adjective" <<endl;
                getline (cin,adjective8);
                cout <<"noun" <<endl;
                getline (cin,noun6);
                cout <<"plural noun" <<endl;
                getline (cin,nouns6);
                cout <<"illness" <<endl;
                getline (cin,illness1);
                cout <<"occupation" <<endl;
                getline (cin,occupation2);
                cout <<"plural body part" <<endl;
                getline (cin,bodypart1);
                cout <<"body part" <<endl;
                getline (cin,bodypart2);
                cout<< "Your story is..." <<endl;
                cout<< "In order to wash your face " <<adverb2<< ", you must wet your "<< noun5<<" in warm"<< liquid2<<"."<<endl;
                cout<<"Then, " <<verb3<< " it across your face " <<number2<<" times."<< endl;
                cout <<"This will wash off any remainig "<<nouns5<< ". "<< endl;
                cout<< "When you are done you should " <<verb4<<" the cloth in "<< adjective8<< " water to clean it." <<endl;
                cout<<"You should also wash your face with a " <<noun6<< " to keep it smooth and shiny. "<<endl;
                cout<< "This will keep also keep away " <<nouns6<< "."<< endl;
                cout<<"Don`t worry. It is normal to experience "<< illness1<< " the first time you try this."<<endl;
                cout<< "Consult your "<< occupation2<< " if you break out in " <<bodyparts1<< "." <<endl;
                cout<<"This works well on your" << bodypart2<<" too! " <<endl;
            }
            if(choice==3){
                cout<< "adjective" <<endl;
                getline (cin,adjective6);
                cout <<"verb ending in -ed" <<endl;
                getline (cin,verbed2);
                cout <<"plural noun" <<endl;
                getline (cin,nouns2);
                cout <<"liquid" <<endl;
                getline (cin,liquid1);
                cout <<"plural noun" <<endl;
                getline (cin,nouns3);
                cout <<"Famous person" <<endl;
                getline (cin,famousperson1);
                cout <<"Place" <<endl;
                getline (cin,place1);
                cout <<"Occupation" <<endl;
                getline (cin,occupation1);
                cout <<"Noun" <<endl;
                getline (cin,noun3);
                cout <<"Nationality" <<endl;
                getline (cin,nationality1);
                cout <<"Female Celebrity" <<endl;
                getline (cin,femalecelebrity1);
                cout <<"Noun" <<endl;
                getline (cin,noun4);
                cout <<"Female Friend" <<endl;
                getline (cin,female1);
                cout <<"Plural noun" <<endl;
                getline (cin,nouns4);
                cout <<"number" <<endl;
                getline (cin,number1);
                cout <<"adjective" <<endl;
                getline (cin,adjective7);
                cout <<"Your story is..."<<endl;
                cout << "I enjoy long," << adjective6 << "walks on the beach, getting "<< verbed2 <<" in the rain and serendipitous encounters with" << nouns2 << ". " <<endl;
                cout<<" I really like piña coladas mixed with "<< liquid1 << ", and romantic, candle-lit " << nouns3 << "."<<endl;
                cout<< "I am well-read from Dr. Seuss to " << famousperson1 <<"."<<endl;
                cout<<"I travel frequently, especially to"<< place1<<", when I am not busy with work. (I am a "<<occupation1<< ".) "<<endl;
                cout<<"I am looking for" << noun3 <<" and beauty in the form of a " << nationality1 << " goddess." <<endl;
                cout<<"She should have the physique of "<< femalecelebrity1 <<  "and the " << noun4 << " of " << female1 << "."<<endl;
                cout<<"I would prefer if she knew how to cook, clean, and wash my "<< nouns4 << "." <<endl;
                cout<< "I know I’m not very attractive in my picture, but it was taken " << number1 << " days ago, and I have since become more" << adjective7 << "." <<endl;
            }
            if (choice==4)
            {
                cout << "Plural Noun:" << endl;
                cin >> n1;
                cout << "Verb Ending in Ing:" << endl;
                cin >> v1;
                cout << "Noun:" << endl;
                cin >> n2;
                cout << "Noun:" << endl;
                cin >> n3;
                cout << "Plural Noun:" << endl;
                cin >> n4;
                cout << "Body Part:" << endl;
                cin >> bp1;
                cout << "Noun:" << endl;
                cin >> n5;
                cout << "Verb Engind in Ing:" << endl;
                cin >> v2;
                cout << "Plural Body Part:" << endl;
                cin >> bp2;
                cout << "Verb Ending in Ing:" << endl;
                cin >> v3;
                cout << "Noun:" << endl;
                cin >> n6;
                cout << "Noun:" << endl;
                cin >> n7;
                cout << "Body Part:" << endl;
                cin >> bp3;
                cout << "Adverb:" << endl;
                cin >> av1;
                cout << "Body Part Plural:" << endl;
                cin >> bp4;
                
                cout << "Afraid of the Dark" << endl;
                cout << "I was home alone and scared out of my " << n1 << "." << endl;
                cout << "I could hear the wind " << v1 << ", and off in the distance a / an " << n2 << " was howling." << endl;
                cout << "I crossed the room, locked the " << n3 << ", and climbed into bed, pullng the " << n4 << " over my " << bp1 << "." << endl;
                cout << "Then it happened.I could hear a / an " << n5 << v2 << " up the stairs." << endl;
                cout << "My " << bp2 << "started to chatter and my knees began " << v3 << "." << endl;
                cout << "The " << n6 << " was thrust open and there was a huge " << n7 << " with hair all over his " << bp3 << "." << endl;
                cout << "It was my father. 'Hi, we're home, ' he said " << av1 << "." << endl;
                cout << "'Hope you weren't afraid of staying home alone.' 'No, ' I said, lying through my " << bp4 << "." << endl;

            }
            cout << "Which would you like to play? enter 0 to quit" << endl;
            cin >> choice;
        }
    }
};
int main(){
    char choice = '\0';
    gameCenter var;
    while(choice != '0')
    {
        cout << "     ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
        cout << "     +                  WELCOME TO GAME CENTER!                 +" << endl;
        cout << "     +             Which game would you like to play?           +" << endl;
        cout << "     +                  To play MASH, press 1                   +" << endl;
        cout << "     +               To play Tic Tac Toe, press 2               +" << endl;
        cout << "     +                 To play Hangman, press 3                 +" << endl;
        cout << "     +            To play Rock, Paper Scissor press 4           +" << endl;
        cout << "     +                  To play Trivia press 5                  +" << endl;
        cout << "     +                  To play MadLibs press 6                 +" << endl;
        cout << "     +                     To exit, press 0                     +" << endl;
        cout << "     ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
        cout << "                           [0/1/2/3/4/5/6]                         " << endl;
        cin >> choice;
        if (choice=='1'){
            var.MASH();
        }
        if (choice=='2'){
            var.ticTactoe();
        }
        if(choice=='3'){
            var.Hangman();
        }
        if(choice== '4'){
            var.RPS();
        }
        if(choice=='5'){
            var.Trivia();
        }
        if(choice=='6'){
            var.madLibs();
        }
        if (choice== '0'){
            return 0;
        }
    }
    return 0;
}
