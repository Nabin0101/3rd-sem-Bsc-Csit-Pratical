from skimage import data,color,img_as_ubyte,exposure
from matplotlib import pyplot as plt
img=data.chelsea()
img_gray=img_as_ubyte(color.rgb2gray(img))
img_eq=img_as_ubyte(exposure.equalize_hist(img_gray))
fig,ax=plt.subplots(2,2)
ax[0,0].imshow(img_gray,cmap="gray")
ax[0,1].hist(img_gray.flatten(),bins=50,color="gray",range=(0,255))
ax[1,0].imshow(img_eq,cmap="gray")
ax[1,1].hist(img_eq.flatten(),bins=50,color="gray",range=(0,255))

 
 