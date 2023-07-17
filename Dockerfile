FROM ubuntu:latest
RUN apt update && DEBIAN_FRONTEND=noninteractive apt install -y clang make git binutils libc6-dev libcs50 curl gdb sudo
RUN adduser --disabled-password --gecos '' user
RUN echo 'user ALL=(root) NOPASSWD:ALL' > /etc/sudoers.d/user
USER user
WORKDIR /home/user
