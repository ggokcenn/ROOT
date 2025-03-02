{
TH1F h("myHist","MyTitle",64,-4,4);
h.FillRandom("gaus");
h.Draw();

TF1 f("g", "gaus",-8,8);
//creates 1D func. named "g" with gaus dist
f.SetParameters(250,0,1);
//parameters for gaus. fun. ampl(height),mean(center),std(width)
f.Draw("Same");//draws on same canvas

}
