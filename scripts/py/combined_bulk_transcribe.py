# NOTE: below code expects png,
#       if not in png format,
#       destination format
#       will be:
#
#       basename.ext.txt

# NOTE: below code expects
#       sources to be under
#       subdirectory in
#       sources

from PIL import Image

import pytesseract
import os

pytesseract.pytesseract.tesseract_cmd = r'C:\Program Files\Tesseract-OCR\tesseract.exe'

for x in os.listdir('sources'):
    destination = open(f"results/{x}.txt", "a")
    for y in os.listdir(f"sources/{x}"):
        print(f"on file {y}")
        destination.write(pytesseract.image_to_string(Image.open(f"sources/{x}/{y}")))
    destination.close()
    print(f"wrote all contents to results/{x}.txt")
