# Implementation of RARED algorithm in Linux kernel
## Course Code: CS822	<br/>
## Assignment: #FP8	<br/>

### Overview		<br/>
Refined Adaptive RED (RARED) is an active queue management algorithm which is helpful in reducing packet drop rate and improves goodput.This repository contains an implementation of RARED in the Linux kernel.RARED inherits all the properties of ARED but with a minor improvement in adaptive setting of Pmax. The RARED algorithm is to maintain the average queue size near the specified target queue size.The resulting average queue length is quite sensitive to the level of congestion. The Refined Adaptive RED (RARED), is a solution for reducing the sensitivity to parameters that affect RED performance and it improves overall performance of the network.

### References         <br/>

[1] Tae-hoon Kim, Kee-hyun Lee, "Refined Adaptive RED in TCP/IP Networks", SICE-ICASE, 2006. International Joint Conference, 2006

[2] S. Floyd, R. Gummadi, and S. Shenker, "Adaptive RED: An Algorithm for Increasing the Robustness of RED's Active Queue Management,", http://www.icir.org/floyd/papers/adaptiveRed.pdf.

