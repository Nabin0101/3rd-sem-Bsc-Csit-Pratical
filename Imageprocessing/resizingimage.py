import numpy as np
from matplotlib import pyplot as plt
from skimage import data,color
from skimage.transform import resize
img=data.chelsea()
img_gray=color.rgb2gray(img)
img_resize=resize(img_gray,(img_gray.shape[0]//4,img_gray.shape[1]//4),anti_aliasing=True)
fig,(ax0,ax1)=plt.subplots(1,2)
ax0.imshow(img_gray, cmap='gray')
ax0.set_title("Original Image")
ax1.imshow(img_resize,cmap='gray')
ax1.set_title("Resized Image with Anti Aliasing")
