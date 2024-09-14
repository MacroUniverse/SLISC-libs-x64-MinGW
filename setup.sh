# use `source setvars.sh` in here to setup

echo ":: initializing SLISC-libs-x64-MinGW"

ADD="source lib_prepend.sh $PWD"

$ADD/flint-3.1.3-2
$ADD/sqlitecpp-3.2.1
