#include <bits/stdc++.h>
using namespace std;

char space[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

void display()
{
    cout << "     |     |     \n";
    cout << "  " << space[0] << "  |  " << space[1] << "  |  " << space[2] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << space[3] << "  |  " << space[4] << "  |  " << space[5] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << space[6] << "  |  " << space[7] << "  |  " << space[8] << endl;
    cout << "     |     |     " << endl;
}

int findingWinner(char space[])
{
    if ((space[0] == space[1]) && (space[1] == space[2]))
        return 1;

    else if (space[3] == space[4] && space[4] == space[5])
        return 1;

    else if ((space[6] == space[7]) && (space[7] == space[8]))
        return 1;

    else if (space[0] == space[3] && space[3] == space[6])
        return 1;

    else if (space[1] == space[4] && space[4] == space[7])
        return 1;

    else if (space[2] == space[5] && space[5] == space[8])
        return 1;

    else if (space[0] == space[4] && space[4] == space[8])
        return 1;

    else if (space[2] == space[4] && space[4] == space[6])
        return 1;

    else if (space[0] != '1' && space[1] != '2' && space[2] != '3' && space[3] != '4' && 
    space[4] != '5' && space[5] != '6' && space[6] != '7' && space[7] != '8' && space[8] != '9')
        return 0;

    else
        return -1;
}

int main()
{
    int player=1,check,choice;
    char spot;

    cout << "\n\t\t TIC TAC TOE\n\n\n";

    string name1;
    string name2;
    cout<<"Enter name of first player: ";
    getline(cin,name1);
    cout<<"Enter name of the second player: ";
    getline(cin, name2);
    cout<<"\n\n####INSTRUCTION####"<<endl;
    cout<<name1<<" is the player 1"<<endl;
    cout<<name2<<" is the player 2"<<endl;
    cout<<"Player1 => X\n Player2 => O"<<endl;
    cout<<"Both the player will have to select only the place at which you wants to put X or O"<<endl;

    cout<<"\n\n***********************LET'S PLAY THE GAME**********************"<<endl<<endl;

    do{
        display();
        player = (player % 2 != 0) ? 1 : 2;
        cout<<"Player"<<player<<" enter a digit: ";
        cin>>choice;
        spot = (player == 1) ? 'X' : 'O';

        if(choice == 1 && space[0] == '1')
            space[0] = spot;
        
        else if(choice == 2 && space[1] == '2')
            space[1] = spot;

        else if(choice == 3 && space[2] == '3')
            space[2] = spot;

        else if(choice == 4 && space[3] == '4')
            space[3] = spot;
        
        else if(choice == 5 && space[4] == '5')
            space[4] = spot;

        else if(choice == 6 && space[5] == '6')
            space[5] = spot;  

        else if(choice == 7 && space[6] == '7')
            space[6] = spot;

        else if(choice == 8 && space[7] == '8')
            space[7] = spot; 

        else if(choice == 9 && space[8] == '9')
            space[8] = spot; 

        else{
            cout<<"Invalid Move by the player";
            player--;
        } 
        check = findingWinner(space);
        player++;

    }while(check == -1);

    display();

    if(check == 1){
        cout<<"Player"<<--player<<" wins. Congratulations!"<<endl;
    }
    else{
        cout<<"Game draw! Better luck next time!"<<endl;
    }
    cout<<"Thank You!"<<endl<<endl;

    return 0;
}