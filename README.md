# OOP244 Workshops
## Overveiwing the Workshop and Project milestone of the week
This session will be done every week on Tuesady around 11:00 AM for about 45 minutes.<br />
You are welcome to join using your **real Seneca Name** (what is on your student card), otherwise you will be kicked out.<br />
[Click here to join this week's session between 11:00 and 11:15 am on Tuesdays](https://connect.rna2.blindsidenetworks.com/invite/to?c=xzucKb4gz_MBoDHoZ2D3KRvzkoeKjHbxTTYq6eoTBWI&m=06668cdb24cf92e76fb010abd90f3fd5d34e1caa&t=1633446164881&u=senecacollege)

### [Session notes](https://github.com/Seneca-244200/OOP-Workshops/tree/main/_OverViewNotes)
### Previous session recordings:

- [Workshop 3](https://recordings.rna2.blindsidenetworks.com/senecacollege/2de1813813f15a29f3fa9041f8f6a6a6b4336ec5-1632840530798/capture/)
- [Workshop 4](https://recordings.rna2.blindsidenetworks.com/senecacollege/2de1813813f15a29f3fa9041f8f6a6a6b4336ec5-1633446164924/capture/)

## IPC144 review for OOP244 students
Last semester we conducted a review session on the topics of IPC144 to prepare students for OOP244. The recording and the notes of the session are available at the link below. We recommend watching the recording for the problematic topics of IPC144.
### [IPC144/BTP100 Review Session for OOP244/BTP200 Students recording](https://github.com/Seneca-244200/OOP244NABC-Notes#review-recordings)

# Computer preparation and Getting Workshop files

## Setting up your computers for OOP244

Installation guides for preparing your computer for the subject can be found in this playlist on YouTube:<br />
[Seneca-SDDS "how to" videos for C/C++ Core subjects](https://www.youtube.com/playlist?list=PLxB4x6RkylosAh1of4FnX7-g2fk0MUeyc)<br />
OR:<br />
Go to this url: https://tinyurl.com/244setup 


## Getting Workshop files
(if you have not followed the Installation guides to prepare your computer go to **Using [Download Zip](#using-download-zip)**)<br />

### Using [Git](https://git-scm.com/download/win)
- Open https://github.com/Seneca-244200/OOP-Workshops and click on “Code” Button; this will open “Clone with HTTPS” window.<br />
![The Code Button](images/code.png)
> If the window is titled “Clone with SSH” then click on “Use HTTPS”: <br />
![Use https](images/usehttps.png)
- Copy the https URL by clicking on the button on the right side of the URL:<br />![Copy URL](images/copyurl.png)
- Open File Explorer on your computer and select or create a directory for your workshops.
#### Using [ToroiseGit](https://tortoisegit.org/download/)
- Right click on the selected directory and select “Git Clone":<br /> ![Git Clone](images/gitclone.png)<br />
-This will open the “Git Clone” window with the URL already pasted in the “URL” text box; if not, paste the URL manually:<br /> ![Git Clone Dialog](images/gitcloneDialog.png)<br />
- Click on ok<br />
This will create on your computer a clone (identical directory structure) of the directory on Github.  Once you have cloned the directory, you can open the workshop directory **OOP-Workshops/WS??** and start doing your workshop. Note that you will repeat this process for all workshops and milestones of your project in this subject.
> If your professor makes any changes to the workshop or a new workshop is released, you can right click on the cloned repository directory and select **Tortoise Git/pull** to update and sync your local workshops repositoryy to the one on Github with-out having to download it again. Note that this will only apply the changes made and will not affect any work that you have done on your workshop.
#### Using Command line
- Open the git command line on your computer.
- Change the directory to your workshops directory.
- Issue the following command at the command prompt in your workshops directory: 
``` bash
git clone https://github.com/Seneca-244200/OOP-Workshops.git<ENTER>
```
> The URL for all the workshops are the same throughout the semester. The only thing that changes, is the workshop number.<br/>

This will create a clone (that is an identical directory structure and content to the one Github) of the OOP-Workshops repository on your computer.  Once you have cloned the directory, you can open the subdirectory the workshop and start doing your work. Note that you will repeat this process for all workshops and milestones of your project in this subject.

> If your professor makes any changes to the workshop, you can issue the command
``` bash 
git pull<ENTER>
``` 
>  in the cloned repository directory to update and sync your local workshop to the one on Github without having to download it again. Note that this will only apply the changes made and will not affect any work that you have done on your workshop.

#### Using Download ZIP
- Open https://github.com/Seneca-244200/OOP-Workshops  and click on “Code” button and click on “Download ZIP”.<br />
![Download Zip](images/downloadzip.png)<br />
- This will download a zipped file copy of the workshop repository from Github to your computer. You can extract this file to where you want to do your workshop. <br />
> Note that, if your professor makes any changes to the workshop, to get them you have to separately download another copy of the workshop and manually apply the changes to your working directory to **make sure nothing of your work is overwritten by mistake**.

# Seeking help from your professors using Git

Here is a playlist of instructional videos that helps you set up your Github account and your computer to work on your problems with your professors' using Github:

[Setting Github for School Work and Collaboration](https://www.youtube.com/playlist?list=PLxB4x6RkylotpVj3V33D4Q28emnh6yiit)

# Important Notes
- Install [GlobalProtect](https://inside.senecacollege.ca/its/services/vpn/senecavpn.html) on your computer to have access to internal services of Seneca and the Matrix Linux cluster.
- When transferring program files to Matrix using an SFTP or SSH client, make sure your transfer mode is always set to **TEXT**
