from setuptools import find_packages, setup

package_name = 'IK_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='tumirk',
    maintainer_email='tumirk@todo.todo',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        "bci_node_real = IK_pkg.bci_node_real:main",
        "bci_node_test = IK_pkg.bci_node_test:main",
        "user_node = IK_pkg.user_node:main",
        "computation_node = IK_pkg.computation_node:main",
        "motor_node = IK_pkg.motor_node:main"
        ],
    },
)
