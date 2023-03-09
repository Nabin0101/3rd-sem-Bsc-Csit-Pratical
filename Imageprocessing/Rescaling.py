from matplotlib import pyplot as plt
from skimage import data,color
from skimage.transform import rescale
img=data.astronaut()
img_gray=color.rgb2gray(img)
img_rescale=rescale(img_gray,0.25,anti_aliasing=(True))
fig,(ax0,ax1)=plt.subplots(1,2)
ax0.imshow(img_gray, cmap='gray')
ax0.set_title("Original Image")
ax1.imshow(img_rescale,cmap='gray')
ax1.set_title("Rescaled image")
