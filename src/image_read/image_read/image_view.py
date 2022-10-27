import torch
import torchvision
from torchvision.io import read_image
import torchvision.transforms as transforms
import rclpy
from rclpy.node import Node
from PIL import Image
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import os
import sys
from datetime import datetime


class MinimalSubscriber(Node):

    def __init__(self, directory, frames):
        super().__init__('minimal_subscriber')
        self.subscription = self.create_subscription(
            Image,
            '/camera/image_raw',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning
        self.br = CvBridge()
        self.count = 0
        self.image_number = 1
        self.directory = os.path.join(directory, str(datetime.now()))
        os.mkdir(self.directory)
        self.frames = frames

    def listener_callback(self, data):
        current_frame = self.br.imgmsg_to_cv2(data)
        transform = transforms.ToTensor()
        tensor_image = transform(current_frame)
        print(tensor_image)
        cv2.waitKey(1)


def main(args=None):
    rclpy.init(args=args)
    if not os.path.exists(sys.argv[1]):
        exit()
    minimal_subscriber = MinimalSubscriber(sys.argv[1], int(sys.argv[2]))

    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
