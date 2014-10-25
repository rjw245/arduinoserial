import serial
import time
port = "/dev/ttyACM0"
baudrate = 9600
arduino = serial.Serial(port,baudrate)

while True:
	userin = raw_input("Send: ")
	arduino.write(userin+"\n")
	time.sleep(0.1)
	while arduino.inWaiting()>0 :
		print arduino.readline()
