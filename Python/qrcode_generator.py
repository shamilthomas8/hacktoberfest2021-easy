#Before running this code we should run 2 commands in command prompt they are :-
#1) pip install Image 
#2) pip install qrcodeimport qrcode
code=qrcode.QRCode(version=5,box_size=15,border=5)
link=input("copy the content:")
code.add_data(link)
code.make(fit=True)
img=code.make_image(fill="black",back_color="white")
img.save(input("Enter the Qrcode name:")+".png")