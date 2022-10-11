################################################# Image #################################################
FROM ubuntu:20.04

############################################# Date and Time #############################################
ENV TZ="America/Sao_Paulo"
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone \
    && rm -rf /var/lib/apt/lists/* 

RUN apt-get update -y && apt-get install -y locales curl sudo git \
    && localedef -i en_US -c -f UTF-8 -A /usr/share/locale/locale.alias en_US.UTF-8

ENV LANG en_US.utf8

############################################# DEPENDENCIES ##############################################
RUN apt-get update -y \
    && apt-get install -y gcc g++ libssl-dev tar wget git ninja-build \
    	build-essential zlib1g-dev libncurses5-dev libgdbm-dev libnss3-dev libssl-dev libreadline-dev \	
    	libffi-dev libsqlite3-dev wget libbz2-dev autotools-dev automake libjemalloc-dev libgmp-dev \
        libmpfr-dev libfmt-dev z3 libc6-dbg gawk bc

############################################# CMAKE #####################################################
RUN wget -c https://github.com/Kitware/CMake/releases/download/v3.20.0/cmake-3.20.0-linux-x86_64.tar.gz \
    && tar -xvf cmake-3.20.0-linux-x86_64.tar.gz \
    && cp -r cmake-3.20.0-linux-x86_64/* /usr \
    && rm -rf cmake-3.20.0-linux-x86_64*

############################################## CFGGRIND #################################################
RUN wget -qO - https://sourceware.org/pub/valgrind/valgrind-3.19.0.tar.bz2 | tar jxv \
    && cd valgrind-3.19.0 \ 
    && git clone https://github.com/rimsa/CFGgrind.git cfggrind \
    && patch -p1 < cfggrind/cfggrind.patch \
    && ./autogen.sh \
    && ./configure \
    && make -j $(nproc) \
    && sudo make install \
    && cd .. \
    && rm -rf valgrind-3.19.*

############################################### KCC ######################################################
RUN wget https://github.com/runtimeverification/match/releases/download/snapshot-b9c152d/rv-match.tar.gz \
    && cp rv-match.tar.gz /usr/local \
    && cd /usr/local \
    && tar xvf rv-match.tar.gz \
    && rm -rf rv-match.tar.gz \
    && cd -

############################################## PYTHON 3.10 ###############################################
RUN wget https://www.python.org/ftp/python/3.10.4/Python-3.10.4.tgz \
	&& tar -xvzf Python-3.10.4.tgz \
    && cd Python-3.10.*/ \
	&& ./configure --enable-optimizations \
	&& make -j $(nproc) \
	&& sudo make altinstall \
    && cd .. \	
    && rm -rf Python-3.10.* \
    && ln -s /usr/local/bin/python3.10 /usr/local/bin/python3 \
    && ln -s /usr/local/bin/python3.10 /usr/local/bin/python \
    && ln -s /usr/local/bin/pip3.10 /usr/local/bin/pip3 \
    && ln -s /usr/local/bin/pip3.10 /usr/local/bin/pip \
    && pip3 install numpy pandas scipy pyyaml

############################################## LLVM 12 ###################################################
RUN git clone -b llvmorg-12.0.0 https://github.com/llvm/llvm-project \
    && cd llvm-project \
    && mkdir -p build \
    && cd build \
    && cmake -DLLVM_ENABLE_PROJECTS="clang;compiler-rt" -DCMAKE_BUILD_TYPE=Release -DLLVM_TARGETS_TO_BUILD="X86" -G "Ninja" ../llvm \
    && ninja \
    && ninja install \
    && cd ../../ \
    && rm -rf llvm-project

####################################### COPY JOTAI AND KOTAI #############################################
RUN cd /home && git clone https://github.com/lac-dcc/jotai-benchmarks 

WORKDIR /home/jotai-benchmarks/source/

RUN mkdir -p jotai/build \ 
    && cd jotai/build \
	&& cmake .. -DLLVM_DIR=/usr/local/lib/cmake/llvm -DClang_DIR=/usr/local/lib/cmake/clang \
	&& make -j $(nproc) \
    && cd -

RUN cd kotai \
    && ln -s ../jotai/build build \
    && cd -    

WORKDIR /home/jotai-benchmarks/source/kotai
ENTRYPOINT ["/bin/bash"]
