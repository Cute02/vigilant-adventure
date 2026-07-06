import csv
data = ["Name", "Age", "Class"]
lst = [["Alice", 28, "Engineer"],
       ["Bob", 34, "Designer"],
       ["Charlie", 23, "Artist"]]
with open("student_data.csv", "w", newline='') as f:
    write = csv.writer(f)
    write.writerow(data)
    write.writerows(lst)

with open("student_data.csv", "r") as f:
    read = csv.reader(f)
    for row in read:
        print(", ".join(row))
