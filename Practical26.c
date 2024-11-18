#include<stdio.h>
#include<string.h>
struct Coach
{
    char name[50];
    int age;
    float experience;
};
struct Team
{
    char teamName[50];
    char sportType[50];
    struct Coach coach;
};

int addTeam(struct Team team[],int teamcount)
{
    fflush(stdin);
    printf("Enter the team name:\n");
    gets(team[teamcount].teamName);
    fflush(stdin);

    printf("Enter the sport type:\n");
    gets(team[teamcount].sportType);
    fflush(stdin);

    printf("Enter the coach name:\n");
    gets(team[teamcount].coach.name);
    fflush(stdin);

    printf("Enter the coach age:\n");
    scanf("%d",&team[teamcount].coach.age);
    fflush(stdin);

    printf("Enter the coach experience:\n");
    scanf("%0.2f",&team[teamcount].coach.experience);
    fflush(stdin);

    return teamcount+1;
}

void displayTeam(struct Team team[50],int teamcount)
{
    if(teamcount==0)
    {
        printf("No teams available for display");
        return;
    }
    else
    {
        printf("----Team list----\n");
        for(int i=0;i<teamcount;i++)
        {
            printf("Team %d is \n",i+1);
            printf("Team name=%s\n",team[i].teamName);
            printf("Sport type=%s\n",team[i].sportType);
            printf("Coach name=%s\n",team[i].coach.name);
            printf("Coach age=%d\n",team[i].coach.age);
            printf("Coach experience=%f\n",team[i].coach.experience);

        }
    }
}

void searchTeam(struct Team team[50],int teamcount)
{
    fflush(stdin);
    char Searchname[50];
    if(teamcount==0)
    {
        printf("No teams available to search");
        return;
    }
    printf("Enter team to search: ");

    gets(Searchname);
    fflush(stdin);

    int found=0;

    for(int i=0;i<teamcount;i++)
        {    if(strcmp(team[i].teamName,Searchname)==0)
          {
            printf("Team %d is \n",i+1);
            printf("Team name: %s\n",team[i].teamName);
            printf("Sport type: %s\n",team[i].sportType);
            printf("Coach name: %s\n",team[i].coach.name);
            printf("Coach age: %d\n",team[i].coach.age);
            printf("Coach experience=%f\n",team[i].coach.experience);

            found=1;
            }
        }
        if(found==0)
        {
            printf("\nNo such team name found\n");
        }


}


void main()
{
    struct Team team[50];
    int teamcount=0;
    int choice;

    do
    {
        printf("Enter 1 to 4:\n 1.Add Team\n 2.Display Team\n 3.Search Team\n 4.Exit\n");
        scanf("\n%d",&choice);

        switch(choice)
        {
            case 1:
                   teamcount=addTeam(team,teamcount);
                   break;
            case 2:
                   displayTeam(team,teamcount);
                   break;
            case 3:
                   searchTeam(team,teamcount);
                   break;

            case 4:
                   printf("Exiting the program");
                   break;
        }

    }
    while(choice!=4);

}

