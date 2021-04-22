 > As you complete each section you **must** remove the prompt text. Every *turnin* of this project includes points for formatting of this README so keep it clean and keep it up to date. 
 > Prompt text is any lines beginning with "\>"
 > Replace anything between \<...\> with your project specifics and remove angle brackets. For example, you need to name your project and replace the header right below this line with that title (no angle brackets). 
# RPG (Temporary title)
 > Your author list below should include links to all members GitHub (remove existing author).
 
 > Authors: [Irene Wu](https://github.com/iwu021) [Jiaxing Lin] (https://github.com/jlin1110) [Xinyu Tong] (https://github.com/xtong019)
 
 > You will be forming a group of **THREE** students and working on an interesting project. A list of proposed project ideas that have been successful in previous quarters is given in the project specifications link on iLearn. You can select an idea from the list, start thinking about the features you will implement, what design patterns can help you implement them, and why. If you want to propose your own original idea, you will have to contact an instructor to discuss the project and obtain written permission before you submit your project proposal. Your project needs to implement two design patterns.The project work should be divided almost equally among team members and each member is expected to work on at least one design pattern (more than one partner may work on a pattern) and some of its test cases. You can of course help each other, but it needs to be clear who will be responsible for which patterns and for which features.
 
 > ## Expectations
 > * Incorporate **at least two** distinct design patterns. You need to include at least *one* design pattern that we will teach this session:
 >   * Composite, Strategy, Abstract Factory, Visitor, or Decorator
 > * All design patterns need to be linked together (it can't be two distinct projects)
 > * Your project should be implemented in C++. If you wish to choose anoher programming language (e.g. Java, Python), please discuss with your lab TA to obtain permission.
 > * You can incorporate additional technologies/tools but they must be approved (in writing) by the instructor or the TA.
 > * Each member of the group **must** be committing code regularly and make sure their code is correctly attributed to them. We will be checking attributions to determine if there was equal contribution to the project.
> * All project phases are to be submitted to this GitHub repository. You should modify this README file to reflect the different phases of the project. In addition, you should regularly hold sprint meetings with your group.

## Project Description
 > Your project description should summarize the project you are proposing. Be sure to include
 > * Why is it important or interesting to you?
 > * What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
 >   * [toolname](link) - Short description
 > * What will be the input/output of your project?
 > * What are the two design patterns you will be using? For each design pattern you must explain in 4-5 sentences:
 >   * Why you picked this pattern and what feature you will implement with it
 >   * What problem you anticipate encountering when implementing your project that you will solve using the design pattern
 >   * Why the chosen design pattern will lead to a good solution to that problem
 > * This description should be in enough detail that the TA/instructor can determine the complexity of the project and if it is sufficient for the team members to complete in the time allotted. 
 >  All of the group members enjoy gaming as a hobby and know that many others do as well. Therefore, we wanted to create a short, but interesting and fun RPG game that is text interactive. While the gist and theme of the game is yet to be completely developed yet, we know that we would want to create characters that can attack/defend/heal in fights or choose to run and deny an opponent's request to duel. One idea that we have is to have a twin fight a boss enemy in order to save their twin brother/sister. She/he will have a journey where they will need to obtain several items to use and encounter surprise events depending on the users choices before the final fight. The user will enter a certain command to be performed and the program will execute that command. We will be creating three to four virtual character classes where variables will be updated throughout the game such as health, objects, attack strength, and more.  

> We are going to be using C++ to create the program using linux/Github/UIDs and more. User input will be from a list of options that are provided at each turn of the game entered from the keyboard and the output is text that is generated from the project to the monitor. 

> A design pattern we will be using is the Command pattern where objects such as the role-playing character’s choices are encapsulated in the game to perform an action such as attack or use an ability. We will be using this pattern to implement choices in the game and to trigger events. A problem we anticipate encountering is how each choice that the user inputs will trigger an output from the program and generating exceptions when the user enters a choice that is not recognized. That is why we will be using this design pattern to store values that the user may possibly input in the command and a receiver object to invoke and execute pathways. The command object will store routed event arguments and objects per to the user’s request. 

>  Another design pattern we will be using is the Strategy pattern where algorithms are encapsulated from a pool for use during runtime, these algorithms are interchangeable, which means that they are substitutable for each other.  A problem we anticipate encountering is that if we only have one algorithm, it might not be suitable for all the situations and the runtime for the program will not be optimal. However, after using the Strategy pattern, we are able to use different algorithms for different situations, and lower the run-time of our game.  For example, we will use selection sort in our game to sort the items we have in our inventory based on their rarity, and we might use heap sort to rank different bosses in our game, etc.  Choosing the Strategy pattern will lead to a good solution to the problem because having algorithms that are interchangeable and substitutable for each other would optimize the run-time performance better.


 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to 
 > * Set up your GitHub project board as a Kanban board for the project. It should have columns that map roughly to 
 >   * Backlog, TODO, In progress, In testing, Done
 >   * You can change these or add more if you'd like, but we should be able to identify at least these.
 > * There is no requirement for automation in the project board but feel free to explore those options.
 > * Create an "Epic" (note) for each feature and each design pattern and assign them to the appropriate team member. Place these in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Create smaller development tasks as issues and assign them to team members. Place these in the `TODO` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA
## Class Diagram
 > Include a class diagram(s) for each design pattern and a description of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper OMT notation (as discussed in the course slides). You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description). 
 
 > ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II
 > * In the meeting with your TA you will discuss: 
 >   - How effective your last sprint was (each member should talk about what they did)
 >   - Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 >   - Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 >   - What tasks you are planning for this next sprint.

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
