from setuptools import find_packages
from setuptools import setup

setup(
    name='camera_lite_interfaces',
    version='1.0.0',
    packages=find_packages(
        include=('camera_lite_interfaces', 'camera_lite_interfaces.*')),
)
