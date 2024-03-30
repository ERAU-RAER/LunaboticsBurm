from setuptools import find_packages, setup

package_name = 'arduino_serial_package'

setup(
    name=package_name,
    version='0.1.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='jake_161',
    maintainer_email='jacob.browning161@gmail.com',
    description='Lunabotics Drivetrain and Linac Arduino Serial Bridge',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'arduino_serial_drivetrain = arduino_serial_package.arduino_serial_drivetrain:main',
            'arduino_serial_linac = arduino_serial_package.arduino_serial_linac:main'
        ],
    },
)
