ln -s $(pwd)/qmk_firmware/keyboards/keyball ../__qmk__/keyboards/keyball
qmk compile -j 4 -kb keyball/keyball44 -km kenj
mkdir -p tmp
cp ../__qmk__/keyball_keyball44_kenj.hex tmp/keyball44.hex
