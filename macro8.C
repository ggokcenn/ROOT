{

gStyle->SetOptStat();
gStyle->SetOptFit (1111);

TH1F *h1 = new TH1F("h1", "Poisson", 50,0,50);
TH1F *h2 = new TH1F("h2", "Poisson", 50,0,50);
TH1F *h3 = new TH1F("h3", "Poisson", 50,0,50);

//Random Number Generator

TRandom3 RndGen;
Int_t N=1000000;
for(int i=0; i<N; i++){
h1->Fill(RndGen.Poisson (5));
h2->Fill(RndGen.Poisson (20));
h3->Fill(RndGen.Poisson (30));
}

h3->SetTitle("Poisson and Gauss distribution"); 
h3->SetMinimum(0);
h3->GetXaxis()-> SetTitle("x");
h3->GetYaxis()-> SetTitle("Normalized");

h3->SetMinimum(0);
h3->SetMaximum (200000);
h3->Draw("H");
h3->Fit("gaus");

h2->Draw("sameH");
h1->Draw("sameH");

}
