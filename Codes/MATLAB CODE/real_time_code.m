clc;
clear all;
close all;
comport = serial('COM3', 'BaudRate',9600);
fopen(comport);
x=0;
while(x<35);
    x=x+1;
    y(x)=fscanf(comport,'%d');
    drawnow;
    plot(y,'b--','linewidth',3);
    grid on;
end
fclose(comport);
delete(comport);
