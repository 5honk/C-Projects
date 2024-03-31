#include <stdio.h>

/* 
Since this is my first time using GIT to push and pull files, I will doccument my process on how I managed to successfully push and pull files from and to Github

This file has been used for GIT for the first time :D!
    commands: git add, commit, status, init, push, pull
------------------------------------------------------------------------------
How to Push files to Github

    1. In order to push with git we need to make a repository with init
        git init

    2. Then we Add the file that we want to be in the repository
        git add filename
            2a. During this process we can use git status to check for any other files once finished 

    3. In order to push to a Github repository we need the repositorys https link. This is found in the green "<> Code" button, under HTTPS.
        git remote add origin 'add the https link here'

    4. Pull any data that may be deleted if pushed (Don't want to delete other peoples work if your pushing without updating your own local)
        git pull origin main

    4. !!! Make sure to commit the files or else it wount upload !!!
        git commit -m 'commit message goes here e.g. Updating software pacthes'

    5. We can finally push the file 
        git push -f origin main

    6. A prompt will appear to enter your Github username and password. Since Github does'nt use the passwords for authentication, a token will need to be generated as the password
        /Settings/DeveloperSettings/Personal Access Token/ either fine-graned token or Token classic/ select all git options/ copy and paste the token to terminal

Problems I faced and how I fixed it 

    1. Logining in with Github for authentication via password was discontinued, I struggled to realise this untill i read the error code. This lead me to use a token
        to prove my authertication of my Github account.

    2. "Everything is up to date" even though I edited files. I did not know that you will need to commit first before you pushed, which took me a while to realise till
        I trial and errored every possible solution to make the files push. (Thats why in the guide above part 4 is lined with exclaimation marks)

    3. Reciving rejected master -> master (non-fast-forward) error message when pushing. I used -f to force the overwrite, which works
------------------------------------------------------------------------------
How to Pull files from Github to local 

    1. Open terminal to the git repository 

    2. enter git pull origin main

------------------------------------------------------------------------------
*/

int main () {
    printf("This file shows how to use Git!");
    return 0;
}