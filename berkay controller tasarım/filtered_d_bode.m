close all

D = 2.2;
N = 5;
w_crit = 1/N
H = tf([D , 0],[1/N , 1])

subplot(1,1,1)
bode(H,{1e-1 , 1000})
hold on
grid on

xline(2*pi*50)