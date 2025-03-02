{
TH1F h("h", "count rate",100,0.,5.);
//0.,5. dot needed. The numbers are treated as double now(not int)
ifstream inp; double x;
//decleare input file stream inp and double variable x
inp.open("example.dat");//opens the file

while (inp>>x){h.Fill(x);}
//inp>> x :reads and store it on x
//h.Fill :add value x to histogram
h.Draw();
inp.close();//close file
}
