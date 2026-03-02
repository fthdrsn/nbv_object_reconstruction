FROM murilomarinho/sas:jazzy
SHELL ["/bin/bash", "-c"]
ENV BASH_ENV="/etc/bash_env"

# Update SAS
RUN apt update && apt-get install ros-jazzy-sas-* -y
RUN apt install ros-jazzy-octomap -y && apt install ros-jazzy-octomap-mapping -y && apt install ros-jazzy-octomap-server -y
RUN apt install ros-jazzy-depth-image-proc -y

WORKDIR /app

RUN mkdir -p /app/software/ROS2/ros2_ws/src

COPY ./ros2_nbv_ws/src/ /app/software/ROS2/ros2_ws/src/

RUN bash -c "source /opt/ros/jazzy/setup.bash; cd /app/software/ROS2/ros2_ws/; colcon build && source install/setup.bash" 

RUN echo "source /etc/bash_env" >> ~/.bashrc
