name1 = raw_input('Please enter the first name: ')
age1 = input('Please enter the age of ', name1, ': ')
name2 = raw_input('Please enter the second name: ')
age2 = input('Please enter the age of ', name2, ': ')
if (65 > age1) and (age1 > 18)
  age1Between == true
if (65 > age2 and age2 > 18)
  age2Between == true
if (age1Between and age2Between)
  print 'Both individuals are between the ages of 18 & 65'
elif (age1Between and age2Between == false)
  print name1, 'is between but ', name2, ' is not.'
elif (age2Between and age1Between == false)
  print name2, 'is between but ', name1, 'is not.'
else
  print 'neither are between'