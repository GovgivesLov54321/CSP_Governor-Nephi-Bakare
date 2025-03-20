# Governor-Nephi Bakare, Time of Day Python
import time


current = time.time()

local_time= time.localtime(current)
ahora = local_time.tm_hour

if ahora <= 12:
    print("Good morning, user! 🔥")
elif ahora <= 16:
    print("Good afternoon, user! 👍")
else:
    print("Good evening, user! 😃")