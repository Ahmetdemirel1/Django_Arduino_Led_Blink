from django.shortcuts import render, redirect
import serial

arduino = serial.Serial('COM3', 9600)


def home(request):

	if(request.GET.get('led1on')):
		led = '1'
		print(led)
		arduino.write(led.encode('ascii'))
		return redirect(home)

	elif(request.GET.get('led1off')):
		#led1 off button clicked
		led = "2"
		print(led)
		arduino.write(led.encode('ascii'))
		return redirect(home)

	elif(request.GET.get('led2on')):
		#led1 off button clicked
		led = '3'
		print(led)
		arduino.write(led.encode('ascii'))
		return redirect(home)

	elif(request.GET.get('led2off')):
		#led1 off button clicked
		led = '4'
		print(led)
		arduino.write(led.encode('ascii'))
		return redirect(home)

	elif(request.GET.get('led3on')):
		#led1 off button clicked
		led = '5'
		print(led)
		arduino.write(led.encode('ascii'))
		return redirect(home)

	elif(request.GET.get('led3off')):
		#led1 off button clicked
		led = '6'
		print(led)
		arduino.write(led.encode('ascii'))
		return redirect(home)

	return render(request, 'home.html')