#!/bin/bash

export LD_LIBRARY_PATH=$HOME/dev/coreclr/bin/Product/Linux.x64.Debug
export COMPlus_DbgWaitForDebuggerAttach=1
#export COMPlus_LogEnable="1"
#export COMPlus_LogFacility="200"
#export COMPlus_LogLevel="10"
#export COMPlus_LogToFile="1"

echo "$1"
./bin/dbg $@
