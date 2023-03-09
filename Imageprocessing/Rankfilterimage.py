import numpy as np
from matplotlib import pyplot as plt
import scipy.ndimage as ndi
from skimage import data ,color,filters
img=data.chelsea()
img_gray=color.rgb2gray(img)
img_filter=filters.rank.mean(img_gray,np.ones((11,11)))
fig,(ax0,ax1)=plt.subplots(1,2)
ax0.imshow(img_gray,cmap='gray')
ax0.set_title("Original Image")
ax1.imshow(img_filter,cmap='gray')
ax1.set_title("Rank  Filter Image")