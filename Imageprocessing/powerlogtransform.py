import numpy as np
from matplotlib import pyplot as plt
from skimage import data,color
def powerTransform(image,gamma):
    gammaTransform=np.array(image**gamma)
    return gammaTransform
img=data.astronaut()
img_gray=color.rgb2gray(img)
img_powerTransform=powerTransform(img_gray,3)
fig,(ax0,ax1)=plt.subplots(1,2)
ax0.imshow(img_gray, cmap='gray')
ax0.set_title("Original Image")
ax1.imshow(img_powerTransform,cmap='gray')
ax1.set_title("Log Transformation[Gamma=3]")
