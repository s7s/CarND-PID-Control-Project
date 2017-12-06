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

### PID parameters effect

* Kp: the performance gets better as the Kp increases ,but this increasing may cause the vehicle to spin in a circles if the cte was big. also the Kp value will cause overshots around the center line of the lane.
* Ki: this paremeter will eliminate the steady state error. If Ki is very low the vehicle will take long time to back to the middle of the lane in the dynamic changes. And if the Ki is very large the system will be sensetive to the dynamic changes and that will cause oscillations. 
* Kd: this parameter will reduce the oscillations. If Kd is very low the system will still oscillate.And if the Kd is very high the vehicle will take long time to be in the middle of the lane.

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