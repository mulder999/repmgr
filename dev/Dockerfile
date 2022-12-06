FROM gcc

RUN apt update \
  && apt -y upgrade \
  && apt -y install flex libxslt-dev libxml2-dev libpam-dev libedit-dev postgresql-server-dev-13 \
  && apt clean

WORKDIR /workdir

USER postgres
