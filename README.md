# Implementation of RARED algorithm in Linux kernel
## Course Code: CS822	<br/>
## Assignment: #FP8	<br/>

### Overview		<br/>
Refined Adaptive RED (RARED) [1] is an extension of ARED [2]. It inherits all the properties of ARED but with a minor improvement in adaptive setting of Pmax. This repository contains an implementation of RARED in the Linux kernel.
The RARED algorithm is to maintain the average queue size near the specified target queue size.The resulting average queue length is quite sensitive to the level of congestion. In this paper, we propose the Refined Adaptive RED (RARED), as a solution for reducing the sensitivity to parameters that affect RED performance. Based on simulations, we observe that the RARED scheme
improves overall performance of the network. In particular, the RARED scheme reduces packet drop rate and improves
goodput

### References         <br/>

[1] Tae-hoon Kim, Kee-hyun Lee, "Refined Adaptive RED in TCP/IP Networks", SICE-ICASE, 2006. International Joint Conference, 2006

[2] S. Floyd, R. Gummadi, and S. Shenker, "Adaptive RED: An Algorithm for Increasing the Robustness of RED's Active Queue Management,", http://www.icir.org/floyd/papers/adaptiveRed.pdf.

