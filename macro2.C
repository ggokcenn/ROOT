void makeHist(){
TH1F *hist=new TH1F("hist","My Histogram",64,-4,4);
//creates a new 1D histogram named "hist"
//title,number of bins,ranges of x-axis
hist->FillRandom("gaus");
//fill the histogram with random numbers but based on gaussion dist.
hist->Draw();
//draws the hist.
}
