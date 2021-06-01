# RPG (Temporary title) 
 Authors: [Irene Wu](https://github.com/iwu021), [Jiaxing Lin](https://github.com/jlin1110) , [Xinyu Tong](https://github.com/xtong019) 

### Introduction 
All of the group members enjoy gaming as a hobby and know that many others do as well. Therefore, we wanted to create a short, but interesting and fun RPG game that is text interactive. While the gist and theme of the game is yet to be completely developed yet, we know that we would want to create characters that can attack/defend/heal in fights or choose to run and deny an opponent's request to duel. One idea that we have is to have a twin fight a boss enemy in order to save their twin brother/sister. She/he will have a journey where they will need to obtain several items to use and encounter surprise events depending on the users choices before the final fight. The user will enter a certain command to be performed and the program will execute that command. We will be creating three to four virtual character classes where variables will be updated throughout the game such as health, objects, attack strength, and more.  

### Languages/input & output
 We are going to be using C++ to create the program using linux/Github/UIDs and more. User input will be from a list of options that are provided at each turn of the game entered from the keyboard and the output is text that is generated from the project to the monitor. 
## Design patterns 
A design pattern we will be using is the Command pattern where objects such as the role-playing character’s choices are encapsulated in the game to perform an action such as attack or use an ability. We will be using this pattern to implement choices in the game and to trigger events. A problem we anticipate encountering is how each choice that the user inputs will trigger an output from the program and generating exceptions when the user enters a choice that is not recognized. That is why we will be using this design pattern to store values that the user may possibly input in the command and a receiver object to invoke and execute pathways. The command object will store routed event arguments and objects per to the user’s request. 

Another design pattern we will be using is the Composite pattern where we can instantiate our character class as a group of objects that are treated the same way with a single instance of the same type. We can use the pattern to compose objects into a hierarchy and can treat the objects either individually or uniformly. Objects, such as enemy types, are easier implemented, changed, tested, and reused with this pattern. For example, Enemy class will inherit the same functions and variables as the Character superclass. Both will use Item class as a component. 

Another design pattern we will be using is the Decorator pattern where we can add items to “decorate” our character.  For example, our character starts “naked” -- 0 armor and 0 attack strength, but if we equip him with a vest, now he has 20 armor.  And then if we equip him with a sword, now he has 20 attack strength, etc.  After he is fully equipped, we can return the final stats with everything added.  The Decorator pattern allows us to add different stats to characters based on their items easier.


## Class Diagram
![Untitled Diagram](https://user-images.githubusercontent.com/81549188/120277807-5fd3c200-c269-11eb-8f79-e913bf92c393.png)




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
 
