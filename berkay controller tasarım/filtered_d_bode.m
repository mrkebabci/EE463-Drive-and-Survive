close all

D = 2;
N = 6;
w_crit = N
H = tf([D , 0],[1/N , 1])

subplot(1,1,1)
bode(H,{1e-1 , 1000})
hold on
grid on

xline(2*pi*50)