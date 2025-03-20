# Governor-Nephi Bakare, Time of Day Python
import time


current = time.time()

local_time= time.localtime
ahora = local_time.tm_hour

if ahora <= 12:
    print("TOP OF THE MORNING TO YOU! 🔥")
elif ahora <=16:
    print("Good afternoon, user! 👍")
else:
    print("Good evening, user! 😃")