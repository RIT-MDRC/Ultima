import torch
import torchvision
from torchvision.io import read_image
import torchvision.transforms as transforms
import rclpy
from rclpy.node import Node

from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import os
import sys


class MinimalSubscriber(Node):

    def __init__(self, directory):
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
        self.directory = directory

    def listener_callback(self, data):
        self.get_logger().info('Reading an image')

        current_frame = self.br.imgmsg_to_cv2(data)

        # save cv2 image
        if self.count % 10000 == 0:
            os.chdir(self.directory)
            cv2.imwrite('camera_image' + str(self.image_number) + '.jpeg', current_frame)
            self.image_number += 1

        self.count += 1

        # Display image
        cv2.imshow("camera", current_frame)

        cv2.waitKey(1)


def main(args=None):
    rclpy.init(args=args)
    directory = sys.argv[1]

    minimal_subscriber = MinimalSubscriber(directory)

    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
