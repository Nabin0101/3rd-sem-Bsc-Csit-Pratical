import numpy as np
from matplotlib import pyplot as plt
import scipy.ndimage as ndi
from skimage import data ,color
img=data.chelsea()
img_gray=color.rgb2gray(img)
mean_kernel=np.full((11,11),1/121)
img_filter=ndi.convolve(img_gray, mean_kernel)
fig,(ax0,ax1)=plt.subplots(1,2)
ax0.imshow(img_gray,cmap='gray')
ax0.set_title("Original Image")
ax1.imshow(img_filter,cmap='gray')
ax1.set_title("Mean Filter Image")