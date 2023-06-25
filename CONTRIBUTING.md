
## How to contribute guidelines
▶️ All members of [Stake-And-Rope](https://github.com/Stake-And-Rope) organization and [@Raccoons](https://github.com/orgs/Stake-And-Rope/teams/raccoons) team have write access to the repository. Follow the instructions below in order to contribute to the project.

▶️ If you are not a member of the organization and/or the team you can fork the repository and contribute as well, again following the instruction below.
Requirements in order to contribute to the repository


:one: Create account on https://www.codewars.com/

:two: On Codewars, edit your account settings and join the `StakeAndRope` clan. Just type in the name of the clan in the empty text field and click the `UPDATE` button on the bottom of the page.

![image](https://github.com/Stake-And-Rope/codewars-clan/assets/86146020/1ba614cc-c3d3-406c-bf03-77c2f2debbb0)


:three: Clone the GitHub repository locally on your computer

* The repository has one default branch called `main` protected by branch rules which doesn't allow you to commit directly your changes.
 
* After you clone the repository locally, create new branch, preferably named with your GitHub username. On that branch you will upload your exercises.

:four: Each programming language has it's own directory where to submit your files. IF there is not existing directory for the language you are currently practicing, create a new folder in the main directory with the specific programming language name and use it to submit your code.

:five: Inside each programming language folder you will find child folders for each difficulty. The Kata's on Codewars are separated on different difficulty levels from 1(hardest) up to 8(easiest). Submit your code on the respective difficulty folder for your language. If the folder doesn't exist, you can create it by yourself.

![image](https://github.com/Stake-And-Rope/codewars-clan/assets/86146020/2cc73565-8d1d-4c0e-8b82-f701760dfc5c)


:six: Create/Upload the new file containing the solution of Kata. One the top of your file add multi-line comments:

* `Kata's URL address` - the URL address of the Kata
* `Difficulty` - The exact difficulty of the Kata
* `Submitter` - Your GitHub nickname

	💡A perfect example should look like this:
![image](https://github.com/Stake-And-Rope/codewars-clan/assets/86146020/91aa2e34-c0d6-4ddd-b47c-cbdbcaf2a48c)

7️⃣ When you decide you would like to merge your solutions with the `main` branch you can open pull-request from your branch to the `main` branch. You can use [#1](https://github.com/Stake-And-Rope/codewars-clan/pull/1) as template for your pull-request.
* ⚠️ Assign @karastoyanov as Reviewer
* If your pull-request and commits are approved, your changes will be merged with the `main` branch. In case your code or pull-request needs additional modifications, a code review request will be open

:eight: Feel free to take part in improving the documentation and/or the structure of the repo. Follow the instruction from `How to contribute` section to submit your changes.

✔️ DO's:
* Work on a separate personal branch, best practice is to named it iwht your GitHub username
* Follow the directory structure and submit your Codewars solutions in the correct folder. Each programming languange has it's own separated directory, inside of it you will find eight different folders, for each difficulty.
* In case your programming language doesn't have it's own directory you can create a new one, just follow the repository structure. Using `git bash shell` you can create a new directory and sub-directories using these commands, executed in the main directory of repository.
  ```sh
  #For example if we want to create new directory for Java
  mkdir Java/{1..8}kyu  # This will create new directory called `Java` and eight new sub-directories for each difficulty
  find . -type d -exec touch {}/.gitkeep \; #This command is optional and needs to be executed inside the newly created directory. Inside each child directory for the respective difficulty it will create a new empty text file `.gitkeep` in order for git to track all folders you just created. git DOESN'T track empty folders.
  ```
* Reguralry open pull-request from your personal branch to the main branch and merge your solutions with the main version.
* Include multi-line comments on top of each file, containing Kata's URL address, difficulty and submitter(your GitHub username). Check Contributing guidelines above.
* Feel free to submit Issues or code reviews on already solved exercies, in that way you will help others to improve theirs solutions.
* You can upload duplicates(your solutions on exercises that are already solved by others), just check the file name and if needed make the modifications in order to be able to push the changes. If conflicts appears, you will have to solve them manually.
* Sharing knowedge, helping others, participating in improving the existing solutions, the repostiory and the project is highly encouraged

✖️ DONT's:
* Do not work directly on someone's else branch. If you have ideas and/or proposals for code optimization you can submit an Issue or Code Review Request
* Do not upload code and solutions not related to Codewars exercises.
* Do not make structural modifications of the repository
* Do not open pull-request if some of your files contain unfinished or incorrect solutions. All the files in the `main` branch should contain correct solutions. If you need help or you would like to solve any exercise in group you can open an Issue with tag `help wanted`, start a Discussions or if your are a member of the Slack channel you can start Thread there. 
