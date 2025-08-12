from datetime import datetime

now = datetime.now()

formatted_time = now.strftime("%a %b %d %H:%M:%S %Z %Y")
print("Current date and time:", formatted_time)