# 1 About the BiCom System
## 1.1 Description
* This project is an BiCom System. This system Displays Window Status, Alarm Status, Battery Information, Door Status . There is a led signaling which helps us to identify the features. For example if we press a button 1 time all the LED will be on which means the Window status of car is displayng, similarly for 2, 3 and 4 clicks. There are several features like communication between car to key and key to car .   
---
## 1.2 Identifying features
* It shall display window satus of car for one User Button Click
* It shall display alarm satus of car Two User Button Clicks 
* It shall display battery information of car for Three User Button Clicks 
* It shall display door satus of car for Four User Button Clicks 
---
## 1.3 State of art
* Buttons shall be provided to ease the access of available features.
* Window status of the car is displayed with a button press.
* Alarm status of the car is displayed with a button press.
* Battery status of the car is displayed with a button press.
* Display status of the car is displayed with a button press.
---
 ## 1.4 5W's 1H

![Bicom-5W's1H](https://user-images.githubusercontent.com/94365143/157749507-6efb8be9-e128-4d79-9785-2aa22651b824.png)

---

## Swot Analysis
![Bicom_SwotAnalysis](https://user-images.githubusercontent.com/94365143/157749520-9d6f9838-8fb5-4b21-a1d9-2decabd159a1.png)

---


# 2 Requirements
## 2.1 High Level Requirements
| ID | High Level Requirements |
| -------- | -------------- |
| HLR1 | System shall display Window status of the car |
| HLR2 | System shall display Alarm status of the car |
| HLR3 | System shall display Battery status of the car |
| HLR4 | System shall display Display status of the car |

## 2.2 Low Level Requirements

| ID | Low Level Requirements for HL1|       |ID | Low Level Requirements for HL2|
| -------- | -------------- | ---- |-------- | -------------- |
| LLR1.1 |  According to the press of __Button__ all LED's shall be on | | LLR2.1 | According to the press of __Button__  LED's Green,Orange,Red,Blue shall be on at a time  |
| LLR1.2 | According to the press of __Button__  LED's shall be off | | LLR2.2 | According to the press of __Button__  LED's Green,Orange,Red,Blue shall be off at a time |
     
| ID | Low Level Requirements for HL3|  |ID | Low Level Requirements for HL4|
| -------- | -------------- | ---- | -------- | -------------- |
| LLR3.1 | According to the press of __Button__ LED's shall be on in Clockwise Manner | | LLR4.1 |  LED's shall glow in a manner of __Green🔜Orange🔜Red🔜Blue__ |
| LLR3.2 |  According to the press of __Button__ LED's shall be on in AntiClockwise Manner || LLR4.2 | LED's shall glow in a manner of __Green🔜Blue🔜Red🔜Orange__ |

---