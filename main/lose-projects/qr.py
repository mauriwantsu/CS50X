import qrcode

img = qrcode.make("https://lapinchecantina.com/images/Menu.pdf")
img.save("qr.png", "PNG")
