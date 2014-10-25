import serial
import time
port = "/dev/ttyACM0"
baudrate = 9600
arduino = serial.Serial(port,baudrate)

while True:
	userin = raw_input("Send: ")   # Get user input from terminal
	userin = userin.strip()        # Get rid of whitespace characters
	arduino.write(userin)          # Send string over serial connection
	time.sleep(0.01)               # Wait a bit for the response
	while arduino.inWaiting()>0 : # If there is a response waiting...
		print arduino.readline()  # then print it
