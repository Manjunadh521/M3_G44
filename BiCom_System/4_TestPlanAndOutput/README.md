# 1.1 HIGH LEVEL TEST PLAN

| Test ID | Description | Input | Expected output | Actual Output | 
| --- | --- | --- | --- | --- | 
| 01 | Car Lock | 1 User Button Press | Car Window status | Gave Car Window status  | 
| 02 | Car Unlock | 2 User Button Presses |  Car alarm status  | Gave Car alarm status  | 
| 03 | Alarm activation/deactivation | 3 User Button Presses | Car Battery Status | Gave Car Battery Status | 
| 04 | Approach Light | 4 User Button Presses | Car Door Status | Gave Car Door Status | 

### Here below are the some of the *unity test/ unity framework* test plans there are so many but I have only mentiones some of the test cases here.

# 1.2 LOW LEVEL TEST PLAN

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
