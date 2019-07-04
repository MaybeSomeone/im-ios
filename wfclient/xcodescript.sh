#!/bin/sh
echo "Script start"
BIN_DIR="bin"
if [ ! -d $BIN_DIR ]
then
    echo "bin_dir doesn;t exist"
    mkdir -p $BIN_DIR
fi
echo "Script second"
BIN_DIR_TMP="bin_tmp"
if [ ! -d $BIN_DIR_TMP ]
then
    echo "BIN_DIR_TMP doesn;t exist"
    mkdir -p $BIN_DIR_TMP
fi
echo "Script third"
DST_DIR1="./../wfchat/Frameworks"
if [ ! -d $DST_DIR1 ]
then
    mkdir -p $DST_DIR1
fi
echo "Script fourth"
DST_DIR2="./../wfuikit/Frameworks"
if [ ! -d $DST_DIR2 ]
then
    mkdir -p $DST_DIR2
fi
echo "Script some copy"
cp -af "${BUILT_PRODUCTS_DIR}"/"${TARGET_NAME}".framework/ "${BIN_DIR_TMP}"/"${PLATFORM_NAME}"-"${TARGET_NAME}".framework
cp -af "${BUILT_PRODUCTS_DIR}"/"${TARGET_NAME}".framework/ "${BIN_DIR}"/"${TARGET_NAME}".framework
lipo -create "${BIN_DIR_TMP}"/*-"${TARGET_NAME}".framework/"${TARGET_NAME}" -output "${BIN_DIR}"/"${TARGET_NAME}".framework/"${TARGET_NAME}"
echo "What happen here 27"
cp -af "${BIN_DIR}"/* "${DST_DIR1}"/
cp -af "${BIN_DIR}"/* "${DST_DIR2}"/;
