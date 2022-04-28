# Technical-questions

I will be posting solutions for real-life technical problems using `C++` initally.

I will be including solutions using `Python` and `Java` later throughout the months.

# **Step 1**: Install Git

### <u>**Windows**</u>
- Download and install the latest [Git Bash](https://git-scm.com/book/en/v2/Getting-Started-Installing-Git) bash onto your machine.
- Create a folder somewhere in your Desktop. (or anywhere, really) This is where this repo will be cloned.
- Go to step 2.



<u>**MacOS & Linux**</u>

Skip this step if you have MacOS or using Linux. Most MacOS users and Linux users have Git installed already.

# **Step 2:** Setting your username in Git
Git uses a username to associate commits with an identity. The Git username is not the same as your GitHub username. 

# About Git usernames

You can set the name that is associated with your Git commits using the `git config` command. The new name you set will be visible in any future commits you push to GitHub from the terminal.


# Setting your Git username and Git email for *every* repository on your computer

- Right click on the folder you created earlier and open Git Bash
- Set Git username using the following command:
```
$ git config --global user.name "YOUR USERNAME"
```
```
$ git config --global user.email "YOUR GITHUB EMAIL"
```
- Check to see if your username and email was set correctly:
```
$ git config --global user.name
```
```
$ git config --global user.email
```

# **Step 3:** Clone repository onto your machine

- Clone the `technical-questions` repository using the following command:
```
$ git clone https://github.com/IsraelHG/Technical-questions.git
```
One this step is done, you have successfully cloned `technical-questions` repo onto your machine!

To receieve the latest changes onto your machine:
- Open Git Bash on the same folder and run this command:
```
$ git pull
``` 

This will pull all the recent changes made by me onto your machine.