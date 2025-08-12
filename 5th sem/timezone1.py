from datetime import datetime

tz = pytz.timezone('Asia/Kolkata')
now = datetime.now(tz)
formatted_time = now.strftime("%a %b %d %H:%M:%S IST %Y")
print("Current date and time:", formatted_time)