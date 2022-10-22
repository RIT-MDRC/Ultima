import torch
import torchvision
from torchvision.io import read_image
import torchvision.transforms as transforms

# read in the image
img = read_image('40539.jpg')
# define a transform to convert the image to grayscale
transform = transforms.Grayscale()
# apply the above transform on the image
img = transform(img)
# display the image
print(img)
# size of the image
print(img.size())
# turn data into image
img = transforms.ToPILImage()(img)
# print the image
img.show()
