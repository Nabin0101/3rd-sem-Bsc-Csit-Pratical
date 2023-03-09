import numpy as np
from matplotlib import pyplot as plt
import scipy.ndimage as ndi
bright_square=np.zeros((7,7),dtype=float)
bright_square[2:5,2:5]=1
mean_kernel=np.full((3,3), 1/9)
img_filter=ndi.convolve(bright_square, mean_kernel)
fig,(ax0,ax1)=plt.subplots(1,2)
ax0.imshow(bright_square,cmap='gray')
ax1.imshow(img_filter,cmap='gray')