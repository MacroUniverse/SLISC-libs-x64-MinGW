# use `source setvars.sh` in here to setup

echo ":: initializing SLISC-libs-x64-MinGW"

ADD="source lib_prepend.sh $PWD"

$ADD/arb-flint
$ADD/sqlitecpp-3.2.1
