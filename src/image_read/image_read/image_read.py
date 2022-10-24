import torch
import torchvision
from torchvision.io import read_image
import torchvision.transforms as transforms
import rclpy
from rclpy.node import Node

from std_msgs.msg import String
# Importing Image module from PIL package
from PIL import Image
import PIL


# subscribe to /camera/image_raw

class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('minimal_subscriber')
        self.subscription = self.create_subscription(
            String,
            '/camera/image_raw',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        self.get_logger().info('I heard: "%s"' % msg.data)
        #imag = Image.open(self)
        #imag.save("image")
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


def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()