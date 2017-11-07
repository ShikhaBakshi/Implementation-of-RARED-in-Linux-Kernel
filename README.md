# Implementation of RARED algorithm in Linux kernel
## Course Code: CS822	<br/>
## Assignment: #FP8	<br/>

### Overview		<br/>
Refined Adaptive RED (RARED) is an active queue management algorithm which is helpful in reducing packet drop rate and improves goodput.This repository contains an implementation of RARED in the Linux kernel.RARED inherits all the properties of ARED but with a minor improvement in adaptive setting of Pmax. The RARED algorithm is to maintain the average queue size near the specified target queue size.The resulting average queue length is quite sensitive to the level of congestion. The Refined Adaptive RED (RARED), is a solution for reducing the sensitivity to parameters that affects the performance of RED and improves the overall performance of the network.

### Steps to build modified kernel with RARED algorithm
1. Clone this repository in your local machine.
2. Configure the kernel using 
``` 
make menuconfig
```
3. Compile kernel using
```
make
```
4. Build kernel and install modules using
```
make modules
make modules_install
```
5. Kernal install
```
make install
```
### Testing of RARED Algorithm using Flent(Flexible Network Tester)
1. Setup a physical topology of three nodes:
```
Client <---> Router <---> Server
```
2. Create a separate passwordless SSH connection between client and router machines, so that Flent can collect queue statistics from the router machine
3. Install all required dependency for flent
```
sudo apt-get install python-dev python-setuptools python-matplotlib python-pip pyqt4-dev-tools netperf
```
4. Download Flent
```
https://github.com/tohojo/flent
```
5. Install flent in client machine
```
cd flent-master
make
sudo make install
```
6. Install Netserver in server machine

7. Install the modified kernel with RARED algorithm in router machine

8. Run Flent in client machine for plotting different graphs
### Set your aqm on router machine using
```
tc qdisc add dev "interface" root "rared" limits 100000 avgpkt 1000
```
### Command to run flent 
```
./run-flent rrul -p [PLOT_NAME] -l 160 -H [SERVER_IP] --test-parameter bandwidth=800M --test-parameter
qdisc_stats_hosts=[ROUTER_SSH_IP] --test-parameter qdisc_stats_interfaces=[ROUTER_AQM_INTERFACE] 
--test-parameter upload_streams=num_cpus --test-parameter download_streams=num_cpus -t 
RARED -o ~/Desktop/RARED/test_result.png
```
    


### References         <br/>

[1] Tae-hoon Kim, Kee-hyun Lee, "Refined Adaptive RED in TCP/IP Networks", SICE-ICASE, 2006. International Joint Conference, 2006

[2] S. Floyd, R. Gummadi, and S. Shenker, "Adaptive RED: An Algorithm for Increasing the Robustness of RED's Active Queue Management, http://www.icir.org/floyd/papers/adaptiveRed.pdf.

