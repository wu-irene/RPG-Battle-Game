# RPG (Temporary title) 
 Authors: [Irene Wu](https://github.com/iwu021), [Jiaxing Lin](https://github.com/jlin1110) , [Xinyu Tong](https://github.com/xtong019) 

### Introduction 
All of the group members enjoy gaming as a hobby and know that many others do as well. Therefore, we wanted to create a short, but interesting and fun RPG game that is text interactive. While the gist and theme of the game is yet to be completely developed yet, we know that we would want to create characters that can attack/defend/heal in fights or choose to run and deny an opponent's request to duel. One idea that we have is to have a twin fight a boss enemy in order to save their twin brother/sister. She/he will have a journey where they will need to obtain several items to use and encounter surprise events depending on the users choices before the final fight. The user will enter a certain command to be performed and the program will execute that command. We will be creating three to four virtual character classes where variables will be updated throughout the game such as health, objects, attack strength, and more.  

### Languages/input & output
 We are going to be using C++ to create the program using linux/Github/UIDs and more. User input will be from a list of options that are provided at each turn of the game entered from the keyboard and the output is text that is generated from the project to the monitor. 
## Design patterns 
A design pattern we will be using is the Command pattern where objects such as the role-playing character’s choices are encapsulated in the game to perform an action such as attack or use an ability. We will be using this pattern to implement choices in the game and to trigger events. A problem we anticipate encountering is how each choice that the user inputs will trigger an output from the program and generating exceptions when the user enters a choice that is not recognized. That is why we will be using this design pattern to store values that the user may possibly input in the command and a receiver object to invoke and execute pathways. The command object will store routed event arguments and objects per to the user’s request. 

Another design pattern we will be using is the Strategy pattern where algorithms are encapsulated from a pool for use during runtime, these algorithms are interchangeable, which means that they are substitutable for each other.  A problem we anticipate encountering is that if we only have one algorithm, it might not be suitable for all the situations and the runtime for the program will not be optimal. However, after using the Strategy pattern, we are able to use different algorithms for different situations, and lower the run-time of our game.  For example, we could use the strategy pattern to support different attack algorithms, we can also create and switch families of classes or objects at runtime, like creating one family for each character with its weapon and armor, and we are able to change to a different character with different weapon and armor, all based on user's choices at runtime.  Choosing the Strategy pattern will lead to a good solution to the problem because having algorithms that are interchangeable and substitutable for each other would optimize the run-time performance better.


## Class Diagram
### Character

This figure illustrates the structure of the Character class, which includes the npc and player of the game. Players have professions, items and attributes. npc has different functions.
 ![image](https://user-images.githubusercontent.com/81706195/117526634-68432080-af7b-11eb-90a7-63308e0ec6b2.png)
 
### Event

The Event category is mainly divided into battle events and story events.
![image](https://user-images.githubusercontent.com/81706195/117526947-14d1d200-af7d-11eb-9352-5d8946f665da.png)

### Enemy
This figure shows the class as being in the enemy. The types of enemies, including different mobs and bosses, enemy attributes and skills. And the rewards for killing
![image](https://user-images.githubusercontent.com/81706195/117527025-a8a39e00-af7d-11eb-8312-e0a53675ef8b.png)

### Interface
This image shows the interface in the game. Start interface, menu interface, archive interface and in-game interface.
![image](https://user-images.githubusercontent.com/81706195/117527276-9f1b3580-af7f-11eb-8d87-16dbc3e4a74b.png)



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
 
