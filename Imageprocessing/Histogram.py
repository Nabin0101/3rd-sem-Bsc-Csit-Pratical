from matplotlib import pyplot as plt
from skimage import data, color
img=data.chelsea()
img_gray=color.rgb2gray(img)
plt.hist(img_gray,edgecolor='black')
plt.show()
