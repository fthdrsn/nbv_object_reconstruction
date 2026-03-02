from setuptools import find_packages
from setuptools import setup

setup(
    name='octomap_operations_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('octomap_operations_interfaces', 'octomap_operations_interfaces.*')),
)
