# HARDWARE PROJECT: LOCALIZED VOICE ASSISTANT FOR SENIOR CITIZENS



##### PROBLEM STATEMENT

###### HARDWARE PROJECT: LOCALIZED VOICE ASSISTANT FOR SENIOR CITIZENS

* Senior citizens face challenges interacting with modern technology, affecting their safety, independence, and daily well-being:
* Difficulty using smartphones, mobile apps, and complex assistive systems
* Most voice assistants support only English, creating a language barrier
* Forgetting medicines and medical appointments
* Loneliness due to lack of regular interaction and engagement
* Emergency situations without immediate or reliable assistance



**→ Need A simple, reliable, offline, Telugu-speaking, senior-friendly assistive system**



##### PROPOSED IDEA

The proposed solution is an ESP32 WROOM-based Advanced Localized Voice Assistant for senior citizens.



##### The system provides:

* Voice reminders and confirmations in Telugu for medicines, appointments, and daily routines
* Emergency call \& SMS alerts through a GSM module
* Companionship features such as greetings, music, and short conversations
* Minimal interaction using one large button and simple voice commands
* Predictive reminders based on user routines and schedules
* Offline, privacy-focused operation without internet dependency
* Clear audio output through speaker and visual feedback through an OLED display



##### OBJECTIVES

* Design a senior-friendly and localized voice assistant system
* Ensure seniors do not miss medicines or important appointments
* Provide reliable emergency assistance during critical situations
* Reduce dependence on smartphones and complex digital technology
* Improve safety, independence, and daily well-being of senior citizens
* Maintain low-power, offline operation to ensure privacy and reliability



##### PROTOTYPE DESCRIPTION

*The prototype is built using an ESP32 WROOM Dev Board integrated with:*



* Voice input and output modules (INMP441 microphone and speaker)
* RTC module for accurate timekeeping
* GSM module for emergency communication
* OLED display for reminders and system status
* Servo-controlled medicine box compartments
* Buzzer for alert notifications
* SD card module for storing voice responses, system logs, and caregiver messages



##### The prototype demonstrates:

* Voice reminders and confirmations in Telugu
* Emergency alert handling and communication
* Companionship interaction through greetings and music
* Minimal interaction using button and voice commands
* Priority-based task execution and missed-action escalation



##### HARDWARE COMPONENTS USED

|Component|Purpose|Approx. Cost (INR)||
|-|-|-|-|
|ESP32 DEVKIT V1|Main control and processing unit|335||
|INMP441 I2S MEMS Microphone|Captures voice commands|200|Solidering required - ✅|
|MAX98357A I2S Audio Amplifier with 3W 4Ω Speaker|Plays reminders, confirmations, and companionship responses|250 + 70|✅|
|Large Push Button|Wake input, confirmation, and emergency trigger||✅|
|RTC Module (DS3231)|Accurate timekeeping|150|✅|
|CR2032 Coin Cell (for RTC backup)||40|✅|
|GSM Module (SIM900L) with SIM card|Emergency calls \& SMS|700 + 150|Sim recharge not completed -✅|
|OLED Display (I2C)|Time, reminders, system status|180||
|5V Active Buzzer|Alerts and reminders|15||
|Servo Motors|Controls medicine box compartments|90||
|SD Card Module with SD Card|Stores voice commands, responses, and logs|250 + 300|✅|
|18650 Rechargeable Lithium-Ion Battery - 2|Portable power supply|160|✅|
|Battery Holder for 18650||70|✅|
|TP4056 Charging \& Protection Module|Safe battery charging|100|✅|
|ON/OFF Switch|Power control|10|✅|
|Jumper Wires, Resistors - 100, 220, 10k; Breadboard, USB Cable|Circuit assembly \& connections|45 +  ( 5 + 5 + 5 )+ 65 + 45|✅-Resistors(100,200)|



Estimated Cost: 3000–3500 INR



##### SYSTEM WORKING

###### Power \& Display

* Displays the current time on the OLED screen when powered ON
* Monitors battery level and alerts the user when battery is low



###### Activation

* System can be activated using a voice command or push button
* Device becomes ready for user interaction immediately



###### Medicine Management

* Scheduled medicine box opens automatically using a servo motor
* Buzzer alerts and voice reminders in Telugu continue until user confirmation
* Missed reminders escalate and an SMS alert is sent to the caregiver



###### Appointment Management

* Announces appointments in Telugu at scheduled times
* Waits for user confirmation through voice command or button press
* Logs all interactions and confirmations on the SD card



###### Companionship Features

* Provides greetings, music playback, and short conversational responses
* Audio responses played through the speaker in clear Telugu voice



###### Emergency Handling

* Long press on the button triggers a GSM call and SMS alert to caregiver
* Emergency alerts have the highest priority and repeat if ignored



###### Priority \& Logging

* Task execution priority: Emergency → Medicine → Appointment → Companionship
* All reminders, confirmations, and missed actions are stored on the SD card



##### ADDITIONAL ADVANCEMENTS

* Predictive reminders that learn and adapt to user routines
* Voice feedback customization including voice type and speech speed
* Multi-user support with separate profiles and personalized schedules
* Offline conversational interaction using pre-recorded responses
* Escalation system with repeated alerts and caregiver notifications
* Modular design allowing expansion of medicine boxes
* Energy-efficient and low-power embedded system design
* Privacy-focused offline operation without cloud dependency



