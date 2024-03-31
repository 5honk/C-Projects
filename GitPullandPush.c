#include <stdio.h>

/* 

This file is a demonstration to using GIT for the first time :D!
    commands: git add, commit, status, init, push, pull

1. In order to push with git we need to make a repository with init
    git init

2. Then we Add the file that we want to be in the repository
    git add filename
        2a. During this process we can use git status to check for any other files once finished 

3. In order to push to a Github repository we need the repositorys https link. This is found in the green "<> Code" button, under HTTPS.
    git remote add origin 'add the https link here'

4. !!! Make sure to commit the files or else it wount upload 
    git commit -m 'commit message goes here e.g. Updating software pacthes'

5. We can finally push the file 
    git push -u origin main

6. A prompt will appear to enter your Github username and password. Since Github does'nt use the passwords for authentication, a token will need to be generated as the password
    /Settings/DeveloperSettings/Personal Access Token/ either fine-graned token or Token classic/ select all git options/ copy and paste the token to terminal
*/

int main () {
    printf("Hello Git!");
    return 0;
}