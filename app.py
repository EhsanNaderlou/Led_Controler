import os 
import cv2 
import serial
from cvzone import HandTrackingModule

detector = HandTrackingModule.HandDetector(maxHands=1)
camera = cv2.VideoCapture(0)
arduino = serial.Serial("com7" , 9600)

while camera.isOpened():
    _ , frame = camera.read()
    if _ :

        hands , frame = detector.findHands(frame , draw=False)
        if hands :

            p1 = hands[0]["lmList"][4][:-1]
            p2 = hands[0]["lmList"][8][:-1]
              
            length , info , frame = detector.findDistance(p1 , p2 , img=frame , color=(255,0,0) , scale=8)
            
            length = str(length) + "\r"
            arduino.write(length.encode())
    


        cv2.imshow("frame" , frame)
        if cv2.waitKey(1) == ord("q"):
            cv2.destroyAllWindows()
            break
    else :
        print("the camera is not find ! ")
arduino.close()