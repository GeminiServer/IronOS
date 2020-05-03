#!/usr/bin/env bash
if [ -n "$1" ]; then
  echo "Moving and creating Release files!"
  echo $1
  mkdir $1
  mv ../workspace/TS100/Hexfile/* $1
  cd $1
  for file in *.hex ; do mv $file ${file//.hex/_$1.hex} ; done
  rm -rf *.bin
  rm -rf *.elf
  rm -rf *.map
  cd ..
  echo "Done!"
else
  echo "First parameter not supplied. i.e.: make_rel.sh 'v2.09.4DE5279'"
fi