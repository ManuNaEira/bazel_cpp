FROM mcr.microsoft.com/devcontainers/cpp:1-ubuntu-22.04

ARG REINSTALL_CMAKE_VERSION_FROM_SOURCE="none"

# Optionally install the cmake for vcpkg
COPY ./reinstall-cmake.sh /tmp/

RUN if [ "${REINSTALL_CMAKE_VERSION_FROM_SOURCE}" != "none" ]; then \
        chmod +x /tmp/reinstall-cmake.sh && /tmp/reinstall-cmake.sh ${REINSTALL_CMAKE_VERSION_FROM_SOURCE}; \
    fi \
    && rm -f /tmp/reinstall-cmake.sh

# [Optional] Uncomment this section to install additional vcpkg ports.
# RUN su vscode -c "${VCPKG_ROOT}/vcpkg install <your-port-name-here>"

#
# Install bazelisk
#
RUN if [[ `dpkg --print-architecture` == "arm64" ]]; then \
        wget https://github.com/bazelbuild/bazelisk/releases/latest/download/bazelisk-linux-arm64 -O /usr/local/bin/bazel \
        && chmod +x /usr/local/bin/bazel; \
    else \
        wget https://github.com/bazelbuild/bazelisk/releases/latest/download/bazelisk-linux-amd64 -O /usr/local/bin/bazel \
        && chmod +x /usr/local/bin/bazel; \
    fi

#
# Install buildifier
#
RUN if [[ `dpkg --print-architecture` == "arm64" ]]; then \
        wget https://github.com/bazelbuild/buildtools/releases/latest/download/buildifier-linux-arm64 -O /usr/local/bin/buildifier \
        && chmod +x /usr/local/bin/buildifier; \
    else \
        wget https://github.com/bazelbuild/buildtools/releases/latest/download/buildifier-linux-amd64 -O /usr/local/bin/buildifier \
        && chmod +x /usr/local/bin/buildifier; \
    fi

# [Optional] Uncomment this section to install additional packages
RUN apt update \
    && export DEBIAN_FRONTEND=noninteractive \
    && apt install -y --no-install-recommends \
    graphviz
