# Open-Vswitch---DPI-enabled

For Simulation, Environmental setup is hosted on an Ubuntu 14.04 32-Bit machine. The Open vSwitch (OVS) version is 2.3.90.

# Environmental Setup

Initially, add a bridge: ```sudo ovs-vsctl add-br mybridge```

Turn up the bridge interface: ```sudo ifconfig mybridge up```

Add eth0 port (typical gateway through which all the packets flow through) to mybridge interface connected to OVS: ```sudo ovs-vsctl add-port mybridge eth0```
                               
Now the eth0 port is connected to the bridge via OVS, Hence Open vSwitch has a control over all the packets flowing through the eth0 port.


# Command Line Tool

To dynamically load any DPI plugin to run over the OVS, a command line tool has been inserted in the vswitchd.c of OVS
```sudo ovs-vswitchd --dpi-engine=<path to plugin>```


