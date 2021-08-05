import math

MAX_BUS = 40
guests = input('Please enter the amount of guests invited: ')
busses = math.ceil(guests / float(MAX_BUS))
extraSpace = (busses * MAX_BUS) - guests
print 'You will need ', int(busses), ' amount of busses and you will have ', int(extraSpace), ' extra space.'
