from matplotlib import pyplot as plt
from skimage import data,color
img=data.chelsea()
img_gray=color.rgb2gray(img)
negative_img=1.0-img_gray
fig,(ax0,ax1)=plt.subplots(1,2)
ax0.imshow(img_gray, cmap='gray')
ax0.set_title("Original Image")
ax1.imshow(negative_img,cmap='gray')
ax1.set_title("Negative image")
