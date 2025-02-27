# Governor-Nephi Bakare, How to get time of the day Python
import time

#find first instance of in programming
first_time = time.gmtime()
#print(first_time)

#Current time in seconds
current = time.time()
#print(current)
#print(current) #seconds since January 1, 1970

#current date and time like we see it normally
now = time.ctime(current)
#print(now)

#get just a part of the time
local_time = time.localtime(current)
day = local_time.tm_wday
hour = local_time.tm_hour #military time (0-23)
print(day)