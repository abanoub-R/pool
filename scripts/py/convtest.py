# I did not write convtest.exe, 
# it is provided externally, 
# and written by M. Waltz

# Converts files to .8xv

import os
import time
import shutil

# response = input("Full path where your files are located: ")
# convtest = input("Full path to convtest.exe: ")
# results = input("Location of resulting files: ")
# drive = input("Drive are you operating on: ")

os.system(drive)

for x in os.listdir(response):
    parsed = x.strip('.txt')
    print(f"converting {x} in {response}")
    os.system(f"{convtest} {response}\\{x}")
    os.system(f"move {response}\\{parsed}.8xv {results}")
