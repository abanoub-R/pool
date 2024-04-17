# BULK IMAGE TRANSCRIBER
# relies on https://pypi.org/project/pytesseract/
# ^ wrapper for https://github.com/UB-Mannheim/tesseract
# currently only supports windows

# NOTE: below code expects png,
#       if not in png format,
#       destination format
#       will be:
#
#       basename.ext.txt

# NOTE: expects pictures to be
#       in sources/ and a 
#       results/ directory
#       to place the files in

from PIL import Image

import pytesseract
import os

pytesseract.pytesseract.tesseract_cmd = r'C:\Program Files\Tesseract-OCR\tesseract.exe'

for x in os.listdir('sources'):
    print(f"on file {x}")
    parsed = x.strip('.png')
    destination = open(f"results/{parsed}.txt", "a")
    destination.write(pytesseract.image_to_string(Image.open(f"sources/{x}")))
    destination.close()
    
print("successfully read all files")
