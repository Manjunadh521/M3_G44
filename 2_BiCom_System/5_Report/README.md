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

# 3 Architecture

* ## 3.1 Behavioural Diagram
    * ### 3.1.1 High Level Flow chart Behavioural Diagram
   ![BiComHighlvl](https://user-images.githubusercontent.com/94365143/157745691-d8c989cc-59da-4ad4-91b0-3af29f80fdc4.png)
   
    * ### 3.1.2 Low Level Flow chart Behavioural Diagram
   ![BiComLowlvl](https://user-images.githubusercontent.com/94365143/157745701-91228eb0-0376-4991-922e-eeb4f28e4d5f.png)

* ## 3.2 Structural Diagram
    * ### 3.2.1 High Level UML Use Case Structural Diagram
    ![BiComUmlusecaseHigh1](https://user-images.githubusercontent.com/94365143/157745711-39e87539-9967-4a1e-b43e-922ec4953496.png)

    * ### 3.2.2 Low Level UML Use Case Structural Diagram
    ![BiComUmluseLowlvl](https://user-images.githubusercontent.com/94365143/157745735-5c1ae4df-6dc7-49aa-9fb0-6bf34fa6d3ce.png)

 ---
 
 # Best Methods Followed
* Exact Mapping of code to avoid confusions
* Mentioning of both High level and Low level Behavioral and structural diagrams for better understanding
* Followed the exact symbols to make the understanding easier
* Detailed explanation in Low level Behavioural and Structural Diagrams

---

# Test Plan and Output
# 4.1 HIGH LEVEL TEST PLAN

| Test ID | Description | Input | Expected output | Actual Output | 
| --- | --- | --- | --- | --- | 
| 01 | Car Lock | 1 User Button Press | Car Window status | Displayed Car Window status  | 
| 02 | Car Unlock | 2 User Button Presses |  Car alarm status  | Displayed Car alarm status  | 
| 03 | Alarm activation/deactivation | 3 User Button Presses | Car Battery Status | Displayed Car Battery Status | 
| 04 | Approach Light | 4 User Button Presses | Car Door Status | Displayed Car Door Status | 

### Here below are the some of the *unity test/ unity framework* test plans there are so many but I have only mentiones some of the test cases here.

# 4.2 LOW LEVEL TEST PLAN

| Test ID | Description | Input | Expected output | Actual Output | Passed Or Not |
| --- | --- | --- | --- | --- | --- |

| Test ID (for LED)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for ALLLED_ON() | 1 User Button Press | All LEDs ON |All LEDs ON | ✅ |
| 02 | Check for ALLLED_OFF() | 2 User Button Presses | All LEDs OFF | All LEDs OFF | ✅ |
| 03 | Check for LEDCW_ON() | 3 User Button Presses | LED ON Clockwise Rotation | LED ON Clockwise Rotation | ✅ | 
| 04 | Check for LEDACW_ON() | 4 User Button Presses |LED ON Anticlockwise Rotation | LED ON Anticlockwise Rotation | ✅ |

| Test ID (for Button Count)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for Button_Count() | 1 User Button Press | 1 | 1 | ✅ |
| 02 | Check for Button_Count() | 2 User Button Presses | 2 | 2 | ✅ |
| 03 | Check for Button_Count() | 3 User Button Presses | 3 | 3 | ✅ |
| 04 | Check for Button_Count() | 4 User Button Presses | 4 | 4 | ✅ |

---
