car_status = "stop"

while True:
    command = input('Enter Your Command: ').lower()
    if command=='help':
        print('Type "Start" to start the car')
        print('Type "stop" to stop the car')
        print('Type "quit" to quit the car application')
    elif command=='start':
        if car_status=='stop':
            car_status='start'
            print('car started')
            print("car status = "+car_status)
        else:
            print('car already started')
    elif command=='stop':
        if car_status=='start':
            car_status="stop"
            print('car stopped')
            print("car status = "+car_status)
        else:
            print('car already stopped')
    elif command=='quit':
        print('application quit')
        break
    else:
        print("wrong input please type again")
