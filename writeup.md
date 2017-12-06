**PID Controller**
---

**PID Controller Project**

The goals of this project are the following:

* Implement the PID controller to keep the vehicle in the middle of the lane
* Run the implemented algorithm on the simulator
* Summarize the results with a written report



## Project Basics
In this project, I used C++ to write a program a pid controller to keep the vehicle in the middle of the lane.

See files in the 'src' folder for the primary C++ files making up this project.
---
### PID parameters tuning

I tuned the parameters manually. 
First I get the value of Kp that made the car stable on the road. 
Then I started to tune the Kd to make the vehicle more stable with less oscillations.
And finaly I tuned the Ki to make the vehicle respond faster in the curves.  

| parameter |   value   |
| ----- | ------- |
|  Kp   | 0.4 |
|  Ki   | 0.001 |
|  Kd   | 7.0 |

The output video name is 'PID.webm'.