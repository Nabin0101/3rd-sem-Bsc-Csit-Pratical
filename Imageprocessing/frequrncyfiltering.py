import numpy as np
from matplotlib import pyplot as plt
from scipy import  fft
from skimage import data,color
img=data.chelsea()
img_gray=color.rgb2gray(img)
img_fft=fft.fft2(img_gray)
rows,cols=img_gray.shape
crow,ccol=int(rows/2),int(cols/2)
mask=np.ones((rows,cols),np.uint8)
r=120
center=[crow,ccol]
x,y=np.ogrid[:rows,:cols]
mask_area=(x-center[0]**2+(y-center[1])**2<=r*r)
img_filtered=img_fft*mask
img_fft=fft.iff2(img_filtered).real
fig,(ax0,ax1,ax2)=plt.subplot(1,3,figure=(10,5))
ax0.imshow(img_gray,cmap='gray')
ax0.set_title("Original Image")
ax1.imshow(mask_area,cmap='gray')
ax1.set_title("Mask")
ax2.imshow(np.abs(img.ifft),cmap='gray')
ax2.set_title("Inverse Transform")