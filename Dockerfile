FROM alpine:latest
VOLUME /tmp
COPY bin/programaa programaa
ENTRYPOINT ["./programaa"]

