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

    def __init__(self):
        super().__init__('image_viewer')
        self.subscription = self.create_subscription(
            Image,
            '/camera/image_raw',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning
        self.br = CvBridge()

    def listener_callback(self, data):
        current_frame = self.br.imgmsg_to_cv2(data)
        transform = transforms.ToTensor()
        tensor_image = transform(current_frame)
        print(tensor_image)
        cv2.waitKey(1)


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
