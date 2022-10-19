# Docker instructions

Building the LLVM project yourself might be a bit troublesome, and take some time. An alternative is using a Docker image that already has the LLVM project compiled inside it.

Note that this is different from using pre-built binaries: the project is actually compiled in the operating system you get from the image, so you have access to all the libraries you get when you build LLVM!

Note that, if you are using Linux, you might need root access whenever you run a docker command! Just add "sudo" before every docker command listed below.

# What you need

You need to install docker on your machine. You can take a look at in [docker site](https://docs.docker.com/desktop/install/linux-install/) site on how to install it.

# Run the Dockerfile

In the docker directory run the code below:

    docker build -t jotai .

The command above takes ~20-30 minutes on a good computer. After executing the command above you can access the container in your machine with the command:

    docker run -it jotai
