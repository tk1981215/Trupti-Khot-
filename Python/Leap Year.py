year = int(input("Enter the year : "))
if year%4==0:
  print("Leap Year")
elif year%400==0:
  print("Leap Year")
elif year%100!=0:
  print("Not Leap Year")
else:
  print("Year is not leap year")
