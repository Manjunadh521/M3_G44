# 1 About the H.A.S.K.I
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
![5w1h-questions-and-answer (2)](https://user-images.githubusercontent.com/94365143/154832159-976b2ffb-0ea9-4f5c-9d91-a3252c811f75.png)
## Swot Analysis
![image](https://user-images.githubusercontent.com/94365143/154832952-fa8c759f-44fd-47b2-9c2e-6c8b3ba21813.png)

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
