# Autonoumous-Vehicle-using-ASURO

1) Install WinAVR. WinAVR is compiler which by deafult installs Programmers Notepad(PN). PN acts as an IDE to execute our code and compile it.  
2) Configure "make" and "clean" file settings in programmers notepad as per "ASURO Robot guide" (http://www.arexx.com/downloads/asuro/asuro_manual_en.pdf).
3) File name Linefollow.c and CollisionDetection.c needs to be renamed as test.c before executing the program as make file is configured for test.c. hex file will generated which is in machine readable format. 
4) Install Flshtool: Used to flash the program from Computer to ASURO processor. 
5) Select appropriate COM port IR transivier and select "hex" file in flashtool then place IR PCB infront of ASURO PCB. clicking on "program" button on flashtool will transfer the hex file to ASURO microprocessor. 
6) After successful flashing. Turn off ASURO and start it. ASURO should behave as per program now. 
