total_seconds = int(input())

days = total_seconds // 86400
remainder = total_seconds % 86400
hours = remainder // 3600
remainder = remainder % 3600
minutes = remainder // 60
seconds = remainder % 60

if days > 0:
    print(f"{days} hari {hours:02d}:{minutes:02d}:{seconds:02d}")
else:
    print(f"{hours:02d}:{minutes:02d}:{seconds:02d}")
