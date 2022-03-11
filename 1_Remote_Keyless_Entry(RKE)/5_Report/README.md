# 1 About Remote KeyLess Entry(R.K.E)
## 1.1 Description
* This project is an Remote keyless entry(R.K.E). This system helps to Lock the car, Unlock the car, Alarm activation/deactivation and Light Focus if anyone approaches near. There is a led signaling which helps us to identify the features. For example if we press a button 1 time all the LED will be on which means we locked the car and similarly fonr 2, 3 and 4 clicks. There are several features like heavy encription by providing rolling code algorithm to prevent car thieves from intercepting and spoofing the telegrams. .   
---
## 1.2 Identifying features
* It shall Lock the car for one User Button Click
* It shall Unlock the car Two User Button Clicks 
* It shall activation/deactivation alarm for Three User Button Clicks 
* It shall activate approach light for Four User Button Clicks 
---
## 1.3 State of art
* Buttons shall be provided to ease the access of available features.
* Lock and Unlock the car with a button press.
* Alarm system and Approach light are also available with a button press.
* Hack proof security is provided with encription.
---
 ## 1.4 5W's 1H
![RKE-5W's1H](https://user-images.githubusercontent.com/94365143/157699914-97ed74b7-4b9a-465b-a89b-c767e3b21aaa.png)


## Swot Analysis

![RKE_SwotAnalysis](https://user-images.githubusercontent.com/94365143/157739196-92958825-35e3-4469-b57e-ca3faf031340.png)

---

# 2 Requirements
## 2.1 High Level Requirements
| ID | High Level Requirements |
| -------- | -------------- |
| HLR1 | System shall be provided with wireless Lock and Unlock system |
| HLR2 | System shall be provided with wireless Alarm activation and Deactivation |
| HLR3 | System shall be provided with Approach Light |
| HLR4 | System shall be made as Hack proof |

## 2.2 Low Level Requirements

| ID | Low Level Requirements for HL1|       |ID | Low Level Requirements for HL2|
| -------- | -------------- | ---- |-------- | -------------- |
| LLR1.1 |  According to the press of __Button__ all LED's shall be on | | LLR2.1 | According to the press of __Button__  LED's shall be off  |
| LLR1.2 | According to the press of __Button__ LED's shall be on in Clockwise Manner | | LLR2.2 | LED's shall glow in a manner of __Green🔜Orange🔜Red🔜Blue__ |
     
| ID | Low Level Requirements for HL3|  |ID | Low Level Requirements for HL4|
| -------- | -------------- | ---- | -------- | -------------- |
| LLR3.1 |  According to the press of __Button__ LED's shall be on in AntiClockwise Manner | | LLR4.1 | LED's shall glow in a manner of __Green🔜Blue🔜Red🔜Orange__ |
| LLR3.2 | System shall be __Encrypted__ with masked data || LLR4.2 | System shall provide __Random Data__ each time to ensure more security |

---
# 3 Architecture
* ## 3.1 Behavioural Diagram
    * ### 3.1.1 High Level Flow chart Behavioural Diagram
   ![RkeHighlvl](https://user-images.githubusercontent.com/94365143/157736144-b835f717-d1b4-4d8d-9796-259d5bbf4a8e.png)
   
    * ### 3.1.2 Low Level Flow chart Behavioural Diagram
    ![RKELowlvl](https://user-images.githubusercontent.com/94365143/157736152-1014a84c-67b7-4a1f-af81-9e2b11f614ec.png)

* ## 3.2 Structural Diagram
    * ### 3.2.1 High Level UML Use Case Structural Diagram
   ![UseCaseHighRKE](https://user-images.githubusercontent.com/94365143/157736174-c018f0e5-8426-4310-b11d-f594529b89ea.png)

    * ### 3.2.2 Low Level UML Use Case Structural Diagram
    ![RKEUmlUseLowlvl](https://user-images.githubusercontent.com/94365143/157736195-92cc97a1-3cfe-4302-98f1-7b03e8f3a8e5.png)

 ---
 
 # Best Methods Followed
* Exact Mapping of code to avoid confusions
* Mentioning of both High level and Low level Behavioral and structural diagrams for better understanding
* Followed the exact symbols to make the understanding easier
* Detailed explanation in Low level Behavioural and Structural Diagrams

---
# 4.1 HIGH LEVEL TEST PLAN

| Test ID | Description | Input | Expected output | Actual Output | 
| --- | --- | --- | --- | --- | 
| 01 | Car Lock | 1 User Button Press | Car locked |  Car locked  | 
| 02 | Car Unlock | 2 User Button Presses |  Car unlocked  |  Car unlocked  | 
| 03 | Alarm activation/deactivation | 3 User Button Presses | Alarm activated/deactivated | Alarm activated/deactivated | 
| 04 | Approach Light | 4 User Button Presses | Approch Light On | Approach Light On | 
| 05 | Data Encryption | No of User Clicks | Random Data | Random Data | 
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
