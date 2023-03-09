import numpy as np
from matplotlib import pyplot as plt
from skimage import data,color
img=data.chelsea()
img_gray=color.rgb2gray(img)
img_logtransform=np.log(1+img_gray)
fig,(ax0,ax1)=plt.subplots(1,2)
ax0.imshow(img_gray, cmap='gray')
ax0.set_title("Original Image")
ax1.imshow(img_logtransform,cmap='gray')
ax1.set_title("Log Transformation")