# Lectures
Welcome to Security club! This directory will contain a compilation of lecture material and demos from throughout the term. Please visit uosec.info for resources, announcments and information about the club!

You should update the directory from time to time (We'll typically add new files on the day of the lecture they pertain to)

# Usage
To update the directory, do the following:

Step 1: Open up Terminal
Step 2: Type the following command: wget-uosec
	* This will update existing files and add any new files to '/root/Desktop/UOSec/lectures'
Step 3: Change your working directory to '/root/Desktop/UOSec/lectures' with the command: cd ~/Desktop/UOSec/lectures

# Executing
If a downloaded file is supposed to execute but instead outputs:
'bash: ./<filename>: Permission denied'
Guess what? You need to set it's permissions (executable files and scripts are not given execution permissions by default)
To fix this, use the command: 'chmod +x filename' where filename is the name of the file you want to execute.
You might also want to look more into better understanding Unix Permissions.

# Modifying
Modifying and using a file in the lectures directory:

If you want to modify, or recompile any of the lecture files, you should move the file to another directory first.
This will prevent your work from being overwritten by subsequent downloads.

If you modified a file in the lectures' directory without the moving/copying it first and want the original version:
Remove that file completely (or delete it) from the lectures directory, then use wget-uosec again.
This should replace the file to its original version.

For questions, email us at admin@uosec.info

-Cody C Ebert
