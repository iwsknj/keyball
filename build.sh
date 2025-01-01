ln -s $(pwd)/qmk_firmware/keyboards/keyball ../__qmk__/keyboards/keyball
qmk compile -j 4 -kb keyball/keyball44 -km via_iwkj
mkdir -p tmp
cp ../__qmk__/keyball_keyball44_via_iwkj.hex tmp/keyball44.hex
