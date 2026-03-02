from setuptools import find_packages, setup
from glob import glob
import os

package_name = 'nbv_planner'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.py')),
        (os.path.join('share', package_name, 'candidate_views'), glob('candidate_views/*.txt')),
        (os.path.join('share', package_name, 'rviz'), glob('rviz/*.rviz')),

    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Fatih Dursun',
    maintainer_email='fatih.dursun@manchester.ac.uk',
    description='Next Best View planner using octomap services',
    license='LGPL',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'nbv_planner_node = nbv_planner.nbv_planner_node:main',
            'test_candidate_views = nbv_planner.test_candidate_views:main'
        ],
    },
)
