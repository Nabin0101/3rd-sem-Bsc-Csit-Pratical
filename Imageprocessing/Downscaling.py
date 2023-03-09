from matplotlib import pyplot as plt
from skimage import data,color
from skimage.transform import downscale_local_mean
img=data.astronaut()
img_gray=color.rgb2gray(img)
img_downscale=downscale_local_mean(img_gray, (4,3))
fig,(ax0,ax1)=plt.subplots(1,2)
ax0.imshow(img_gray, cmap='gray')
ax0.set_title("Original Image")
ax1.imshow(img_downscale,cmap='gray')
ax1.set_title("Downscaled Image")
