#!/usr/local/bin/python
# coding: latin-1
import os, sys

def num_per():
	print("Nhap vào so N ")
	n = int(input())
	tong = 0
 	for i in range(1,n):
    		if (n % i == 0):
    			tong += i
    	
	if (tong == n):
    		print("la so hoan hao")
	else:
    		print("khong phai là so hoan hao")
  
num_per()

